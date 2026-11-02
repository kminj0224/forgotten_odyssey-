/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e811c  Symbol: FUN_001e811c */

undefined * FUN_001e811c(undefined *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  iVar3 = (int)param_2 + *(int *)(iVar4 + -0xc);
  iVar1 = *(int *)(iVar3 + 0x70);
  *param_1 = 0;
  *(int **)(param_1 + 4) = param_2;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar3 + 0x14);
    if (uVar2 != 0) goto LAB_001e8184;
    FUN_001e7d14();
    iVar4 = *param_2;
  }
  iVar3 = (int)param_2 + *(int *)(iVar4 + -0xc);
  uVar2 = *(uint *)(iVar3 + 0x14);
  if (uVar2 == 0) {
    *param_1 = 1;
    return param_1;
  }
LAB_001e8184:
  FUN_001d0d2c(iVar3,uVar2 | 4,iVar3,iVar4,param_4);
  return param_1;
}


