/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4024  Symbol: jpeg_idct_3x6 */

void jpeg_idct_3x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_70 [19];
  
  uVar5 = DAT_001c4194;
  iVar4 = DAT_001c418c;
  iVar3 = DAT_001c4188;
  iVar6 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar11 = local_70;
  piVar8 = *(int **)(param_2 + 0x54);
  piVar10 = piVar11;
  do {
    iVar12 = (int)param_3[0x20] * DAT_001c4188 * piVar8[0x20];
    iVar7 = *piVar8 * (int)*param_3 * 0x2000 + 0x400;
    iVar13 = iVar7 + iVar12;
    iVar7 = iVar7 + iVar12 * -2 >> 0xb;
    iVar17 = (int)param_3[0x10] * DAT_001c418c * piVar8[0x10];
    iVar12 = iVar13 + iVar17;
    iVar13 = iVar13 - iVar17;
    iVar17 = piVar8[0x28] * (int)param_3[0x28];
    iVar16 = (int)param_3[8] * piVar8[8];
    iVar14 = DAT_001c4190 * (iVar17 + iVar16);
    psVar2 = param_3 + 0x18;
    piVar1 = piVar8 + 0x18;
    param_3 = param_3 + 1;
    piVar8 = piVar8 + 1;
    iVar15 = (int)*psVar2 * *piVar1;
    iVar18 = (iVar15 + iVar16) * 0x2000 + iVar14;
    iVar16 = (iVar16 - iVar15) - iVar17;
    *piVar10 = iVar12 + iVar18 >> 0xb;
    piVar10[0xf] = iVar12 - iVar18 >> 0xb;
    iVar14 = iVar14 + (iVar17 - iVar15) * 0x2000;
    piVar10[0xc] = iVar7 + iVar16 * -4;
    piVar10[3] = iVar7 + iVar16 * 4;
    piVar10[6] = iVar13 + iVar14 >> 0xb;
    piVar10[9] = iVar13 - iVar14 >> 0xb;
    piVar10 = piVar10 + 1;
  } while (piVar10 != local_70 + 3);
  do {
    iVar12 = (*piVar11 + 0x10) * 0x2000;
    iVar7 = piVar11[2];
    puVar9 = (undefined *)(*param_4 + param_5);
    iVar17 = piVar11[1];
    iVar16 = iVar12 + iVar7 * iVar3;
    piVar11 = piVar11 + 3;
    *puVar9 = *(undefined *)(iVar6 + (iVar17 * iVar4 + iVar16 >> 0x12 & uVar5));
    puVar9[2] = *(undefined *)(iVar6 + (iVar16 - iVar17 * iVar4 >> 0x12 & uVar5));
    puVar9[1] = *(undefined *)(iVar6 + (iVar12 + iVar7 * iVar3 * -2 >> 0x12 & uVar5));
    param_4 = param_4 + 1;
  } while (piVar11 != local_70 + 0x12);
  return;
}


