/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000157b4  Symbol: SetCupiPointJni */

void SetCupiPointJni(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_000157e4 + 0x157c2,DAT_000157e0 + 88000);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_000157e8 + 0x157ce),*(_jmethodID **)(DAT_000157ec + 0x157da),
               iVar1,param_1);
  }
  return;
}


