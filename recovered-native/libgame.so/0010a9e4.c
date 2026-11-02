/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a9e4  Symbol: unit_180_State */

/* unit_180_State(_Unit_Stage*) */

undefined8 unit_180_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010aab0 + 0x10a9f4);
  iVar1 = *(int *)(iVar4 + 0x174);
  iVar3 = *(int *)(iVar4 + 0x178);
  iVar5 = *(int *)(**(int **)(DAT_0010aaac + 0x10a9f0) + **(int **)(DAT_0010aab4 + 0x10aa00) * 0x24
                   + DAT_0010aab8 + 4);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = DAT_0010aabc;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010aac0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = DAT_0010aac4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x3f800000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0x16c));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x170));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x188) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0x16c));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 0x184) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x170));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010aac8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010aacc;
  return CONCAT44(iVar3,local_20);
}


