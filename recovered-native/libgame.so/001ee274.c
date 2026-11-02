/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee274  Symbol: FUN_001ee274 */

void FUN_001ee274(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auStack_14 [8];
  
  iVar1 = *param_1;
  if ((param_2 != *(uint *)(iVar1 + -8)) || (0 < *(int *)(iVar1 + -4))) {
    uVar2 = *(uint *)(iVar1 + -0xc);
    if (param_2 < uVar2) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 - uVar2;
    }
    iVar1 = FUN_001ee194((uint *)(iVar1 + -0xc),auStack_14,iVar3);
    if (*param_1 + -0xc != DAT_001ee2ec + 0x1ee2b4) {
      FUN_001ed670(*param_1 + -0xc,auStack_14);
    }
    *param_1 = iVar1;
  }
  return;
}


