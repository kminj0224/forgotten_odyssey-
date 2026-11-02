/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015eec  Symbol: isBackgroundMusicPlayingJNI */

uint isBackgroundMusicPlayingJNI
               (undefined4 param_1,_jclass *param_2,_jmethodID *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  _jclass *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  uVar1 = FUN_00015c0c(&local_14,DAT_00015f20 + 0x15ef8,DAT_00015f24 + 0x15efa,param_4,param_1);
  if (uVar1 != 0) {
    iVar2 = _JNIEnv::CallStaticBooleanMethod(local_14,local_10,local_c);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
    uVar1 = (uint)(iVar2 != 0);
  }
  return uVar1;
}


