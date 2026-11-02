/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015dc8  Symbol: playBackgroundMusicJNI */

void playBackgroundMusicJNI(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_1c;
  _jmethodID *local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00015c0c(&local_1c,DAT_00015e18 + 0x15dd8,DAT_00015e14 + 0x15dda);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*local_1c + 0x29c))(local_1c,param_1);
    _JNIEnv::CallStaticVoidMethod((_jclass *)local_1c,local_18,local_14,uVar2,param_2);
    _JNIEnv::DeleteLocalRef((_jobject *)local_1c);
    _JNIEnv::DeleteLocalRef((_jobject *)local_1c);
  }
  return;
}


