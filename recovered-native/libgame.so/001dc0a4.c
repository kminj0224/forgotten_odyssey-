/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc0a4  Symbol: FUN_001dc0a4 */

int FUN_001dc0a4(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc104 + 0x1dc0b8);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc108 + 0x1dc0e8),DAT_001dc10c + 0x1dc0ec,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


