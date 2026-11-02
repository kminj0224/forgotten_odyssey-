/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015778  Symbol: setNetResultJni */

void setNetResultJni(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_000157a8 + 0x15786,DAT_000157a4 + 0x15784);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_000157ac + 0x15792),*(_jmethodID **)(DAT_000157b0 + 0x1579e),
               iVar1,param_1);
  }
  return;
}


