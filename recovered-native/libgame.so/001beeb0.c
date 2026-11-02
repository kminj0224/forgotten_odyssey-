/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001beeb0  Symbol: jpeg_idct_5x5 */

void jpeg_idct_5x5(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_8c [5];
  int local_78 [5];
  int local_64 [5];
  int local_50 [5];
  int local_3c [5];
  int iStack_28;
  
  uVar5 = DAT_001bf084;
  piVar9 = *(int **)(param_2 + 0x54);
  piVar11 = piVar9 + 5;
  piVar13 = local_8c;
  iVar6 = *(int *)(param_1 + 0x14c) + 0x80;
  psVar15 = param_3 + 0x10;
  piVar14 = piVar9 + 0x10;
  piVar12 = piVar13;
  do {
    iVar16 = DAT_001bf074 * ((int)*psVar15 * *piVar14 + (int)psVar15[0x10] * piVar14[0x10]);
    iVar17 = (int)*psVar15 * *piVar14 - (int)psVar15[0x10] * piVar14[0x10];
    iVar7 = (int)*param_3 * *piVar9 * 0x2000 + 0x400;
    iVar19 = iVar17 * 0xb50 + iVar7;
    iVar8 = iVar19 - iVar16;
    iVar16 = iVar16 + iVar19;
    piVar1 = piVar14 + 8;
    psVar3 = psVar15 + 8;
    piVar14 = piVar14 + 1;
    psVar4 = param_3 + 8;
    piVar2 = piVar9 + 8;
    piVar9 = piVar9 + 1;
    param_3 = param_3 + 1;
    iVar19 = DAT_001bf078 * ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2);
    psVar15 = psVar15 + 1;
    iVar18 = DAT_001bf07c * (int)*psVar4 * *piVar2 + iVar19;
    iVar19 = iVar19 + DAT_001bf080 * (int)*psVar3 * *piVar1;
    *piVar12 = iVar16 + iVar18 >> 0xb;
    piVar12[0x14] = iVar16 - iVar18 >> 0xb;
    piVar12[5] = iVar19 + iVar8 >> 0xb;
    piVar12[0xf] = iVar8 - iVar19 >> 0xb;
    piVar12[10] = iVar7 + iVar17 * -0x2d40 >> 0xb;
    piVar12 = piVar12 + 1;
  } while (piVar9 != piVar11);
  do {
    iVar16 = piVar13[2] - piVar13[4];
    iVar7 = DAT_001bf074 * (piVar13[4] + piVar13[2]);
    iVar8 = (*piVar13 + 0x10) * 0x2000;
    iVar17 = iVar16 * 0xb50 + iVar8;
    iVar19 = iVar17 + iVar7;
    piVar12 = piVar13 + 1;
    piVar9 = piVar13 + 3;
    iVar17 = iVar17 - iVar7;
    iVar7 = DAT_001bf078 * (*piVar9 + *piVar12);
    piVar13 = piVar13 + 5;
    iVar18 = DAT_001bf07c * *piVar12 + iVar7;
    iVar7 = iVar7 + DAT_001bf080 * *piVar9;
    puVar10 = (undefined *)(*param_4 + param_5);
    *puVar10 = *(undefined *)(iVar6 + (iVar19 + iVar18 >> 0x12 & uVar5));
    puVar10[4] = *(undefined *)(iVar6 + (iVar19 - iVar18 >> 0x12 & uVar5));
    puVar10[1] = *(undefined *)(iVar6 + (iVar17 + iVar7 >> 0x12 & uVar5));
    puVar10[3] = *(undefined *)(iVar6 + (iVar17 - iVar7 >> 0x12 & uVar5));
    puVar10[2] = *(undefined *)(iVar6 + (iVar8 + iVar16 * -0x2d40 >> 0x12 & uVar5));
    param_4 = param_4 + 1;
  } while (piVar13 != &iStack_28);
  return;
}


