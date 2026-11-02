/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000157f0  Symbol: MoveStoreJni */

void MoveStoreJni(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015820 + 0x157fe,DAT_0001581c + 0x157fc);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod
              (**(_jclass ***)(DAT_00015824 + 0x1580a),*(_jmethodID **)(DAT_00015828 + 0x15816),
               iVar1,param_1);
  }
  return;
}


