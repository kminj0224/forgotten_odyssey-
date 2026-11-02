/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc038  Symbol: FUN_001dc038 */

int FUN_001dc038(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc098 + 0x1dc04c);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc09c + 0x1dc07c),DAT_001dc0a0 + 0x1dc080,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


