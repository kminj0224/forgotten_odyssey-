/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001be9e0  Symbol: jpeg_idct_7x7 */

void jpeg_idct_7x7(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int local_ec [7];
  int local_d0 [7];
  int local_b4 [7];
  int local_98 [7];
  int local_7c [7];
  int aiStack_60 [7];
  int local_44 [7];
  int iStack_28;
  
  piVar9 = *(int **)(param_2 + 0x54);
  piVar10 = local_ec;
  piVar6 = piVar9 + 7;
  iVar4 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = piVar10;
  do {
    iVar5 = piVar9[0x20] * (int)param_3[0x20];
    iVar15 = (int)param_3[0x30] * piVar9[0x30];
    iVar13 = *piVar9 * (int)*param_3 * 0x2000 + 0x400;
    iVar16 = (iVar5 - iVar15) * DAT_001becbc;
    iVar11 = piVar9[0x10] * (int)param_3[0x10];
    iVar17 = (iVar11 - iVar5) * DAT_001becc0;
    iVar18 = iVar13 + iVar5 * DAT_001becc4 + iVar16 + iVar17;
    iVar21 = (iVar15 + iVar11) * DAT_001becc8 + iVar13;
    iVar22 = iVar21 + iVar16 + DAT_001beccc * iVar15;
    iVar21 = DAT_001becd0 * iVar11 + iVar17 + iVar21;
    iVar12 = piVar9[0x28] * (int)param_3[0x28];
    iVar14 = (int)param_3[0x18] * piVar9[0x18];
    psVar2 = param_3 + 8;
    param_3 = param_3 + 1;
    piVar1 = piVar9 + 8;
    piVar9 = piVar9 + 1;
    iVar17 = (int)*psVar2 * *piVar1;
    iVar16 = DAT_001becd4 * (iVar14 + iVar17);
    iVar19 = DAT_001becd8 * (iVar12 + iVar17);
    iVar17 = (iVar17 - iVar14) * DAT_001becdc;
    iVar14 = DAT_001bece0 * (iVar14 + iVar12);
    iVar20 = (iVar16 + iVar19) - iVar17;
    iVar12 = iVar12 * DAT_001bece4 + iVar19 + iVar14;
    *piVar7 = iVar20 + iVar22 >> 0xb;
    piVar7[0x2a] = iVar22 - iVar20 >> 0xb;
    iVar17 = iVar14 + iVar16 + iVar17;
    piVar7[7] = iVar18 + iVar17 >> 0xb;
    piVar7[0x23] = iVar18 - iVar17 >> 0xb;
    piVar7[0x1c] = iVar21 - iVar12 >> 0xb;
    piVar7[0xe] = iVar21 + iVar12 >> 0xb;
    piVar7[0x15] = DAT_001bece8 * (iVar5 - (iVar15 + iVar11)) + iVar13 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (piVar9 != piVar6);
  do {
    uVar3 = DAT_001becec;
    iVar13 = piVar10[4];
    iVar17 = piVar10[6];
    iVar11 = piVar10[2];
    iVar16 = (iVar13 - iVar17) * DAT_001becbc;
    iVar21 = DAT_001becc0 * (iVar11 - iVar13);
    iVar14 = (*piVar10 + 0x10) * 0x2000;
    iVar20 = iVar14 + iVar13 * DAT_001becc4 + iVar16 + iVar21;
    iVar5 = (iVar17 + iVar11) * DAT_001becc8 + iVar14;
    iVar15 = iVar5 + iVar16 + DAT_001beccc * iVar17;
    iVar21 = DAT_001becd0 * iVar11 + iVar21 + iVar5;
    iVar12 = piVar10[3];
    iVar18 = piVar10[1];
    iVar5 = (iVar12 + iVar18) * DAT_001becd4;
    iVar16 = DAT_001becd8 * (piVar10[5] + iVar18);
    iVar19 = (iVar18 - iVar12) * DAT_001becdc;
    iVar12 = (piVar10[5] + iVar12) * DAT_001bece0;
    iVar18 = iVar12 + iVar5 + iVar19;
    iVar19 = (iVar5 + iVar16) - iVar19;
    iVar5 = iVar16 + iVar12 + piVar10[5] * DAT_001bece4;
    piVar10 = piVar10 + 7;
    puVar8 = (undefined *)(*param_4 + param_5);
    *puVar8 = *(undefined *)(iVar4 + (iVar19 + iVar15 >> 0x12 & DAT_001becec));
    puVar8[6] = *(undefined *)(iVar4 + (iVar15 - iVar19 >> 0x12 & uVar3));
    puVar8[1] = *(undefined *)(iVar4 + (iVar20 + iVar18 >> 0x12 & uVar3));
    puVar8[5] = *(undefined *)(iVar4 + (iVar20 - iVar18 >> 0x12 & uVar3));
    puVar8[2] = *(undefined *)(iVar4 + (iVar21 + iVar5 >> 0x12 & uVar3));
    puVar8[4] = *(undefined *)(iVar4 + (iVar21 - iVar5 >> 0x12 & uVar3));
    puVar8[3] = *(undefined *)
                 (iVar4 + (uVar3 & DAT_001bece8 * (iVar13 - (iVar17 + iVar11)) + iVar14 >> 0x12));
    param_4 = param_4 + 1;
  } while (piVar10 != &iStack_28);
  return;
}


