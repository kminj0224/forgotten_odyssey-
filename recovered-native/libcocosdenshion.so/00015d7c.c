/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015d7c  Symbol: preloadBackgroundMusicJNI */

undefined8
preloadBackgroundMusicJNI(undefined4 param_1,int *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00015c0c(&local_14,DAT_00015dc0 + 0x15d88,DAT_00015dc4 + 0x15d8a);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*local_14 + 0x29c))(local_14,param_1);
    _JNIEnv::CallStaticVoidMethod((_jclass *)local_14,local_10,local_c,uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
  }
  return CONCAT44(local_14,param_1);
}


