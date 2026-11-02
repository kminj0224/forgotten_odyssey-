/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015af0  Symbol: SetCPJni */

void SetCPJni(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015b20 + 0x15afe,DAT_00015b1c + 0x15afc);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_00015b24 + 0x15b0a),*(_jmethodID **)(DAT_00015b28 + 0x15b16),
               iVar1,param_1);
  }
  return;
}


