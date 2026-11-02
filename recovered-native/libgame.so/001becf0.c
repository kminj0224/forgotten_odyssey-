/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001becf0  Symbol: jpeg_idct_6x6 */

void jpeg_idct_6x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_b8 [6];
  int local_a0 [6];
  int local_88 [6];
  int local_70 [6];
  int local_58 [6];
  int local_40 [6];
  int iStack_28;
  
  uVar3 = DAT_001beeac;
  piVar8 = *(int **)(param_2 + 0x54);
  piVar9 = local_b8;
  piVar6 = piVar8 + 6;
  iVar4 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = piVar9;
  do {
    iVar10 = (int)param_3[0x20] * DAT_001beea0 * piVar8[0x20];
    iVar5 = *piVar8 * (int)*param_3 * 0x2000 + 0x400;
    iVar12 = iVar5 + iVar10;
    iVar5 = iVar5 + iVar10 * -2 >> 0xb;
    iVar16 = (int)param_3[0x10] * DAT_001beea4 * piVar8[0x10];
    iVar10 = iVar12 + iVar16;
    iVar12 = iVar12 - iVar16;
    iVar16 = piVar8[0x28] * (int)param_3[0x28];
    iVar15 = (int)param_3[8] * piVar8[8];
    iVar13 = DAT_001beea8 * (iVar16 + iVar15);
    psVar2 = param_3 + 0x18;
    piVar1 = piVar8 + 0x18;
    piVar8 = piVar8 + 1;
    param_3 = param_3 + 1;
    iVar14 = (int)*psVar2 * *piVar1;
    iVar17 = (iVar14 + iVar15) * 0x2000 + iVar13;
    iVar15 = (iVar15 - iVar14) - iVar16;
    *piVar7 = iVar10 + iVar17 >> 0xb;
    piVar7[0x1e] = iVar10 - iVar17 >> 0xb;
    iVar13 = iVar13 + (iVar16 - iVar14) * 0x2000;
    piVar7[0x18] = iVar5 + iVar15 * -4;
    piVar7[6] = iVar5 + iVar15 * 4;
    piVar7[0xc] = iVar12 + iVar13 >> 0xb;
    piVar7[0x12] = iVar12 - iVar13 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (piVar8 != piVar6);
  do {
    iVar14 = (*piVar9 + 0x10) * 0x2000;
    iVar15 = iVar14 + DAT_001beea0 * piVar9[4];
    iVar14 = iVar14 + DAT_001beea0 * piVar9[4] * -2;
    iVar5 = iVar15 + DAT_001beea4 * piVar9[2];
    iVar15 = iVar15 - DAT_001beea4 * piVar9[2];
    iVar16 = piVar9[1];
    iVar10 = piVar9[5];
    iVar13 = DAT_001beea8 * (iVar10 + iVar16);
    iVar12 = piVar9[3];
    piVar9 = piVar9 + 6;
    iVar17 = (iVar12 + iVar16) * 0x2000 + iVar13;
    iVar16 = (iVar16 - iVar12) - iVar10;
    puVar11 = (undefined *)(*param_4 + param_5);
    *puVar11 = *(undefined *)(iVar4 + (iVar5 + iVar17 >> 0x12 & uVar3));
    iVar13 = iVar13 + (iVar10 - iVar12) * 0x2000;
    puVar11[5] = *(undefined *)(iVar4 + (iVar5 - iVar17 >> 0x12 & uVar3));
    puVar11[1] = *(undefined *)(iVar4 + (iVar14 + iVar16 * 0x2000 >> 0x12 & uVar3));
    puVar11[4] = *(undefined *)(iVar4 + (iVar14 + iVar16 * -0x2000 >> 0x12 & uVar3));
    puVar11[2] = *(undefined *)(iVar4 + (iVar15 + iVar13 >> 0x12 & uVar3));
    puVar11[3] = *(undefined *)(iVar4 + (iVar15 - iVar13 >> 0x12 & uVar3));
    param_4 = param_4 + 1;
  } while (piVar9 != &iStack_28);
  return;
}


