/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c3a18  Symbol: jpeg_idct_5x10 */

void jpeg_idct_5x10(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
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
  int local_f0 [5];
  int local_dc [5];
  int local_c8 [5];
  int local_b4 [5];
  int local_a0 [5];
  int local_8c [5];
  int local_78 [5];
  int local_64 [5];
  int local_50 [5];
  int local_3c [5];
  int iStack_28;
  
  uVar1 = DAT_001c3cc0;
  iVar2 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar8 = local_f0;
  piVar5 = *(int **)(param_2 + 0x54);
  piVar7 = piVar8;
  do {
    iVar16 = (int)param_3[0x20] * piVar5[0x20] * DAT_001c3c90;
    iVar9 = DAT_001c3c94 * (int)param_3[0x20] * piVar5[0x20];
    iVar3 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar12 = iVar3 - iVar9;
    iVar19 = iVar3 + iVar16;
    iVar3 = iVar3 + (iVar16 - iVar9) * -2 >> 0xb;
    iVar16 = DAT_001c3c98 * (piVar5[0x30] * (int)param_3[0x30] + piVar5[0x10] * (int)param_3[0x10]);
    iVar9 = DAT_001c3c9c * piVar5[0x30] * (int)param_3[0x30] + iVar16;
    iVar16 = DAT_001c3ca0 * piVar5[0x10] * (int)param_3[0x10] + iVar16;
    iVar13 = iVar16 + iVar19;
    iVar19 = iVar19 - iVar16;
    iVar17 = iVar9 + iVar12;
    iVar12 = iVar12 - iVar9;
    psVar4 = param_3 + 0x28;
    piVar10 = piVar5 + 0x28;
    iVar9 = (int)param_3[0x38] * piVar5[0x38] + (int)param_3[0x18] * piVar5[0x18];
    iVar11 = (int)param_3[0x18] * piVar5[0x18] - (int)param_3[0x38] * piVar5[0x38];
    iVar14 = iVar9 * DAT_001c3ca4;
    iVar18 = (int)*psVar4 * *piVar10 * 0x2000;
    iVar9 = iVar9 * DAT_001c3ca8;
    iVar21 = iVar11 * DAT_001c3cac + iVar18;
    iVar16 = (int)param_3[8] * piVar5[8];
    iVar15 = iVar16 * DAT_001c3cb0 + iVar9 + iVar21;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar18 = (iVar18 - iVar11 * DAT_001c3cac) + iVar11 * -0x1000;
    iVar11 = (iVar16 - iVar11) - (int)*psVar4 * *piVar10;
    iVar20 = (iVar16 * DAT_001c3cb8 - iVar14) - iVar18;
    iVar9 = iVar16 * DAT_001c3cb4 + (iVar21 - iVar9);
    *piVar7 = iVar15 + iVar13 >> 0xb;
    piVar7[0x2d] = iVar13 - iVar15 >> 0xb;
    iVar18 = (iVar16 * DAT_001c3cbc - iVar14) + iVar18;
    piVar7[5] = iVar17 + iVar20 >> 0xb;
    piVar7[0x28] = iVar17 - iVar20 >> 0xb;
    piVar7[10] = iVar3 + iVar11 * 4;
    piVar7[0x23] = iVar3 + iVar11 * -4;
    piVar7[0x1e] = iVar12 - iVar18 >> 0xb;
    piVar7[0xf] = iVar18 + iVar12 >> 0xb;
    piVar7[0x14] = iVar19 + iVar9 >> 0xb;
    piVar7[0x19] = iVar19 - iVar9 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (piVar7 != local_dc);
  do {
    iVar18 = piVar8[2] - piVar8[4];
    iVar3 = DAT_001c3cc4 * (piVar8[4] + piVar8[2]);
    iVar9 = (*piVar8 + 0x10) * 0x2000;
    iVar11 = iVar18 * 0xb50 + iVar9;
    iVar16 = iVar11 + iVar3;
    piVar7 = piVar8 + 1;
    piVar5 = piVar8 + 3;
    iVar11 = iVar11 - iVar3;
    iVar3 = DAT_001c3c98 * (*piVar5 + *piVar7);
    piVar8 = piVar8 + 5;
    iVar12 = DAT_001c3ca0 * *piVar7 + iVar3;
    iVar3 = iVar3 + DAT_001c3c9c * *piVar5;
    puVar6 = (undefined *)(*param_4 + param_5);
    *puVar6 = *(undefined *)(iVar2 + (iVar16 + iVar12 >> 0x12 & uVar1));
    puVar6[4] = *(undefined *)(iVar2 + (iVar16 - iVar12 >> 0x12 & uVar1));
    puVar6[1] = *(undefined *)(iVar2 + (iVar11 + iVar3 >> 0x12 & uVar1));
    puVar6[3] = *(undefined *)(iVar2 + (iVar11 - iVar3 >> 0x12 & uVar1));
    puVar6[2] = *(undefined *)(iVar2 + (iVar9 + iVar18 * -0x2d40 >> 0x12 & uVar1));
    param_4 = param_4 + 1;
  } while (piVar8 != &iStack_28);
  return;
}


