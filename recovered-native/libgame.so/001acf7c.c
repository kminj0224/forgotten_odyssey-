/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001acf7c  Symbol: FUN_001acf7c */

void FUN_001acf7c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int param_5;
  int *param_6;
  int param_7;
  
  iVar5 = *(int *)(param_1 + 0x1c4);
  iVar1 = *(int *)(iVar5 + 0x18);
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x14),
                       *(undefined4 *)(iVar5 + 0x10),0);
    *(int *)(iVar5 + 0xc) = iVar2;
    iVar1 = *(int *)(iVar5 + 0x18);
  }
  else {
    iVar2 = *(int *)(iVar5 + 0xc);
  }
  uVar4 = *(int *)(iVar5 + 0x10) - iVar1;
  uVar3 = *(int *)(param_1 + 0x74) - *(int *)(iVar5 + 0x14);
  uVar6 = param_7 - *param_6;
  if (uVar3 < uVar6) {
    uVar6 = uVar3;
  }
  if (uVar4 < uVar6) {
    uVar6 = uVar4;
  }
  (**(code **)(*(int *)(param_1 + 0x1e0) + 4))
            (param_1,iVar1 * 4 + iVar2,param_5 + *param_6 * 4,uVar6);
  *param_6 = *param_6 + uVar6;
  uVar6 = uVar6 + *(int *)(iVar5 + 0x18);
  *(uint *)(iVar5 + 0x18) = uVar6;
  if (*(uint *)(iVar5 + 0x10) <= uVar6) {
    *(uint *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(uint *)(iVar5 + 0x10);
    *(undefined4 *)(iVar5 + 0x18) = 0;
  }
  return;
}


