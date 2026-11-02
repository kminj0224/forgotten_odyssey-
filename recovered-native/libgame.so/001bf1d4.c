/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bf1d4  Symbol: jpeg_idct_3x3 */

void jpeg_idct_3x3(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_4c [10];
  
  uVar5 = DAT_001bf2d4;
  iVar4 = DAT_001bf2d0;
  iVar3 = DAT_001bf2cc;
  piVar7 = *(int **)(param_2 + 0x54);
  piVar9 = piVar7 + 3;
  piVar11 = local_4c;
  iVar12 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar6 = piVar11;
  do {
    iVar13 = (int)*param_3 * *piVar7 * 0x2000 + 0x400;
    piVar1 = piVar7 + 8;
    iVar10 = (int)param_3[0x10] * piVar7[0x10] * DAT_001bf2cc;
    iVar15 = iVar13 + iVar10;
    psVar2 = param_3 + 8;
    piVar7 = piVar7 + 1;
    param_3 = param_3 + 1;
    iVar14 = (int)*psVar2 * *piVar1 * DAT_001bf2d0;
    *piVar6 = iVar15 + iVar14 >> 0xb;
    piVar6[6] = iVar15 - iVar14 >> 0xb;
    piVar6[3] = iVar13 + iVar10 * -2 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (piVar7 != piVar9);
  do {
    iVar13 = (*piVar11 + 0x10) * 0x2000;
    iVar10 = piVar11[2];
    puVar8 = (undefined *)(*param_4 + param_5);
    iVar14 = piVar11[1];
    iVar15 = iVar13 + iVar10 * iVar3;
    piVar11 = piVar11 + 3;
    *puVar8 = *(undefined *)(iVar12 + (iVar14 * iVar4 + iVar15 >> 0x12 & uVar5));
    puVar8[2] = *(undefined *)(iVar12 + (iVar15 - iVar14 * iVar4 >> 0x12 & uVar5));
    puVar8[1] = *(undefined *)(iVar12 + (iVar13 + iVar10 * iVar3 * -2 >> 0x12 & uVar5));
    param_4 = param_4 + 1;
  } while (piVar11 != local_4c + 9);
  return;
}


