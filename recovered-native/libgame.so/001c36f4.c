/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c36f4  Symbol: jpeg_idct_6x12 */

void jpeg_idct_6x12(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_148 [6];
  int local_130 [6];
  int local_118 [6];
  int local_100 [6];
  int local_e8 [6];
  int local_d0 [6];
  int local_b8 [6];
  int local_a0 [6];
  int local_88 [6];
  int local_70 [6];
  int aiStack_58 [6];
  int local_40 [6];
  int iStack_28;
  
  uVar2 = DAT_001c3a0c;
  iVar3 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = local_148;
  piVar5 = *(int **)(param_2 + 0x54);
  piVar6 = piVar7;
  do {
    iVar16 = (int)param_3[0x20] * DAT_001c39d4 * piVar5[0x20];
    iVar4 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar8 = iVar4 + iVar16;
    iVar16 = iVar4 - iVar16;
    iVar10 = piVar5[0x10] * (int)param_3[0x10];
    iVar15 = (int)param_3[0x30] * piVar5[0x30];
    iVar17 = iVar10 * 0x2000 + iVar15 * -0x2000;
    iVar18 = iVar17 + iVar4;
    iVar11 = iVar10 * DAT_001c39d8 + iVar10 * -0x2000 + iVar15 * -0x2000;
    iVar15 = iVar15 * 0x2000 + iVar10 * DAT_001c39d8;
    iVar4 = iVar4 - iVar17;
    iVar10 = iVar8 + iVar15;
    iVar8 = iVar8 - iVar15;
    iVar15 = iVar11 + iVar16;
    iVar16 = iVar16 - iVar11;
    iVar12 = (int)param_3[0x28] * piVar5[0x28];
    iVar11 = piVar5[0x38] * (int)param_3[0x38];
    iVar17 = piVar5[0x18] * (int)param_3[0x18];
    psVar1 = param_3 + 8;
    piVar13 = piVar5 + 8;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar9 = *piVar13 * (int)*psVar1;
    iVar19 = DAT_001c39e4 * (iVar11 + iVar12 + iVar9);
    iVar22 = DAT_001c39e8 * (iVar12 + iVar9) + iVar19;
    iVar20 = DAT_001c39ec * (iVar11 + iVar12);
    iVar23 = iVar9 * 0x8f7 + iVar17 * DAT_001c39dc + iVar22;
    iVar22 = DAT_001c39f0 * iVar12 + iVar17 * DAT_001c39e0 + iVar20 + iVar22;
    iVar21 = iVar11 * DAT_001c39f4 + (iVar20 - iVar17 * DAT_001c39dc) + iVar19;
    iVar19 = iVar19 + iVar9 * DAT_001c39f8 + iVar17 * DAT_001c39e0 + iVar11 * DAT_001c39fc;
    iVar20 = ((iVar17 - iVar12) + (iVar9 - iVar11)) * DAT_001c3a04;
    iVar11 = iVar20 + DAT_001c3a00 * (iVar9 - iVar11);
    iVar20 = iVar20 + (iVar17 - iVar12) * DAT_001c3a08;
    *piVar6 = iVar10 + iVar23 >> 0xb;
    piVar6[0x42] = iVar10 - iVar23 >> 0xb;
    piVar6[6] = iVar18 + iVar11 >> 0xb;
    piVar6[0x3c] = iVar18 - iVar11 >> 0xb;
    piVar6[0xc] = iVar22 + iVar15 >> 0xb;
    piVar6[0x36] = iVar15 - iVar22 >> 0xb;
    piVar6[0x12] = iVar21 + iVar16 >> 0xb;
    piVar6[0x30] = iVar16 - iVar21 >> 0xb;
    piVar13 = piVar6 + 0x24;
    piVar6[0x18] = iVar20 + iVar4 >> 0xb;
    piVar6[0x2a] = iVar4 - iVar20 >> 0xb;
    piVar6[0x1e] = iVar8 + iVar19 >> 0xb;
    piVar6 = piVar6 + 1;
    *piVar13 = iVar8 - iVar19 >> 0xb;
  } while (piVar6 != local_130);
  do {
    iVar19 = (*piVar7 + 0x10) * 0x2000;
    iVar11 = iVar19 + DAT_001c3a10 * piVar7[4];
    iVar19 = iVar19 + DAT_001c3a10 * piVar7[4] * -2;
    iVar17 = iVar11 + DAT_001c39d4 * piVar7[2];
    iVar11 = iVar11 - DAT_001c39d4 * piVar7[2];
    iVar4 = piVar7[5];
    iVar9 = piVar7[1];
    iVar8 = DAT_001c3a14 * (iVar4 + iVar9);
    iVar15 = piVar7[3];
    piVar7 = piVar7 + 6;
    iVar10 = (iVar9 - iVar15) - iVar4;
    iVar9 = (iVar15 + iVar9) * 0x2000 + iVar8;
    puVar14 = (undefined *)(*param_4 + param_5);
    *puVar14 = *(undefined *)(iVar3 + (iVar17 + iVar9 >> 0x12 & uVar2));
    iVar8 = iVar8 + (iVar4 - iVar15) * 0x2000;
    puVar14[5] = *(undefined *)(iVar3 + (iVar17 - iVar9 >> 0x12 & uVar2));
    puVar14[1] = *(undefined *)(iVar3 + (iVar19 + iVar10 * 0x2000 >> 0x12 & uVar2));
    puVar14[4] = *(undefined *)(iVar3 + (iVar19 + iVar10 * -0x2000 >> 0x12 & uVar2));
    puVar14[2] = *(undefined *)(iVar3 + (iVar11 + iVar8 >> 0x12 & uVar2));
    puVar14[3] = *(undefined *)(iVar3 + (iVar11 - iVar8 >> 0x12 & uVar2));
    param_4 = param_4 + 1;
  } while (piVar7 != &iStack_28);
  return;
}


