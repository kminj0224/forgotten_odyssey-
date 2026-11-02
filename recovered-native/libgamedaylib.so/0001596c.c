/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001596c  Symbol: GameContinueJni */

int GameContinueJni(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000155b4(DAT_00015998 + 0x15976,DAT_0001599c + 0x15978,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = _JNIEnv::CallStaticIntMethod
                      (**(_jclass ***)(DAT_000159a0 + 0x15984),
                       *(_jmethodID **)(DAT_000159a4 + 0x15990));
  }
  return iVar1;
}


