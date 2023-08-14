using System;
using System.Collections;
using System.Threading;
using UnityEngine;
using YooAsset;

namespace ET
{
	// 1 mono模式 2 Wolong模式 3 mono热重载模式
	public enum CodeMode
	{
		Mono = 1,
		Wolong = 2,
		Reload = 3,
	}
	public enum EPlayMode
	{
		Editor,
		HostPlayMode, //联机
	}
	public class Init: MonoBehaviour
	{
		public CodeMode CodeMode = CodeMode.Mono;
		public EPlayMode PlayMode = EPlayMode.HostPlayMode;
		public string Services = "v1.0";
		public string HostServer = "http://127.0.0.1/CDN/Android/";//本地自己搭建的CDN

		public string DefaultPackage = "Bundles";
		
		private bool isInit = false;

		IEnumerator AwakeAsync()
		{
			// 1.初始化资源系统
			YooAssets.Initialize();

			// 2.创建默认的资源包
			var package = YooAssets.CreatePackage(DefaultPackage);

			// 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
			YooAssets.SetDefaultPackage(package);

			if (this.PlayMode == EPlayMode.Editor)
			{
				var initParameters = new EditorSimulateModeParameters();
				initParameters.SimulateManifestFilePath  = EditorSimulateModeHelper.SimulateBuild("Bundles");
				yield return package.InitializeAsync(initParameters);
			}
			//联机运行模式
			if (PlayMode == EPlayMode.HostPlayMode)
			{
				var initParameters = new HostPlayModeParameters();
				initParameters.QueryServices = new GameQueryServices();
				initParameters.DefaultHostServer = this.HostServer+this.Services;
				initParameters.FallbackHostServer = this.HostServer+this.Services;
				yield return package.InitializeAsync(initParameters);
			}
			
			//3.获取资源版本
			var packageVersion = package.UpdatePackageVersionAsync();
			yield return packageVersion;

			if (packageVersion.Status != EOperationStatus.Succeed)
			{
				//更新失败
				Debug.LogError(packageVersion.Error);
				yield break;
			}

			//4.更新资源包清单
			var operation = package.UpdatePackageManifestAsync(packageVersion.PackageVersion);
			yield return operation;

			if (operation.Status != EOperationStatus.Succeed)
			{
				//更新失败
				Debug.LogError(operation.Error);
				yield break;
			}
			
			// 5.下载文件
			yield return this.Download();
			
#if ENABLE_IL2CPP
			this.CodeMode = CodeMode.Wolong;
#endif
			
			System.AppDomain.CurrentDomain.UnhandledException += (sender, e) =>
			{
				Log.Error(e.ExceptionObject.ToString());
			};
			SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
			
			DontDestroyOnLoad(gameObject);
			
			LitJson.UnityTypeBindings.Register();

			ETTask.ExceptionHandler += Log.Error;

			Log.ILog = new UnityLogger();

			Options.Instance = new Options();

			
			CodeLoader.Instance.CodeMode = this.CodeMode;
			Options.Instance.Develop = 1;
			Options.Instance.LogLevel = 0;
			
			CodeLoader.Instance.Start();

			
			this.isInit = true;

		}
		IEnumerator Download()
		{
			int downloadingMaxNum = 10;
			int failedTryAgain = 3;
			int timeout = 60;
			var package = YooAssets.GetPackage(DefaultPackage);
			var downloader = package.CreateResourceDownloader(downloadingMaxNum, failedTryAgain, timeout);
    
	
			//没有需要下载的资源
			if (downloader.TotalDownloadCount == 0)
			{        
				// YooAssets.SetDefaultAssetsPackage(package);
				Debug.Log("没有资源可以更新");
				yield break;
			}

			//需要下载的文件总数和总大小
			//	int totalDownloadCount = downloader.TotalDownloadCount;
			//	long totalDownloadBytes = downloader.TotalDownloadBytes;    

			//注册回调方法
			downloader.OnDownloadErrorCallback = OnDownloadErrorFunction;
			downloader.OnDownloadProgressCallback = OnDownloadProgressUpdateFunction;
			downloader.OnDownloadOverCallback = OnDownloadOverFunction;
			downloader.OnStartDownloadFileCallback = OnStartDownloadFileFunction;

			//开启下载
			downloader.BeginDownload();
			yield return downloader;

			//检测下载结果
			if (downloader.Status == EOperationStatus.Succeed)
			{
				//下载成功
				Debug.Log("更新完成");
			}
			else
			{
				//下载失败
				Debug.Log("更新失败");
			}
	
		
		}

		private void Start()
		{
			StartCoroutine(this.AwakeAsync());
		}

		private void Update()
		{
			if (!this.isInit)
			{
				return;
			}
			CodeLoader.Instance.Update();
		}

		private void LateUpdate()
		{
			if (!this.isInit)
			{
				return;
			}
			CodeLoader.Instance.LateUpdate();
		}

		private void OnApplicationQuit()
		{
			CodeLoader.Instance.OnApplicationQuit();
			CodeLoader.Instance.Dispose();
		}
		/// 开始下载回调函数
		private void OnStartDownloadFileFunction(string filename, long sizebytes)
		{
			Debug.Log($"开始下载：文件名：{filename},文件大小{sizebytes}");
		}
		
		/// 下载完成
		private void OnDownloadOverFunction(bool issucceed)
		{
			Debug.Log("下载："+(issucceed?"成功":"失败"));
		}


		/// 更新中
		private void OnDownloadProgressUpdateFunction(int totaldownloadcount, int currentdownloadcount, long totaldownloadbytes, long currentdownloadbytes)
		{
			Debug.Log($"文件总数：{totaldownloadcount}, 已下载文件：{currentdownloadcount} , 文件总大小：{totaldownloadbytes}， 已下载大小：{currentdownloadbytes}");
		}


		/// 下载出错
		private void OnDownloadErrorFunction(string filename, string error)
		{
			Debug.Log($"下载错误：文件名{filename}, 错误信息：{error} ");
		}
	}
}