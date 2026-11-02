/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f35c4  Symbol: FUN_001f35c4 */

int FUN_001f35c4(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f3624 + 0x1f35d8);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f3628 + 0x1f3608),DAT_001f362c + 0x1f360c,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


