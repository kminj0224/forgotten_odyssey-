/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001573c  Symbol: getNetResultJni */

int getNetResultJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015768 + 0x15746,DAT_0001576c + 0x15748,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_00015770 + 0x15754),
                       *(_jmethodID **)(DAT_00015774 + 0x15760));
  }
  return iVar1;
}


