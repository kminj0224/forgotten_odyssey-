/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dbe88  Symbol: FUN_001dbe88 */

int FUN_001dbe88(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001dbee8 + 0x1dbe9c));
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dbeec + 0x1dbecc),
                         *(undefined4 *)(DAT_001dbef0 + 0x1dbed0),0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


