/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001622c  Symbol: resumeAllEffectsJNI */

void resumeAllEffectsJNI(undefined4 param_1,_jclass *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00015c0c(&local_14,DAT_00016258 + 0x16238,DAT_0001625c + 0x1623a,param_4,param_1);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod(local_14,local_10,local_c);
    _JNIEnv::DeleteLocalRef((_jobject *)local_14);
  }
  return;
}


