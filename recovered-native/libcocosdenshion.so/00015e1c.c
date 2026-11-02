/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015e1c  Symbol: stopBackgroundMusicJNI */

void stopBackgroundMusicJNI
               (undefined4 param_1,_jclass *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00015c0c(&local_14,DAT_00015e48 + 0x15e28,DAT_00015e4c + 0x15e2a,param_4,param_1);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod(local_14,local_10,local_c);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
  }
  return;
}


