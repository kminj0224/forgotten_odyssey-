/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010abb8  Symbol: unit_260_State */

/* unit_260_State(_Unit_Stage*) */

undefined8 unit_260_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  uVar2 = DAT_0010ac90;
  iVar4 = *(int *)(DAT_0010ac84 + 0x10abc8);
  iVar5 = *(int *)(**(int **)(DAT_0010ac80 + 0x10abc4) + **(int **)(DAT_0010ac88 + 0x10abd2) * 0x24
                   + DAT_0010ac8c + 4);
  iVar1 = *(int *)(iVar4 + 0xf0);
  iVar3 = *(int *)(iVar4 + 0xf4);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010ac94;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x40000000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0xe8));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0xec));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x104) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0xe8));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x100) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0xec));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010ac94;
  return CONCAT44(iVar3,local_20);
}


