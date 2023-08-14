using System.IO;
using UnityEditor;
using UnityEngine;

namespace CopyAotCodeToBundles
{
public class CopyAotCodeToBundles
    {
        
        [MenuItem("CopyAotCodeToBundles/Copy TempCode And Set AB  _F1")]
        public static void CopyTemp() {
 
            string sourceFolder = "Assets/Bundles/Code";
            string tempFolder = "Temp/Bin/Debug/Unity.Mono";
            
            string[] filesToDelete = new string[]
            {
                "mscorlib.dll.bytes", "System.Core.dll.bytes", "System.dll.bytes", "Unity.Mono.dll.bytes", "Unity.ThirdParty.dll.bytes"
            };

            string[] filesToCopy = new string[]
            {
                "mscorlib.dll", "System.Core.dll", "System.dll", "Unity.Mono.dll", "Unity.ThirdParty.dll"
            };
            foreach (var fileName in filesToDelete)
            {
                string filePath = Path.Combine(sourceFolder, fileName);
                if (File.Exists(filePath))
                {
                    File.Delete(filePath);
                    AssetDatabase.Refresh();
                }
            }
            foreach (var fileName in filesToCopy)
            {
                string sourcePath = Path.Combine(tempFolder, fileName);
                string destinationPath = Path.Combine(sourceFolder, $"{fileName}.bytes");

                if (File.Exists(sourcePath))
                {
                    File.Copy(sourcePath, destinationPath);
                    AssetDatabase.Refresh();
                    AssetImporter.GetAtPath(destinationPath).assetBundleName = "code.unity3d";
                }
            }
            Debug.Log("CopyAotCodeToBundles 本次操作完成");
        }
        [MenuItem("CopyAotCodeToBundles/Copy HybridCLR PC And Set AB _F2")]
        public static void CopyHybridCLRForPC() {
 
            string sourceFolder = "Assets/Bundles/Code";
            string tempFolder = "HybridCLRData/AssembliesPostIl2CppStrip/StandaloneWindows64";
            
            string[] filesToDelete = new string[]
            {
                "mscorlib.dll.bytes", "System.Core.dll.bytes", "System.dll.bytes", "Unity.Mono.dll.bytes", "Unity.ThirdParty.dll.bytes"
            };

            string[] filesToCopy = new string[]
            {
                "mscorlib.dll", "System.Core.dll", "System.dll", "Unity.Mono.dll", "Unity.ThirdParty.dll"
            };
            foreach (var fileName in filesToDelete)
            {
                string filePath = Path.Combine(sourceFolder, fileName);
                if (File.Exists(filePath))
                {
                    File.Delete(filePath);
                    AssetDatabase.Refresh();
                }
            }
            foreach (var fileName in filesToCopy)
            {
                string sourcePath = Path.Combine(tempFolder, fileName);
                string destinationPath = Path.Combine(sourceFolder, $"{fileName}.bytes");

                if (File.Exists(sourcePath))
                {
                    File.Copy(sourcePath, destinationPath);
                    AssetDatabase.Refresh();
                    AssetImporter.GetAtPath(destinationPath).assetBundleName = "code.unity3d";
                }
            }
            Debug.Log("CopyAotCodeToBundles 本次操作完成");
        }
        [MenuItem("CopyAotCodeToBundles/Copy HybridCLR Android And Set AB _F3")]
        public static void CopyHybridCLR() {
 
            string sourceFolder = "Assets/Bundles/Code";
            string tempFolder = "HybridCLRData/AssembliesPostIl2CppStrip/Android";
            
            string[] filesToDelete = new string[]
            {
                "mscorlib.dll.bytes", "System.Core.dll.bytes", "System.dll.bytes", "Unity.Mono.dll.bytes", "Unity.ThirdParty.dll.bytes"
            };

            string[] filesToCopy = new string[]
            {
                "mscorlib.dll", "System.Core.dll", "System.dll", "Unity.Mono.dll", "Unity.ThirdParty.dll"
            };
            foreach (var fileName in filesToDelete)
            {
                string filePath = Path.Combine(sourceFolder, fileName);
                if (File.Exists(filePath))
                {
                    File.Delete(filePath);
                    AssetDatabase.Refresh();
                }
            }
            foreach (var fileName in filesToCopy)
            {
                string sourcePath = Path.Combine(tempFolder, fileName);
                string destinationPath = Path.Combine(sourceFolder, $"{fileName}.bytes");

                if (File.Exists(sourcePath))
                {
                    File.Copy(sourcePath, destinationPath);
                    AssetDatabase.Refresh();
                    AssetImporter.GetAtPath(destinationPath).assetBundleName = "code.unity3d";
                }
            }
            Debug.Log("CopyAotCodeToBundles 本次操作完成");
        }
    }
}