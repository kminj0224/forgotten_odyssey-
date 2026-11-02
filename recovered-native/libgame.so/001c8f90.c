/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c8f90  Symbol: FUN_001c8f90 */

void FUN_001c8f90(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar6 = DAT_001c90ac + 0x1c8fac;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x68);
    iVar3 = DAT_001c90c4;
    piVar2[1] = 0;
    iVar3 = *(int *)(iVar6 + iVar3);
    piVar2[2] = 0;
    *piVar2 = iVar3 + 8;
    piVar2[3] = 0;
    *(undefined *)(piVar2 + 4) = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    *(undefined *)(piVar2 + 9) = 0;
    *(undefined *)((int)piVar2 + 0x25) = 0;
    *(undefined *)(piVar2 + 0x19) = 0;
    *(int **)(param_1 + 8) = piVar2;
  }
  iVar3 = DAT_001c90b0;
  *(undefined *)(piVar2 + 9) = 0x2e;
  iVar4 = *(int *)(param_1 + 8);
  piVar2[2] = iVar3 + 0x1c8fc0;
  *(undefined *)(iVar4 + 0x25) = 0x2c;
  iVar3 = DAT_001c90b4;
  iVar4 = 0;
  piVar2[3] = 0;
  *(undefined *)(piVar2 + 4) = 0;
  iVar3 = **(int **)(iVar6 + iVar3);
  do {
    puVar1 = (undefined *)(iVar3 + iVar4);
    iVar5 = *(int *)(param_1 + 8) + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined *)(iVar5 + 0x26) = *puVar1;
  } while (iVar4 != 0x24);
  iVar3 = 0;
  iVar6 = **(int **)(iVar6 + DAT_001c90b8);
  do {
    puVar1 = (undefined *)(iVar6 + iVar3);
    iVar4 = *(int *)(param_1 + 8) + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined *)(iVar4 + 0x4a) = *puVar1;
  } while (iVar3 != 0x1a);
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = DAT_001c90c0 + 0x1c9044;
  *(int *)(iVar3 + 0x14) = DAT_001c90bc + 0x1c9040;
  *(int *)(iVar3 + 0x1c) = iVar6;
  *(undefined4 *)(iVar3 + 0x18) = 4;
  *(undefined4 *)(iVar3 + 0x20) = 5;
  return;
}


