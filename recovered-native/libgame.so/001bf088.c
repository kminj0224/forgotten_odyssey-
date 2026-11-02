/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bf088  Symbol: jpeg_idct_4x4 */

void jpeg_idct_4x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  int local_38 [4];
  int iStack_28;
  
  uVar6 = DAT_001bf1d0;
  iVar5 = DAT_001bf1c8;
  iVar4 = DAT_001bf1c4;
  iVar7 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar12 = local_68;
  piVar9 = *(int **)(param_2 + 0x54);
  piVar11 = piVar12;
  do {
    iVar14 = (*piVar9 * (int)*param_3 - piVar9[0x10] * (int)param_3[0x10]) * 4;
    sVar3 = param_3[0x18];
    iVar8 = piVar9[0x18];
    iVar16 = (piVar9[0x10] * (int)param_3[0x10] + *piVar9 * (int)*param_3) * 4;
    psVar2 = param_3 + 8;
    piVar1 = piVar9 + 8;
    param_3 = param_3 + 1;
    piVar9 = piVar9 + 1;
    iVar13 = (sVar3 * iVar8 + (int)*psVar2 * *piVar1) * DAT_001bf1c4 + 0x400;
    iVar15 = iVar13 + (int)*psVar2 * *piVar1 * DAT_001bf1c8 >> 0xb;
    piVar11[0xc] = iVar16 - iVar15;
    *piVar11 = iVar15 + iVar16;
    iVar8 = iVar13 + sVar3 * iVar8 * DAT_001bf1cc >> 0xb;
    piVar11[4] = iVar8 + iVar14;
    piVar11[8] = iVar14 - iVar8;
    piVar11 = piVar11 + 1;
  } while (piVar11 != local_58);
  do {
    iVar13 = ((*piVar12 + 0x10) - piVar12[2]) * 0x2000;
    piVar11 = piVar12 + 1;
    piVar9 = piVar12 + 3;
    iVar15 = (*piVar12 + 0x10 + piVar12[2]) * 0x2000;
    piVar12 = piVar12 + 4;
    iVar8 = (*piVar9 + *piVar11) * iVar4;
    iVar14 = iVar8 + *piVar11 * iVar5;
    iVar8 = iVar8 + DAT_001bf1cc * *piVar9;
    puVar10 = (undefined *)(param_5 + *param_4);
    *puVar10 = *(undefined *)(iVar7 + (iVar14 + iVar15 >> 0x12 & uVar6));
    puVar10[3] = *(undefined *)(iVar7 + (iVar15 - iVar14 >> 0x12 & uVar6));
    puVar10[1] = *(undefined *)(iVar7 + (iVar8 + iVar13 >> 0x12 & uVar6));
    puVar10[2] = *(undefined *)(iVar7 + (iVar13 - iVar8 >> 0x12 & uVar6));
    param_4 = param_4 + 1;
  } while (piVar12 != &iStack_28);
  return;
}


