/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c235c  Symbol: jpeg_idct_12x6 */

void jpeg_idct_12x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
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
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  piVar7 = *(int **)(param_2 + 0x54);
  piVar4 = piVar7 + 8;
  piVar8 = local_e8;
  iVar9 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar5 = piVar8;
  do {
    iVar11 = (int)param_3[0x20] * DAT_001c261c * piVar7[0x20];
    iVar10 = *piVar7 * (int)*param_3 * 0x2000 + 0x400;
    iVar13 = iVar10 + iVar11;
    iVar10 = iVar10 + iVar11 * -2 >> 0xb;
    iVar22 = (int)param_3[0x10] * DAT_001c2620 * piVar7[0x10];
    iVar11 = iVar13 + iVar22;
    iVar13 = iVar13 - iVar22;
    iVar22 = piVar7[0x28] * (int)param_3[0x28];
    iVar17 = (int)param_3[8] * piVar7[8];
    iVar14 = DAT_001c2624 * (iVar22 + iVar17);
    psVar2 = param_3 + 0x18;
    piVar1 = piVar7 + 0x18;
    piVar7 = piVar7 + 1;
    param_3 = param_3 + 1;
    iVar15 = (int)*psVar2 * *piVar1;
    iVar24 = (iVar15 + iVar17) * 0x2000 + iVar14;
    iVar17 = (iVar17 - iVar15) - iVar22;
    *piVar5 = iVar11 + iVar24 >> 0xb;
    piVar5[0x28] = iVar11 - iVar24 >> 0xb;
    iVar14 = iVar14 + (iVar22 - iVar15) * 0x2000;
    piVar5[8] = iVar10 + iVar17 * 4;
    piVar5[0x20] = iVar10 + iVar17 * -4;
    piVar5[0x10] = iVar13 + iVar14 >> 0xb;
    piVar5[0x18] = iVar13 - iVar14 >> 0xb;
    piVar5 = piVar5 + 1;
  } while (piVar7 != piVar4);
  do {
    uVar3 = DAT_001c265c;
    iVar11 = piVar8[2];
    iVar14 = piVar8[6];
    iVar10 = (*piVar8 + 0x10) * 0x2000;
    iVar13 = iVar10 + DAT_001c2620 * piVar8[4];
    iVar18 = iVar10 - DAT_001c2620 * piVar8[4];
    iVar22 = iVar11 * DAT_001c2628 + iVar11 * -0x2000 + iVar14 * -0x2000;
    iVar17 = iVar11 * 0x2000 + iVar14 * -0x2000;
    iVar19 = iVar17 + iVar10;
    iVar14 = iVar14 * 0x2000 + iVar11 * DAT_001c2628;
    iVar10 = iVar10 - iVar17;
    iVar11 = iVar13 + iVar14;
    iVar13 = iVar13 - iVar14;
    iVar14 = iVar22 + iVar18;
    iVar18 = iVar18 - iVar22;
    iVar12 = piVar8[5];
    iVar22 = piVar8[3];
    iVar15 = piVar8[7];
    iVar17 = piVar8[1];
    piVar8 = piVar8 + 8;
    iVar20 = DAT_001c2634 * (iVar12 + iVar17 + iVar15);
    iVar16 = iVar20 + DAT_001c2638 * (iVar12 + iVar17);
    iVar23 = iVar17 * 0x8f7 + iVar22 * DAT_001c262c + iVar16;
    iVar24 = DAT_001c263c * (iVar15 + iVar12);
    iVar21 = iVar15 * DAT_001c2644 + (iVar24 - iVar22 * DAT_001c262c) + iVar20;
    iVar16 = DAT_001c2640 * iVar12 + iVar22 * DAT_001c2630 + iVar24 + iVar16;
    iVar20 = iVar20 + iVar17 * DAT_001c2648 + iVar22 * DAT_001c2630 + iVar15 * DAT_001c264c;
    iVar24 = DAT_001c2650 * ((iVar22 - iVar12) + (iVar17 - iVar15));
    iVar17 = DAT_001c2654 * (iVar17 - iVar15) + iVar24;
    iVar24 = iVar24 + DAT_001c2658 * (iVar22 - iVar12);
    puVar6 = (undefined *)(*param_4 + param_5);
    *puVar6 = *(undefined *)(iVar9 + (iVar23 + iVar11 >> 0x12 & DAT_001c265c));
    puVar6[0xb] = *(undefined *)(iVar9 + (iVar11 - iVar23 >> 0x12 & uVar3));
    puVar6[1] = *(undefined *)(iVar9 + (iVar19 + iVar17 >> 0x12 & uVar3));
    puVar6[10] = *(undefined *)(iVar9 + (iVar19 - iVar17 >> 0x12 & uVar3));
    puVar6[2] = *(undefined *)(iVar9 + (iVar16 + iVar14 >> 0x12 & uVar3));
    puVar6[9] = *(undefined *)(iVar9 + (iVar14 - iVar16 >> 0x12 & uVar3));
    puVar6[3] = *(undefined *)(iVar9 + (iVar21 + iVar18 >> 0x12 & uVar3));
    puVar6[8] = *(undefined *)(iVar9 + (iVar18 - iVar21 >> 0x12 & uVar3));
    puVar6[4] = *(undefined *)(iVar9 + (iVar10 + iVar24 >> 0x12 & uVar3));
    puVar6[7] = *(undefined *)(iVar9 + (iVar10 - iVar24 >> 0x12 & uVar3));
    puVar6[5] = *(undefined *)(iVar9 + (iVar13 + iVar20 >> 0x12 & uVar3));
    puVar6[6] = *(undefined *)(iVar9 + (uVar3 & iVar13 - iVar20 >> 0x12));
    param_4 = param_4 + 1;
  } while (piVar8 != &iStack_28);
  return;
}


