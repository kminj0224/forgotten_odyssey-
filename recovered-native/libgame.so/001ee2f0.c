/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee2f0  Symbol: FUN_001ee2f0 */

void FUN_001ee2f0(int *param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + -0xc);
  uVar3 = iVar1 + 1;
  if ((*(uint *)(iVar2 + -8) < uVar3) || (0 < *(int *)(iVar2 + -4))) {
    FUN_001ee274(param_1,uVar3);
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + -0xc);
  }
  *(undefined *)(iVar2 + iVar1) = param_2;
  iVar1 = *param_1;
  if (iVar1 + -0xc != DAT_001ee364 + 0x1ee33c) {
    *(undefined4 *)(iVar1 + -4) = 0;
    *(uint *)(iVar1 + -0xc) = uVar3;
    *(undefined *)(iVar1 + uVar3) = 0;
  }
  return;
}


