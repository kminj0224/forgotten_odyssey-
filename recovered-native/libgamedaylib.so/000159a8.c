/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000159a8  Symbol: ReturnCpJni */

int ReturnCpJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_000159d4 + 0x159b2,DAT_000159d8 + 0x159b4,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_000159dc + 0x159c0),
                       *(_jmethodID **)(DAT_000159e0 + 0x159cc));
  }
  return iVar1;
}


