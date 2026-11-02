/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bf384  Symbol: jpeg_idct_9x9 */

void jpeg_idct_9x9(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  int iVar22;
  int local_148 [8];
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  iVar2 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar8 = local_148;
  piVar5 = *(int **)(param_2 + 0x54);
  piVar7 = piVar8;
  do {
    iVar16 = (int)param_3[0x20] * piVar5[0x20];
    iVar11 = (int)param_3[0x30] * DAT_001bf654 * piVar5[0x30];
    iVar3 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar9 = iVar3 + iVar11;
    iVar3 = iVar3 + iVar11 * -2;
    iVar12 = (int)param_3[0x10] * piVar5[0x10];
    iVar11 = DAT_001bf654 * (iVar12 - iVar16);
    iVar22 = iVar3 + iVar11;
    iVar4 = DAT_001bf658 * (iVar16 + iVar12);
    iVar19 = (iVar9 - iVar4) + DAT_001bf65c * iVar12;
    iVar13 = (DAT_001bf660 * iVar16 - DAT_001bf65c * iVar12) + iVar9;
    iVar9 = (iVar4 - DAT_001bf660 * iVar16) + iVar9;
    iVar17 = (int)param_3[0x28] * piVar5[0x28];
    iVar16 = piVar5[0x38] * (int)param_3[0x38];
    iVar18 = piVar5[8] * (int)param_3[8];
    iVar4 = (iVar17 + iVar18) * DAT_001bf664;
    iVar12 = (iVar16 + iVar18) * DAT_001bf668;
    piVar10 = piVar5 + 0x18;
    piVar5 = piVar5 + 1;
    iVar20 = (int)param_3[0x18] * DAT_001bf66c * *piVar10;
    iVar14 = (iVar12 + iVar4) - iVar20;
    param_3 = param_3 + 1;
    iVar15 = DAT_001bf670 * (iVar17 - iVar16);
    iVar21 = (iVar20 + iVar4) - iVar15;
    iVar15 = iVar15 + iVar12 + iVar20;
    iVar4 = DAT_001bf674 * ((iVar18 - iVar17) - iVar16);
    *piVar7 = iVar9 + iVar14 >> 0xb;
    piVar7[0x40] = iVar9 - iVar14 >> 0xb;
    piVar7[8] = iVar22 + iVar4 >> 0xb;
    piVar7[0x38] = iVar22 - iVar4 >> 0xb;
    piVar7[0x10] = iVar21 + iVar19 >> 0xb;
    piVar7[0x30] = iVar19 - iVar21 >> 0xb;
    piVar7[0x18] = iVar13 + iVar15 >> 0xb;
    piVar7[0x28] = iVar13 - iVar15 >> 0xb;
    piVar10 = piVar7 + 0x20;
    piVar7 = piVar7 + 1;
    *piVar10 = iVar3 + iVar11 * -2 >> 0xb;
  } while (piVar7 != local_128);
  do {
    uVar1 = DAT_001bf678;
    iVar9 = (*piVar8 + 0x10) * 0x2000;
    iVar11 = iVar9 + DAT_001bf654 * piVar8[6];
    iVar9 = iVar9 + DAT_001bf654 * piVar8[6] * -2;
    iVar4 = piVar8[4];
    iVar3 = piVar8[2];
    iVar16 = DAT_001bf654 * (iVar3 - iVar4);
    iVar18 = iVar9 + iVar16;
    iVar12 = DAT_001bf658 * (iVar4 + iVar3);
    iVar17 = (iVar11 - iVar12) + DAT_001bf65c * iVar3;
    iVar13 = (DAT_001bf660 * iVar4 - DAT_001bf65c * iVar3) + iVar11;
    iVar19 = piVar8[1];
    iVar3 = piVar8[5];
    iVar11 = (iVar12 - DAT_001bf660 * iVar4) + iVar11;
    iVar4 = (iVar3 + iVar19) * DAT_001bf664;
    iVar12 = piVar8[7];
    iVar14 = DAT_001bf668 * (iVar12 + iVar19);
    piVar7 = piVar8 + 3;
    piVar8 = piVar8 + 8;
    iVar20 = DAT_001bf66c * *piVar7;
    iVar21 = (iVar4 - iVar20) + iVar14;
    iVar15 = DAT_001bf670 * (iVar3 - iVar12);
    iVar4 = (iVar20 + iVar4) - iVar15;
    iVar15 = iVar14 + iVar20 + iVar15;
    iVar3 = ((iVar19 - iVar3) - iVar12) * DAT_001bf674;
    puVar6 = (undefined *)(*param_4 + param_5);
    *puVar6 = *(undefined *)(iVar2 + (iVar11 + iVar21 >> 0x12 & DAT_001bf678));
    puVar6[8] = *(undefined *)(iVar2 + (iVar11 - iVar21 >> 0x12 & uVar1));
    puVar6[1] = *(undefined *)(iVar2 + (iVar18 + iVar3 >> 0x12 & uVar1));
    puVar6[7] = *(undefined *)(iVar2 + (iVar18 - iVar3 >> 0x12 & uVar1));
    puVar6[2] = *(undefined *)(iVar2 + (iVar4 + iVar17 >> 0x12 & uVar1));
    puVar6[6] = *(undefined *)(iVar2 + (iVar17 - iVar4 >> 0x12 & uVar1));
    puVar6[3] = *(undefined *)(iVar2 + (iVar13 + iVar15 >> 0x12 & uVar1));
    puVar6[5] = *(undefined *)(iVar2 + (iVar13 - iVar15 >> 0x12 & uVar1));
    puVar6[4] = *(undefined *)(iVar2 + (uVar1 & iVar9 + iVar16 * -2 >> 0x12));
    param_4 = param_4 + 1;
  } while (piVar8 != &iStack_28);
  return;
}


