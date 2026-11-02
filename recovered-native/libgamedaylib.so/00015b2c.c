/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015b2c  Symbol: GetInternetJni */

int GetInternetJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015b58 + 0x15b36,DAT_00015b5c + 0x15b38,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_00015b60 + 0x15b44),
                       *(_jmethodID **)(DAT_00015b64 + 0x15b50));
  }
  return iVar1;
}


