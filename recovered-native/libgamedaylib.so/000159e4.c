/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000159e4  Symbol: getRatingJni */

int getRatingJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015a10 + 0x159ee,DAT_00015a14 + 0x159f0,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_00015a18 + 0x159fc),
                       *(_jmethodID **)(DAT_00015a1c + 0x15a08));
  }
  return iVar1;
}


