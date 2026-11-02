/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a908  Symbol: unit_170_State */

/* unit_170_State(_Unit_Stage*) */

undefined8 unit_170_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  uVar2 = DAT_0010a9d4;
  iVar4 = *(int *)(DAT_0010a9c8 + 0x10a918);
  iVar1 = *(int *)(iVar4 + 0x148);
  iVar5 = *(int *)(**(int **)(DAT_0010a9c4 + 0x10a914) + **(int **)(DAT_0010a9cc + 0x10a924) * 0x24
                   + DAT_0010a9d0 + 4);
  iVar3 = *(int *)(iVar4 + 0x14c);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010a9d8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x3fc00000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0x140));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x144));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x15c) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0x140));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0x158) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x144));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x54) = DAT_0010a9dc;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010a9e0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010a9d8;
  return CONCAT44(iVar3,local_20);
}


