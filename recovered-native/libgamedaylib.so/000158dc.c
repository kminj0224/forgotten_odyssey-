/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000158dc  Symbol: VibrationJni */

void VibrationJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015904 + 0x158e6,DAT_00015908 + 0x158e8,param_3,param_4,param_4);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_0001590c + 0x158f4),*(_jmethodID **)(DAT_00015910 + 0x15900));
  }
  return;
}


