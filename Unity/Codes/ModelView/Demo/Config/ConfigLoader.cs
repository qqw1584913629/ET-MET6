using System.Collections.Generic;
using UnityEngine;
using YooAsset;

namespace ET
{
    public class ConfigLoader: IConfigLoader
    {
        public void GetAllConfigBytes(Dictionary<string, byte[]> output)
        {
            // Dictionary<string, UnityEngine.Object> keys = ResourcesComponent.Instance.GetBundleAll("config.unity3d");
            //
            // foreach (var kv in keys)
            // {
            //     TextAsset v = kv.Value as TextAsset;
            //     string key = kv.Key;
            //     output[key] = v.bytes;
            // }
            AssetInfo[] assetInfos = YooAssets.GetAssetInfos("config");
            foreach (var assetInfo in assetInfos)
            {
                RawFileOperationHandle handle = ResourcesComponentYooAsset.Instance.LoadRawFileAsset(assetInfo.Address);
                output.Add(assetInfo.Address,handle.GetRawFileData());
             
            }
        }

        public byte[] GetOneConfigBytes(string configName)
        {
            // TextAsset v = ResourcesComponent.Instance.GetAsset("config.unity3d", configName) as TextAsset;
            // return v.bytes;
            RawFileOperationHandle handle = ResourcesComponentYooAsset.Instance.LoadRawFileAsset(configName);
            return handle.GetRawFileData();
        }
    }
}