/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2924  Symbol: jpeg_idct_8x4 */

void jpeg_idct_8x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
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
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  iVar5 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar10 = local_a8;
  piVar7 = *(int **)(param_2 + 0x54);
  piVar9 = piVar10;
  do {
    iVar12 = (*piVar7 * (int)*param_3 - piVar7[0x10] * (int)param_3[0x10]) * 4;
    sVar3 = param_3[0x18];
    iVar6 = piVar7[0x18];
    iVar19 = (piVar7[0x10] * (int)param_3[0x10] + *piVar7 * (int)*param_3) * 4;
    psVar2 = param_3 + 8;
    piVar1 = piVar7 + 8;
    param_3 = param_3 + 1;
    piVar7 = piVar7 + 1;
    iVar11 = (sVar3 * iVar6 + (int)*psVar2 * *piVar1) * DAT_001c2b1c + 0x400;
    iVar15 = iVar11 + (int)*psVar2 * *piVar1 * DAT_001c2b20 >> 0xb;
    piVar9[0x18] = iVar19 - iVar15;
    *piVar9 = iVar15 + iVar19;
    iVar6 = iVar11 + sVar3 * iVar6 * DAT_001c2b24 >> 0xb;
    piVar9[8] = iVar6 + iVar12;
    piVar9[0x10] = iVar12 - iVar6;
    piVar9 = piVar9 + 1;
  } while (piVar9 != local_88);
  do {
    uVar4 = DAT_001c2b4c;
    iVar6 = DAT_001c2b1c * (piVar10[6] + piVar10[2]);
    iVar12 = iVar6 + DAT_001c2b24 * piVar10[6];
    iVar6 = iVar6 + DAT_001c2b20 * piVar10[2];
    iVar11 = (*piVar10 + 0x10 + piVar10[4]) * 0x2000;
    iVar19 = ((*piVar10 + 0x10) - piVar10[4]) * 0x2000;
    iVar20 = iVar11 + iVar6;
    iVar11 = iVar11 - iVar6;
    iVar13 = iVar19 + iVar12;
    iVar19 = iVar19 - iVar12;
    iVar16 = piVar10[1];
    iVar6 = piVar10[5];
    iVar15 = piVar10[3];
    iVar17 = piVar10[7];
    iVar12 = DAT_001c2b28 * (iVar6 + iVar16 + iVar15 + iVar17);
    piVar10 = piVar10 + 8;
    iVar21 = DAT_001c2b2c * (iVar15 + iVar17) + iVar12;
    iVar12 = DAT_001c2b30 * (iVar6 + iVar16) + iVar12;
    iVar14 = DAT_001c2b34 * (iVar17 + iVar16);
    iVar17 = iVar17 * DAT_001c2b3c + iVar14 + iVar21;
    iVar16 = DAT_001c2b38 * iVar16 + iVar14 + iVar12;
    iVar14 = (iVar15 + iVar6) * DAT_001c2b40;
    iVar12 = iVar6 * DAT_001c2b44 + iVar14 + iVar12;
    iVar21 = iVar21 + iVar15 * DAT_001c2b48 + iVar14;
    puVar8 = (undefined *)(*param_4 + param_5);
    uVar18 = iVar20 - iVar16 >> 0x12 & DAT_001c2b4c;
    *puVar8 = *(undefined *)(iVar5 + (iVar16 + iVar20 >> 0x12 & DAT_001c2b4c));
    puVar8[7] = *(undefined *)(iVar5 + uVar18);
    puVar8[1] = *(undefined *)(iVar5 + (iVar13 + iVar21 >> 0x12 & uVar4));
    puVar8[6] = *(undefined *)(iVar5 + (iVar13 - iVar21 >> 0x12 & uVar4));
    puVar8[2] = *(undefined *)(iVar5 + (iVar12 + iVar19 >> 0x12 & uVar4));
    puVar8[5] = *(undefined *)(iVar5 + (iVar19 - iVar12 >> 0x12 & uVar4));
    puVar8[3] = *(undefined *)(iVar5 + (iVar17 + iVar11 >> 0x12 & uVar4));
    puVar8[4] = *(undefined *)(iVar5 + (iVar11 - iVar17 >> 0x12 & uVar4));
    param_4 = param_4 + 1;
  } while (piVar10 != &iStack_28);
  return;
}


