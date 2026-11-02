/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a75c  Symbol: unit_130_State */

/* unit_130_State(_Unit_Stage*) */

undefined8 unit_130_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010a81c + 0x10a76c);
  iVar1 = *(int *)(iVar4 + 0x40);
  iVar5 = *(int *)(**(int **)(DAT_0010a818 + 0x10a768) + **(int **)(DAT_0010a820 + 0x10a778) * 0x24
                   + DAT_0010a824 + 4);
  iVar3 = *(int *)(iVar4 + 0x44);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0x40800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010a828;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x40000000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0x38));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x3c));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x54) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0x38));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0x50) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x3c));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined *)(*(int *)(param_1 + 4) + 0xc) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010a82c;
  return CONCAT44(iVar3,local_20);
}


