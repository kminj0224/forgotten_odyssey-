/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015ab4  Symbol: CallreturnCPJni */

int CallreturnCPJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015ae0 + 0x15abe,DAT_00015ae4 + 0x15ac0,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_00015ae8 + 0x15acc),
                       *(_jmethodID **)(DAT_00015aec + 0x15ad8));
  }
  return iVar1;
}


