/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001582c  Symbol: EndGameJni */

void EndGameJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015854 + 0x15836,DAT_00015858 + 0x15838,param_3,param_4,param_4);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_0001585c + 0x15844),*(_jmethodID **)(DAT_00015860 + 0x15850));
  }
  return;
}


