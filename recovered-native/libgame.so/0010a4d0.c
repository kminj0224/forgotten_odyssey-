/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a4d0  Symbol: unit_110_State */

/* unit_110_State(_Unit_Stage*) */

undefined8 unit_110_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010a588 + 0x10a4e0);
  iVar1 = *(int *)(iVar4 + 0x14);
  iVar5 = *(int *)(**(int **)(DAT_0010a584 + 0x10a4dc) + **(int **)(DAT_0010a58c + 0x10a4ec) * 0x24
                   + DAT_0010a590 + 4);
  iVar3 = *(int *)(iVar4 + 0x18);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010a594;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010a598;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x40000000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0xc));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x10));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x28) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0xc));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0x24) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x10));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010a59c;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010a5a0;
  return CONCAT44(iVar3,local_20);
}


