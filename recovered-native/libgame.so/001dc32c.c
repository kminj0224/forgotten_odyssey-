/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc32c  Symbol: FUN_001dc32c */

int FUN_001dc32c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc38c + 0x1dc340);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc390 + 0x1dc370),DAT_001dc394 + 0x1dc374,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


