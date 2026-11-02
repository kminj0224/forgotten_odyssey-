/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a67c  Symbol: unit_150_State */

/* unit_150_State(_Unit_Stage*) */

undefined8 unit_150_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010a744 + 0x10a68c);
  iVar5 = *(int *)(**(int **)(DAT_0010a740 + 0x10a688) + **(int **)(DAT_0010a748 + 0x10a696) * 0x24
                   + DAT_0010a74c + 4);
  iVar1 = *(int *)(iVar4 + 0x98);
  iVar3 = *(int *)(iVar4 + 0x9c);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010a750;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010a754;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x3f800000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0x90));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x94));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0xac) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0x90));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0xa8) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x94));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010a758;
  return CONCAT44(iVar3,local_20);
}


