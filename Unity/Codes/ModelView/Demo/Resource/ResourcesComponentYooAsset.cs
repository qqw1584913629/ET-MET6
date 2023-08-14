#region << 文 件 说 明 >>

/*----------------------------------------------------------------
// 文件名称：ResourcesComponentYooasset
// 创 建 者：郑以航
// 创建时间：2023年08月10日 星期四 10:45
//===============================================================
// 功能描述：
//		
//
//----------------------------------------------------------------*/

#endregion

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;
using YooAsset;

namespace ET
{
    [FriendClass(typeof (ResourcesComponentYooAsset))]
    public static class ResourcesComponentYooAssetSystem
    {
        [ObjectSystem]
        public class ResourcesComponentYooAssetAwakeSystem: AwakeSystem<ResourcesComponentYooAsset>
        {
            public override void Awake(ResourcesComponentYooAsset self)
            {
                ResourcesComponentYooAsset.Instance = self;

                //if (Define.IsAsync)
                {
                    self.DefaulPackage = "Bundles";
                    var package = YooAssets.GetPackage(self.DefaulPackage);
                    YooAssets.SetDefaultPackage(package);
                    self.ResourcePackagesDic.Add(self.DefaulPackage,package); 
                    
                }
            }
        }
        [ObjectSystem]
        public class ResourcesComponentYooAssetDestroySystem: DestroySystem<ResourcesComponentYooAsset>
        {
            public override void Destroy(ResourcesComponentYooAsset self)
            {
                ResourcesComponentYooAsset.Instance = null;

                foreach (var abInfo in self.ResourcePackagesDic)
                {
                    abInfo.Value.UnloadUnusedAssets();
                }
                self.DefaulPackage = "";
                self.ResourcePackagesDic.Clear();
                self.ClearTmp();
                

            }
        }
        public static void ClearRawFileTmp(this ResourcesComponentYooAsset self)
        {

            foreach (var RawFile in self.RawFileOperationHandleTemp)
            {
                RawFile.Value.Release();
            }
            self.RawFileOperationHandleTemp.Clear();

        
            self.SubAssetOperationHandlesTemp.Clear();
            
        }
        
        public static void ClearSubAssetTmp(this ResourcesComponentYooAsset self)
        {
    
            foreach (var SubAsset in self.SubAssetOperationHandlesTemp)
            {
                SubAsset.Value.Release();
            }
            
            self.SubAssetOperationHandlesTemp.Clear();
            
        }
        
        public static void ClearAssetTmp(this ResourcesComponentYooAsset self)
        {
            foreach (var Asset in self.AssetOperationHandlesTemp)
            {
                Asset.Value.Release();
            }
            self.AssetOperationHandlesTemp.Clear();
            
        }
        public static void ClearTmp(this ResourcesComponentYooAsset self)
        {
            foreach (var Asset in self.AssetOperationHandlesTemp)
            {
                Asset.Value.Release();
            }
            self.AssetOperationHandlesTemp.Clear();

            foreach (var RawFile in self.RawFileOperationHandleTemp)
            {
                RawFile.Value.Release();
            }
            self.RawFileOperationHandleTemp.Clear();

            foreach (var SubAsset in self.SubAssetOperationHandlesTemp)
            {
                SubAsset.Value.Release();
            }
            
            self.SubAssetOperationHandlesTemp.Clear();
            
        }
                /// <summary>
        /// 设置默认ResourcePackage
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void SetYooAssetsDefaultPackage(this ResourcesComponentYooAsset self, string packageName)
        {
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                package = YooAssets.GetPackage(packageName);
                if (package!=null)
                {
                    self.ResourcePackagesDic.Add(packageName,package);
                }
            }

            if (package!=null)
            {
                YooAssets.SetDefaultPackage(package);
            }
            
        }

        /// <summary>
        /// 添加一个资源包
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void AddPackage(this ResourcesComponentYooAsset self, string packageName)
        {
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                package = YooAssets.GetPackage(packageName);
                if (package!=null)
                {
                    self.ResourcePackagesDic.Add(packageName,package);
                }
            }
            
        }
        
        /// <summary>
        /// 卸载一个资源包
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void UnloadPackage(this ResourcesComponentYooAsset self, string packageName)
        {
            if (self.ResourcePackagesDic.ContainsKey(packageName))
            {
                self.ResourcePackagesDic[packageName].UnloadUnusedAssets();
                self.ResourcePackagesDic.Remove(packageName);
            }
            
        }
        
        
        /// <summary>
        /// 卸载一个Asset资源
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void UnloadAssetOperationHandle(this ResourcesComponentYooAsset self, string assetName)
        {
            if (self.AssetOperationHandlesTemp.ContainsKey(assetName))
            {
                self.AssetOperationHandlesTemp[assetName].Release();
                self.AssetOperationHandlesTemp.Remove(assetName);
            }
            
        }
        
        /// <summary>
        /// 卸载一个SubAsset资源
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void UnloadSubAssetOperationHandle(this ResourcesComponentYooAsset self, string assetName)
        {
            if (self.SubAssetOperationHandlesTemp.ContainsKey(assetName))
            {
                self.SubAssetOperationHandlesTemp[assetName].Release();
                self.SubAssetOperationHandlesTemp.Remove(assetName);
            }
            
        }
        
        /// <summary>
        /// 卸载一个RawFile资源
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName"></param>
        public static void UnloadRawFileOperationHandle(this ResourcesComponentYooAsset self, string assetName)
        {
            if (self.RawFileOperationHandleTemp.ContainsKey(assetName))
            {
                self.RawFileOperationHandleTemp[assetName].Release();
                self.RawFileOperationHandleTemp.Remove(assetName);
            }
            
        }
        
        
        /// <summary>
        /// 同步加载资源默认资源包
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static  T LoadAsset<T>(this ResourcesComponentYooAsset self, string path) where T : UnityEngine.Object
        {
            Debug.Log("需要加载的资源："+path);

            //从缓存获取
            T tmp = self.GetTmpAsset<T>(path);

            if (tmp!=null)
            {
                return tmp;
            }
            
            var  handle= YooAssets.LoadAssetSync<T>(path);
           
            self.AssetOperationHandlesTemp.Add(path,handle);
            
            Debug.Log("加载资源："+handle.AssetObject.name);
            
            return handle.AssetObject as T;
        }
        
        
        /// <summary>
        /// 异步加载资
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T LoadAsset<T>(this ResourcesComponentYooAsset self, string packageName,string assetName) where T : UnityEngine.Object
        {
            Debug.Log("需要加载的资源："+assetName);

            //从缓存获取
            T tmp = self.GetTmpAsset<T>(assetName);

            if (tmp!=null)
            {
                return tmp;
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
         
            var  handle= package.LoadAssetSync<T>(assetName);
           
            self.AssetOperationHandlesTemp.Add(assetName,handle);
           
            return handle.AssetObject as T;
        }
        
        

        /// <summary>
        /// 异步加载资源默认资源包
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<T> LoadAssetAsync<T>(this ResourcesComponentYooAsset self, string path) where T : UnityEngine.Object
        {
            //从缓存获取
            T tmp = self.GetTmpAsset<T>(path);

            if (tmp!=null)
            {
                return tmp;
            }
            
            self.ProcessingAddressablesAsyncLoaderCount++;
             var  handle= YooAssets.LoadAssetAsync<T>(path);
             await handle.Task;
             self.AssetOperationHandlesTemp.Add(path,handle);
             self.ProcessingAddressablesAsyncLoaderCount--;
             return handle.AssetObject as T;
        }

        /// <summary>
        /// 异步加载资
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<T> LoadAssetAsync<T>(this ResourcesComponentYooAsset self, string packageName,string assetName) where T : UnityEngine.Object
        {
            //从缓存获取
            T tmp = self.GetTmpAsset<T>(assetName);

            if (tmp!=null)
            {
                return tmp;
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
            self.ProcessingAddressablesAsyncLoaderCount++;
            var  handle= package.LoadAssetAsync<T>(assetName);
            await handle.Task;
            self.AssetOperationHandlesTemp.Add(assetName,handle);
            self.ProcessingAddressablesAsyncLoaderCount++;
            return handle.AssetObject as T;
        }

        private static T GetTmpAsset<T>(this ResourcesComponentYooAsset self, string assetName) where T : UnityEngine.Object
        {
            if (!self.AssetOperationHandlesTemp.TryGetValue(assetName,out AssetOperationHandle assetOperationHandle))
            {
                return null;
            }

            return assetOperationHandle.AssetObject as T;
        }
        
        
          
        /// <summary>
        /// 同步加载图集内容加载资Sprite
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static  Sprite LoadAsset(this ResourcesComponentYooAsset self,string assetName ,string spriteName) 
        {
            //从缓存获取
            SubAssetsOperationHandle tmp = self.GetTmpSubAsset(assetName);

            if (tmp!=null)
            {
                return tmp.GetSubAssetObject<Sprite>(spriteName);
            }
            
            var  handle= YooAssets.LoadSubAssetsSync<SpriteAtlas>(assetName);
           
            self.SubAssetOperationHandlesTemp.Add(assetName,handle);
            return handle.GetSubAssetObject<Sprite>(spriteName);
        }
        
        
        /// <summary>
        /// 同步加载图集内容加载资Sprite
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static Sprite LoadAsset(this ResourcesComponentYooAsset self, string packageName,string assetName ,string spriteName) 
        {
            //从缓存获取
            SubAssetsOperationHandle tmp = self.GetTmpSubAsset(assetName);

            if (tmp!=null)
            {
                return tmp.GetSubAssetObject<Sprite>(spriteName);
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
         
            var  handle= package.LoadSubAssetsSync<Sprite>(assetName);
           
            self.SubAssetOperationHandlesTemp.Add(assetName,handle);
           
            return handle.GetSubAssetObject<Sprite>(spriteName);
        }
        
        

        /// <summary>
        /// 异步加载资源默认资源包Sprite
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<Sprite> LoadAssetAsync(this ResourcesComponentYooAsset self, string path,string spriteName) 
        {
            //从缓存获取
            SubAssetsOperationHandle tmp = self.GetTmpSubAsset(path);

            if (tmp!=null)
            {
                return tmp.GetSubAssetObject<Sprite>(spriteName);
            }
            
             self.ProcessingAddressablesAsyncLoaderCount++;
             var  handle= YooAssets.LoadSubAssetsAsync<Sprite>(path);
             await handle.Task;
             self.SubAssetOperationHandlesTemp.Add(path,handle);
             self.ProcessingAddressablesAsyncLoaderCount--;
             return handle.GetSubAssetObject<Sprite>(spriteName);
        }

        /// <summary>
        /// 异步加载资Sprite
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<Sprite> LoadSubAssetAsync(this ResourcesComponentYooAsset self, string packageName,string assetName ,string spriteName) 
        {
            //从缓存获取
            SubAssetsOperationHandle tmp = self.GetTmpSubAsset(assetName);

            if (tmp!=null)
            {
                return tmp.GetSubAssetObject<Sprite>(spriteName);
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
            self.ProcessingAddressablesAsyncLoaderCount++;
            var  handle= package.LoadSubAssetsAsync<Sprite>(assetName);
            await handle.Task;
            self.SubAssetOperationHandlesTemp.Add(assetName,handle);
            self.ProcessingAddressablesAsyncLoaderCount++;
            return handle.GetSubAssetObject<Sprite>(spriteName);
        }

        private static SubAssetsOperationHandle GetTmpSubAsset(this ResourcesComponentYooAsset self, string assetName)
        {
            if (!self.SubAssetOperationHandlesTemp.TryGetValue(assetName,out SubAssetsOperationHandle assetOperationHandle))
            {
                return null;
            }

            return assetOperationHandle;
        }

        public static async ETTask<string> LoadScene(this ResourcesComponentYooAsset self, string path)
        {
            // var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
            //     bool activateOnLoad = true;
            //     SceneOperationHandle handle = YooAssets.LoadSceneAsync(path, sceneMode, activateOnLoad);
            //     await handle.Task;
            //     Debug.Log($"Scene name is {handle.SceneObject.name}");
            //     return handle.SceneObject.name;
            string location = path;
            var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
            bool suspendLoad = false;
            SceneOperationHandle handle = YooAssets.LoadSceneAsync(location, sceneMode, suspendLoad);
            await handle.Task;
            return handle.SceneObject.name;
        }
        
        /// <summary>
        /// 同步加载资源默认资源包RawFile
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static  RawFileOperationHandle LoadRawFileAsset(this ResourcesComponentYooAsset self, string path) 
        {
            //从缓存获取
            RawFileOperationHandle tmp = self.RawFileAsset(path);

            if (tmp!=null)
            {
                return tmp;
            }
            
            var  handle= YooAssets.LoadRawFileSync(path);
           
            self.RawFileOperationHandleTemp.Add(path,handle);
            
            return handle;
        }
        
        
        /// <summary>
        /// 同步加载资源默认资源包RawFile
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static RawFileOperationHandle LoadRawFileAsset<T>(this ResourcesComponentYooAsset self, string packageName,string assetName) 
        {
            //从缓存获取
            RawFileOperationHandle tmp = self.RawFileAsset(assetName);

            if (tmp!=null)
            {
                return tmp;
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
         
            var  handle= package.LoadRawFileSync(assetName);
           
            self.RawFileOperationHandleTemp.Add(assetName,handle);
           
            return handle;
        }
        
        

        /// <summary>
        /// 异步加载资源默认资源包LoadRawFile
        /// </summary>
        /// <param name="self"></param>
        /// <param name="path"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<RawFileOperationHandle> LoadRawFileAsyn(this ResourcesComponentYooAsset self, string path)
        {
            //从缓存获取
            RawFileOperationHandle tmp = self.RawFileAsset(path);

            if (tmp!=null)
            {
                return tmp;
            }
            
            self.ProcessingAddressablesAsyncLoaderCount++;
             var  handle= YooAssets.LoadRawFileAsync(path);
             await handle.Task;
             self.RawFileOperationHandleTemp.Add(path,handle);
             self.ProcessingAddressablesAsyncLoaderCount--;
             return handle;
        }

        /// <summary>
        /// 异步加载资LoadRawFile
        /// </summary>
        /// <param name="self"></param>
        /// <param name="packageName">资源包</param>
        /// <param name="assetName">资源名称</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static async ETTask<RawFileOperationHandle> LoadRawFileAsyn(this ResourcesComponentYooAsset self, string packageName,string assetName) 
        {
            //从缓存获取
            RawFileOperationHandle tmp = self.RawFileAsset(assetName);

            if (tmp!=null)
            {
                return tmp;
            }
            
            if (!self.ResourcePackagesDic.TryGetValue(packageName,out ResourcePackage package))
            {
                return null;
            }
            self.ProcessingAddressablesAsyncLoaderCount++;
            var  handle= package.LoadRawFileAsync(assetName);
            await handle.Task;
            self.RawFileOperationHandleTemp.Add(assetName,handle);
            self.ProcessingAddressablesAsyncLoaderCount++;
            return handle;
        }

        private static  RawFileOperationHandle RawFileAsset(this ResourcesComponentYooAsset self, string assetName) 
        {
            if (!self.RawFileOperationHandleTemp.TryGetValue(assetName,out RawFileOperationHandle rawFileOperationHandle))
            {
                return null;
            }

            return rawFileOperationHandle;
        }
    }
    [ComponentOf(typeof(Scene))]
    public class ResourcesComponentYooAsset: Entity, IAwake, IDestroy
    {
        public static ResourcesComponentYooAsset Instance { get; set; }

        public  string DefaulPackage;
        
        public  Dictionary<string, ResourcePackage> ResourcePackagesDic = new Dictionary<string, ResourcePackage>();
        
        public int ProcessingAddressablesAsyncLoaderCount = 0; //处理可寻址异步加载器计数
        public Dictionary<string, AssetOperationHandle> AssetOperationHandlesTemp=new Dictionary<string, AssetOperationHandle>(); //临时资源
      
        public Dictionary<string, SubAssetsOperationHandle> SubAssetOperationHandlesTemp =new Dictionary<string, SubAssetsOperationHandle>(); //临时资源

        public Dictionary<string, RawFileOperationHandle> RawFileOperationHandleTemp = new Dictionary<string, RawFileOperationHandle>(); //临时资源
    }
}