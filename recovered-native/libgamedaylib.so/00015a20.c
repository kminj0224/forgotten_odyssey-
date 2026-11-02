/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015a20  Symbol: setRatingJni */

void setRatingJni(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015a50 + 0x15a2e,DAT_00015a4c + 0x15a2c);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_00015a54 + 0x15a3a),*(_jmethodID **)(DAT_00015a58 + 0x15a46),
               iVar1,param_1);
  }
  return;
}


