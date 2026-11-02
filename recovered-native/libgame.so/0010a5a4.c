/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a5a4  Symbol: unit_120_State */

/* unit_120_State(_Unit_Stage*) */

undefined8 unit_120_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010a660 + 0x10a5b4);
  iVar1 = *(int *)(iVar4 + 0x6c);
  iVar5 = *(int *)(**(int **)(DAT_0010a65c + 0x10a5b0) + **(int **)(DAT_0010a664 + 0x10a5c0) * 0x24
                   + DAT_0010a668 + 4);
  iVar3 = *(int *)(iVar4 + 0x70);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0x40800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010a66c;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = DAT_0010a670;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 100));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x68));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x80) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 100));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0x7c) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x68));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010a674;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010a678;
  return CONCAT44(iVar3,local_20);
}


