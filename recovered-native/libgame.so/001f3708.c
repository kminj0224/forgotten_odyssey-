/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f3708  Symbol: FUN_001f3708 */

int FUN_001f3708(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f3768 + 0x1f371c);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f376c + 0x1f374c),DAT_001f3770 + 0x1f3750,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


