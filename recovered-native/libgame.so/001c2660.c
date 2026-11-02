/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2660  Symbol: jpeg_idct_10x5 */

void jpeg_idct_10x5(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  piVar13 = *(int **)(param_2 + 0x54);
  iVar10 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar9 = local_c8;
  psVar12 = param_3 + 0x10;
  piVar6 = piVar13 + 0x10;
  piVar17 = local_68;
  piVar7 = piVar9;
  do {
    iVar19 = DAT_001c28ec * ((int)psVar12[0x10] * piVar6[0x10] + (int)*psVar12 * *piVar6);
    iVar20 = (int)*psVar12 * *piVar6 - (int)psVar12[0x10] * piVar6[0x10];
    iVar11 = (int)*param_3 * *piVar13 * 0x2000 + 0x400;
    iVar25 = iVar20 * 0xb50 + iVar11;
    iVar21 = iVar25 - iVar19;
    iVar25 = iVar25 + iVar19;
    psVar3 = psVar12 + 8;
    psVar12 = psVar12 + 1;
    piVar1 = piVar6 + 8;
    piVar6 = piVar6 + 1;
    psVar4 = param_3 + 8;
    param_3 = param_3 + 1;
    piVar2 = piVar13 + 8;
    piVar13 = piVar13 + 1;
    iVar19 = DAT_001c28f0 * ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2);
    iVar24 = DAT_001c28f4 * (int)*psVar4 * *piVar2 + iVar19;
    iVar19 = DAT_001c28f8 * (int)*psVar3 * *piVar1 + iVar19;
    *piVar7 = iVar25 + iVar24 >> 0xb;
    piVar17[8] = iVar25 - iVar24 >> 0xb;
    piVar7[8] = iVar21 + iVar19 >> 0xb;
    *piVar17 = iVar21 - iVar19 >> 0xb;
    piVar17 = piVar17 + 1;
    piVar7[0x10] = iVar11 + iVar20 * -0x2d40 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (piVar7 != local_a8);
  do {
    uVar5 = DAT_001c2920;
    iVar21 = piVar9[4] * DAT_001c28fc;
    iVar19 = DAT_001c2900 * piVar9[4];
    iVar20 = (*piVar9 + 0x10) * 0x2000;
    iVar11 = iVar20 - iVar19;
    iVar14 = iVar20 + (iVar21 - iVar19) * -2;
    iVar20 = iVar20 + iVar21;
    iVar19 = DAT_001c28f0 * (piVar9[6] + piVar9[2]);
    iVar21 = iVar19 + DAT_001c28f4 * piVar9[2];
    iVar19 = iVar19 + DAT_001c28f8 * piVar9[6];
    iVar24 = iVar21 + iVar20;
    iVar20 = iVar20 - iVar21;
    iVar15 = iVar19 + iVar11;
    iVar11 = iVar11 - iVar19;
    iVar25 = piVar9[7] + piVar9[3];
    iVar18 = piVar9[3] - piVar9[7];
    iVar22 = iVar25 * DAT_001c2904;
    piVar17 = piVar9 + 5;
    iVar19 = *piVar17 * 0x2000;
    iVar23 = iVar18 * DAT_001c2908 + iVar19;
    iVar25 = DAT_001c290c * iVar25;
    iVar21 = piVar9[1];
    piVar9 = piVar9 + 8;
    iVar26 = iVar21 * DAT_001c2910 + iVar25 + iVar23;
    iVar16 = iVar21 * DAT_001c2914 + (iVar23 - iVar25);
    iVar23 = (iVar21 - iVar18) * 0x2000 + *piVar17 * -0x2000;
    iVar19 = (iVar19 - iVar18 * DAT_001c2908) + iVar18 * -0x1000;
    iVar25 = (iVar21 * DAT_001c291c - iVar22) + iVar19;
    iVar19 = (iVar21 * DAT_001c2918 - iVar22) - iVar19;
    puVar8 = (undefined *)(*param_4 + param_5);
    *puVar8 = *(undefined *)(iVar10 + (iVar26 + iVar24 >> 0x12 & DAT_001c2920));
    puVar8[9] = *(undefined *)(iVar10 + (iVar24 - iVar26 >> 0x12 & uVar5));
    puVar8[1] = *(undefined *)(iVar10 + (iVar15 + iVar19 >> 0x12 & uVar5));
    puVar8[8] = *(undefined *)(iVar10 + (iVar15 - iVar19 >> 0x12 & uVar5));
    puVar8[2] = *(undefined *)(iVar10 + (iVar23 + iVar14 >> 0x12 & uVar5));
    puVar8[7] = *(undefined *)(iVar10 + (iVar14 - iVar23 >> 0x12 & uVar5));
    puVar8[3] = *(undefined *)(iVar10 + (iVar11 + iVar25 >> 0x12 & uVar5));
    puVar8[6] = *(undefined *)(iVar10 + (iVar11 - iVar25 >> 0x12 & uVar5));
    puVar8[4] = *(undefined *)(iVar10 + (iVar16 + iVar20 >> 0x12 & uVar5));
    puVar8[5] = *(undefined *)(iVar10 + (uVar5 & iVar20 - iVar16 >> 0x12));
    param_4 = param_4 + 1;
  } while (piVar9 != &iStack_28);
  return;
}


