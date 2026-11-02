/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c514c  Symbol: FUN_001c514c */

undefined4 FUN_001c514c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_001c51dc + 0x1c5160;
  iVar1 = FUN_0021100c(*(undefined4 *)(iVar2 + DAT_001c51e0),0xffffffff,param_3,
                       *(undefined4 *)(iVar2 + DAT_001c51e0),param_4);
  if (iVar1 != 2) {
    return param_1;
  }
  FUN_001e7d14(*(undefined4 *)(iVar2 + DAT_001c51e4));
  FUN_001e7d14(*(undefined4 *)(iVar2 + DAT_001c51e8));
  FUN_001e7d14(*(undefined4 *)(iVar2 + DAT_001c51ec));
  FUN_001e9dec(*(undefined4 *)(iVar2 + DAT_001c51f0));
  FUN_001e9dec(*(undefined4 *)(iVar2 + DAT_001c51f4));
  FUN_001e9dec(*(undefined4 *)(iVar2 + DAT_001c51f8));
  return param_1;
}


