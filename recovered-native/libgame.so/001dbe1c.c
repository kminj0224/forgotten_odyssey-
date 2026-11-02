/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dbe1c  Symbol: FUN_001dbe1c */

int FUN_001dbe1c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001dbe7c + 0x1dbe30));
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dbe80 + 0x1dbe60),
                         *(undefined4 *)(DAT_001dbe84 + 0x1dbe64),0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


