/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a830  Symbol: unit_160_State */

/* unit_160_State(_Unit_Stage*) */

undefined8 unit_160_State(_Unit_Stage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = *(int *)(DAT_0010a8f0 + 0x10a840);
  iVar1 = *(int *)(iVar4 + 0x11c);
  iVar5 = *(int *)(**(int **)(DAT_0010a8ec + 0x10a83c) + **(int **)(DAT_0010a8f4 + 0x10a84c) * 0x24
                   + DAT_0010a8f8 + 4);
  iVar3 = *(int *)(iVar4 + 0x120);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0x40800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = DAT_0010a8fc;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0x40000000;
  local_20 = *(int *)(param_1 + 4);
  if (iVar5 < 0x15) {
    uVar2 = __floatsisf(iVar5 * iVar1 + *(int *)(iVar4 + 0x114));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(iVar3 * iVar5 + *(int *)(iVar4 + 0x118));
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  else {
    uVar2 = __floatsisf((iVar5 + -0x14) * *(int *)(iVar4 + 0x130) + iVar1 * 0x14 +
                        *(int *)(iVar4 + 0x114));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_20 = *(int *)(param_1 + 4);
    uVar2 = __floatsisf(*(int *)(iVar4 + 300) * (iVar5 + -0x14) + iVar3 * 0x14 +
                        *(int *)(iVar4 + 0x118));
    *(undefined4 *)(local_20 + 0x38) = uVar2;
  }
  *(undefined *)(*(int *)(param_1 + 4) + 0xc) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = DAT_0010a900;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_0010a904;
  return CONCAT44(iVar3,local_20);
}


