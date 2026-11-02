/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010aad0  Symbol: unit_230_State */

/* unit_230_State(_Unit_Stage*) */

undefined8 unit_230_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010aba4 + 0x10aae0);
  iVar5 = *(int *)(**(int **)(DAT_0010aba0 + 0x10aadc) + **(int **)(DAT_0010aba8 + 0x10aaea) * 0x24
                   + DAT_0010abac + 4);
  iVar1 = *(int *)(iVar4 + 0xc4);
  iVar3 = *(int *)(iVar4 + 200);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010abb0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010abb4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x40000000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0xbc));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0xc0));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0xd8) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0xbc));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0xd4) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0xc0));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = 0x40800000;
  *(undefined *)(*(int *)(param_1 + 4) + 0xc) = 1;
  return CONCAT44(iVar3,local_20);
}


