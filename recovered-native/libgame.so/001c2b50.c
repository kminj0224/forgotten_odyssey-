/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2b50  Symbol: jpeg_idct_6x3 */

void jpeg_idct_6x3(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_70 [6];
  int local_58 [6];
  int local_40 [6];
  int iStack_28;
  
  uVar3 = DAT_001c2ca0;
  piVar5 = *(int **)(param_2 + 0x54);
  iVar4 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = piVar5 + 6;
  piVar6 = local_70;
  piVar10 = piVar6;
  do {
    iVar8 = (int)*param_3 * *piVar5 * 0x2000 + 0x400;
    piVar1 = piVar5 + 8;
    iVar9 = (int)param_3[0x10] * piVar5[0x10] * DAT_001c2c98;
    piVar5 = piVar5 + 1;
    iVar15 = iVar8 + iVar9;
    psVar2 = param_3 + 8;
    param_3 = param_3 + 1;
    iVar13 = (int)*psVar2 * *piVar1 * DAT_001c2c9c;
    *piVar10 = iVar15 + iVar13 >> 0xb;
    piVar10[0xc] = iVar15 - iVar13 >> 0xb;
    piVar10[6] = iVar8 + iVar9 * -2 >> 0xb;
    piVar10 = piVar10 + 1;
  } while (piVar5 != piVar7);
  do {
    iVar16 = (*piVar6 + 0x10) * 0x2000;
    iVar15 = iVar16 + DAT_001c2c98 * piVar6[4];
    iVar16 = iVar16 + DAT_001c2c98 * piVar6[4] * -2;
    iVar8 = iVar15 + DAT_001c2c9c * piVar6[2];
    iVar15 = iVar15 - DAT_001c2c9c * piVar6[2];
    iVar13 = piVar6[1];
    iVar9 = piVar6[5];
    iVar14 = DAT_001c2ca4 * (iVar9 + iVar13);
    iVar11 = piVar6[3];
    piVar6 = piVar6 + 6;
    iVar17 = (iVar11 + iVar13) * 0x2000 + iVar14;
    iVar13 = (iVar13 - iVar11) - iVar9;
    puVar12 = (undefined *)(*param_4 + param_5);
    *puVar12 = *(undefined *)(iVar4 + (iVar8 + iVar17 >> 0x12 & uVar3));
    iVar14 = iVar14 + (iVar9 - iVar11) * 0x2000;
    puVar12[5] = *(undefined *)(iVar4 + (iVar8 - iVar17 >> 0x12 & uVar3));
    puVar12[1] = *(undefined *)(iVar4 + (iVar16 + iVar13 * 0x2000 >> 0x12 & uVar3));
    puVar12[4] = *(undefined *)(iVar4 + (iVar16 + iVar13 * -0x2000 >> 0x12 & uVar3));
    puVar12[2] = *(undefined *)(iVar4 + (iVar15 + iVar14 >> 0x12 & uVar3));
    puVar12[3] = *(undefined *)(iVar4 + (iVar15 - iVar14 >> 0x12 & uVar3));
    param_4 = param_4 + 1;
  } while (piVar6 != &iStack_28);
  return;
}


