/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015f28  Symbol: getBackgroundMusicVolumeJNI */

undefined4
getBackgroundMusicVolumeJNI
          (undefined4 param_1,_jclass *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00015c0c(&local_14,DAT_00015f5c + 0x15f34,DAT_00015f60 + 0x15f36,param_4,param_1);
  uVar2 = DAT_00015f64;
  if (iVar1 != 0) {
    uVar2 = _JNIEnv::CallStaticFloatMethod(local_14,local_10,local_c);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
  }
  return uVar2;
}


