/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000158a0  Symbol: GetLanguageJni */

int GetLanguageJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_000158cc + 0x158aa,DAT_000158d0 + 0x158ac,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_000158d4 + 0x158b8),
                       *(_jmethodID **)(DAT_000158d8 + 0x158c4));
  }
  return iVar1;
}


