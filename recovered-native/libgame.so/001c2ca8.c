/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2ca8  Symbol: jpeg_idct_4x2 */

void jpeg_idct_4x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_48 [4];
  int local_38 [4];
  int iStack_28;
  
  uVar5 = DAT_001c2d88;
  iVar4 = DAT_001c2d84;
  iVar3 = DAT_001c2d80;
  piVar8 = *(int **)(param_2 + 0x54);
  piVar9 = local_48;
  piVar6 = piVar8 + 4;
  iVar11 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = piVar9;
  do {
    sVar1 = *param_3;
    iVar12 = *piVar8;
    sVar2 = param_3[8];
    iVar14 = piVar8[8];
    piVar8 = piVar8 + 1;
    param_3 = param_3 + 1;
    *piVar7 = iVar14 * sVar2 + sVar1 * iVar12;
    piVar7[4] = sVar1 * iVar12 - iVar14 * sVar2;
    piVar7 = piVar7 + 1;
  } while (piVar8 != piVar6);
  do {
    iVar14 = ((*piVar9 + 4) - piVar9[2]) * 0x2000;
    piVar7 = piVar9 + 1;
    piVar6 = piVar9 + 3;
    iVar15 = (*piVar9 + 4 + piVar9[2]) * 0x2000;
    piVar9 = piVar9 + 4;
    iVar12 = (*piVar6 + *piVar7) * iVar3;
    iVar13 = iVar12 + *piVar7 * iVar4;
    iVar12 = iVar12 + DAT_001c2d8c * *piVar6;
    puVar10 = (undefined *)(param_5 + *param_4);
    *puVar10 = *(undefined *)(iVar11 + (iVar13 + iVar15 >> 0x10 & uVar5));
    puVar10[3] = *(undefined *)(iVar11 + (iVar15 - iVar13 >> 0x10 & uVar5));
    puVar10[1] = *(undefined *)(iVar11 + (iVar12 + iVar14 >> 0x10 & uVar5));
    puVar10[2] = *(undefined *)(iVar11 + (iVar14 - iVar12 >> 0x10 & uVar5));
    param_4 = param_4 + 1;
  } while (piVar9 != &iStack_28);
  return;
}


