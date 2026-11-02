/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015864  Symbol: ReturnResultJni */

int ReturnResultJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015890 + 0x1586e,DAT_00015894 + 0x15870,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_00015898 + 0x1587c),
                       *(_jmethodID **)(DAT_0001589c + 0x15888));
  }
  return iVar1;
}


