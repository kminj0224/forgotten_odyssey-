/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9134  Symbol: FUN_001c9134 */

void FUN_001c9134(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar5 = DAT_001c9240 + 0x1c9150;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x128);
    iVar6 = DAT_001c9258;
    piVar2[1] = 0;
    iVar6 = *(int *)(iVar5 + iVar6);
    piVar2[2] = 0;
    *piVar2 = iVar6 + 8;
    piVar2[3] = 0;
    *(undefined *)(piVar2 + 4) = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    *(undefined *)(piVar2 + 0x49) = 0;
    *(int **)(param_1 + 8) = piVar2;
  }
  piVar2[2] = DAT_001c9244 + 0x1c9160;
  piVar2[9] = 0x2e;
  puVar3 = (uint *)(piVar2 + 10);
  *puVar3 = 0x2c;
  iVar6 = DAT_001c9248;
  iVar4 = 0;
  piVar2[3] = 0;
  *(undefined *)(piVar2 + 4) = 0;
  iVar6 = **(int **)(iVar5 + iVar6);
  do {
    pbVar1 = (byte *)(iVar6 + iVar4);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = (uint)*pbVar1;
  } while (iVar4 != 0x24);
  puVar3 = (uint *)(piVar2 + 0x2e);
  iVar6 = 0;
  iVar5 = **(int **)(iVar5 + DAT_001c924c);
  do {
    pbVar1 = (byte *)(iVar5 + iVar6);
    iVar6 = iVar6 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = (uint)*pbVar1;
  } while (iVar6 != 0x1a);
  iVar5 = DAT_001c9254 + 0x1c91d8;
  piVar2[5] = DAT_001c9250 + 0x1c91d4;
  piVar2[7] = iVar5;
  piVar2[6] = 4;
  piVar2[8] = 5;
  return;
}


