/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c32bc  Symbol: jpeg_idct_7x14 */

void jpeg_idct_7x14(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
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
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_1b0 [7];
  int local_194 [7];
  int local_178 [7];
  int local_15c [7];
  int local_140 [7];
  int local_124 [7];
  int local_108 [7];
  int local_ec [7];
  int local_d0 [7];
  int local_b4 [7];
  int local_98 [7];
  int local_7c [7];
  int aiStack_60 [7];
  int local_44 [7];
  int iStack_28;
  
  iVar3 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar10 = local_1b0;
  piVar6 = *(int **)(param_2 + 0x54);
  piVar8 = piVar10;
  do {
    iVar11 = (int)param_3[0x20] * piVar6[0x20];
    iVar4 = *piVar6 * (int)*param_3 * 0x2000 + 0x400;
    iVar13 = iVar4 + iVar11 * DAT_001c3688;
    iVar14 = iVar4 - DAT_001c368c * iVar11;
    iVar5 = iVar4 + ((iVar11 * DAT_001c3688 + iVar11 * DAT_001c3684) - DAT_001c368c * iVar11) * -2
            >> 0xb;
    iVar20 = (int)param_3[0x30] * piVar6[0x30];
    iVar4 = iVar4 + iVar11 * DAT_001c3684;
    iVar11 = piVar6[0x10] * (int)param_3[0x10];
    iVar12 = DAT_001c3694 * (iVar20 + iVar11);
    iVar21 = iVar12 + iVar11 * DAT_001c3690;
    iVar12 = iVar12 + DAT_001c3698 * iVar20;
    iVar16 = iVar21 + iVar13;
    iVar13 = iVar13 - iVar21;
    iVar22 = iVar4 - iVar12;
    iVar11 = DAT_001c36a0 * iVar11 + DAT_001c369c * iVar20;
    iVar12 = iVar12 + iVar4;
    iVar20 = iVar14 + iVar11;
    iVar14 = iVar14 - iVar11;
    iVar4 = piVar6[0x28] * (int)param_3[0x28];
    iVar11 = (int)param_3[0x38] * piVar6[0x38];
    iVar17 = (int)param_3[8] * piVar6[8];
    iVar23 = (iVar4 + iVar17) * DAT_001c36a4;
    iVar24 = (iVar4 + iVar17) * DAT_001c36a8;
    psVar1 = param_3 + 0x18;
    piVar9 = piVar6 + 0x18;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    iVar21 = *piVar9 * (int)*psVar1;
    iVar25 = (iVar21 + iVar17) * DAT_001c36ac;
    iVar26 = iVar17 * DAT_001c36b0 + iVar11 * 0x2000 + iVar25 + iVar24;
    iVar15 = (iVar17 - iVar21) * DAT_001c36b4 + iVar11 * -0x2000;
    iVar18 = iVar17 * DAT_001c36b8 + iVar23 + iVar15;
    iVar19 = (iVar4 + iVar21) * DAT_001c36c0 + iVar11 * -0x2000;
    iVar25 = iVar25 + iVar21 * DAT_001c36bc + iVar19;
    iVar19 = iVar19 + iVar24 + iVar4 * DAT_001c36c4;
    iVar24 = (iVar4 - iVar21) * DAT_001c36c8;
    iVar23 = iVar11 * 0x2000 + iVar4 * DAT_001c36cc + iVar23 + iVar24;
    iVar15 = iVar15 + iVar24 + iVar21 * DAT_001c36d0;
    iVar11 = ((iVar17 - iVar21) - iVar4) + iVar11;
    *piVar8 = iVar26 + iVar16 >> 0xb;
    piVar8[0x5b] = iVar16 - iVar26 >> 0xb;
    piVar8[7] = iVar12 + iVar25 >> 0xb;
    piVar8[0x54] = iVar12 - iVar25 >> 0xb;
    piVar8[0xe] = iVar19 + iVar20 >> 0xb;
    piVar8[0x4d] = iVar20 - iVar19 >> 0xb;
    piVar8[0x15] = iVar5 + iVar11 * 4;
    piVar8[0x46] = iVar5 + iVar11 * -4;
    piVar8[0x1c] = iVar23 + iVar14 >> 0xb;
    piVar8[0x3f] = iVar14 - iVar23 >> 0xb;
    piVar8[0x23] = iVar22 + iVar15 >> 0xb;
    piVar9 = piVar8 + 1;
    piVar8[0x38] = iVar22 - iVar15 >> 0xb;
    piVar8[0x2a] = iVar18 + iVar13 >> 0xb;
    piVar8[0x31] = iVar13 - iVar18 >> 0xb;
    piVar8 = piVar9;
  } while (piVar9 != local_194);
  do {
    uVar2 = DAT_001c36ec;
    iVar13 = piVar10[4];
    iVar11 = piVar10[6];
    iVar12 = piVar10[2];
    iVar5 = (iVar13 - iVar11) * DAT_001c368c;
    iVar20 = DAT_001c3684 * (iVar12 - iVar13);
    iVar14 = (*piVar10 + 0x10) * 0x2000;
    iVar16 = iVar14 + iVar13 * DAT_001c36d4 + iVar5 + iVar20;
    iVar4 = (iVar11 + iVar12) * DAT_001c3688 + iVar14;
    iVar15 = iVar4 + iVar5 + DAT_001c36d8 * iVar11;
    iVar20 = DAT_001c36dc * iVar12 + iVar20 + iVar4;
    iVar21 = piVar10[3];
    iVar24 = piVar10[1];
    iVar4 = (iVar21 + iVar24) * DAT_001c36e0;
    iVar5 = DAT_001c36a0 * (piVar10[5] + iVar24);
    iVar23 = (iVar24 - iVar21) * DAT_001c36e4;
    iVar21 = (piVar10[5] + iVar21) * DAT_001c369c;
    iVar24 = iVar21 + iVar4 + iVar23;
    iVar23 = (iVar4 + iVar5) - iVar23;
    iVar4 = iVar5 + iVar21 + piVar10[5] * DAT_001c36e8;
    piVar10 = piVar10 + 7;
    puVar7 = (undefined *)(*param_4 + param_5);
    *puVar7 = *(undefined *)(iVar3 + (iVar23 + iVar15 >> 0x12 & DAT_001c36ec));
    puVar7[6] = *(undefined *)(iVar3 + (iVar15 - iVar23 >> 0x12 & uVar2));
    puVar7[1] = *(undefined *)(iVar3 + (iVar16 + iVar24 >> 0x12 & uVar2));
    puVar7[5] = *(undefined *)(iVar3 + (iVar16 - iVar24 >> 0x12 & uVar2));
    puVar7[2] = *(undefined *)(iVar3 + (iVar20 + iVar4 >> 0x12 & uVar2));
    puVar7[4] = *(undefined *)(iVar3 + (iVar20 - iVar4 >> 0x12 & uVar2));
    puVar7[3] = *(undefined *)
                 (iVar3 + (uVar2 & DAT_001c36f0 * (iVar13 - (iVar11 + iVar12)) + iVar14 >> 0x12));
    param_4 = param_4 + 1;
  } while (piVar10 != &iStack_28);
  return;
}


