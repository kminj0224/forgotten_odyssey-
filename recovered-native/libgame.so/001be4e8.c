/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001be4e8  Symbol: jpeg_idct_islow */

void jpeg_idct_islow(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  undefined uVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  int iVar24;
  short *local_158;
  short *local_154;
  int local_150;
  short *local_14c;
  short *local_148;
  short *local_144;
  int local_140;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  piVar4 = *(int **)(param_2 + 0x54);
  local_148 = param_3 + 0x30;
  local_154 = param_3 + 0x20;
  piVar9 = local_128;
  iVar10 = *(int *)(param_1 + 0x14c) + 0x80;
  local_158 = param_3 + 0x18;
  local_144 = param_3 + 0x38;
  local_14c = param_3 + 0x28;
  local_150 = 8;
  piVar5 = piVar9;
  do {
    if (param_3[8] == 0) {
      sVar15 = param_3[0x10];
      if (sVar15 != 0) goto LAB_001be708;
      sVar19 = *local_158;
      if (sVar19 != 0) {
        sVar23 = *local_154;
        sVar7 = *local_148;
LAB_001be54a:
        sVar2 = *local_144;
        sVar21 = *local_14c;
        goto LAB_001be556;
      }
      sVar23 = *local_154;
      if (sVar23 != 0) {
        sVar7 = *local_148;
        goto LAB_001be54a;
      }
      sVar21 = *local_14c;
      if (sVar21 != 0) {
        sVar2 = *local_144;
        sVar7 = *local_148;
        goto LAB_001be556;
      }
      sVar7 = *local_148;
      if (sVar7 != 0) {
        sVar2 = *local_144;
        goto LAB_001be556;
      }
      sVar2 = *local_144;
      if (sVar2 != 0) goto LAB_001be556;
      iVar11 = *piVar4 * (int)*param_3 * 4;
      *piVar5 = iVar11;
      piVar5[8] = iVar11;
      piVar5[0x10] = iVar11;
      piVar5[0x18] = iVar11;
      piVar5[0x20] = iVar11;
      piVar5[0x28] = iVar11;
      piVar5[0x30] = iVar11;
      piVar5[0x38] = iVar11;
    }
    else {
      sVar15 = param_3[0x10];
LAB_001be708:
      sVar23 = *local_154;
      sVar2 = *local_144;
      sVar7 = *local_148;
      sVar21 = *local_14c;
      sVar19 = *local_158;
LAB_001be556:
      iVar11 = DAT_001be8fc * (piVar4[0x30] * (int)sVar7 + piVar4[0x10] * (int)sVar15);
      iVar16 = iVar11 + DAT_001be900 * piVar4[0x10] * (int)sVar15;
      iVar11 = iVar11 + DAT_001be904 * piVar4[0x30] * (int)sVar7;
      iVar24 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
      iVar22 = (int)sVar23 * piVar4[0x20] * 0x2000 + iVar24;
      iVar24 = iVar24 + (int)sVar23 * piVar4[0x20] * -0x2000;
      iVar12 = iVar22 - iVar16;
      iVar17 = iVar11 + iVar24;
      iVar24 = iVar24 - iVar11;
      iVar18 = piVar4[0x38] * (int)sVar2;
      iVar16 = iVar16 + iVar22;
      iVar13 = piVar4[0x28] * (int)sVar21;
      iVar11 = (int)sVar19 * piVar4[0x18];
      iVar22 = (int)param_3[8] * piVar4[8];
      iVar8 = DAT_001be908 * (iVar13 + iVar22 + iVar11 + iVar18);
      iVar20 = DAT_001be90c * (iVar11 + iVar18) + iVar8;
      iVar8 = DAT_001be910 * (iVar13 + iVar22) + iVar8;
      iVar14 = DAT_001be914 * (iVar18 + iVar22);
      iVar18 = iVar18 * DAT_001be91c + iVar14 + iVar20;
      iVar14 = DAT_001be918 * iVar22 + iVar14 + iVar8;
      iVar22 = (iVar11 + iVar13) * DAT_001be920;
      iVar8 = iVar13 * DAT_001be924 + iVar22 + iVar8;
      iVar20 = iVar11 * DAT_001be928 + iVar22 + iVar20;
      *piVar5 = iVar14 + iVar16 >> 0xb;
      piVar5[0x38] = iVar16 - iVar14 >> 0xb;
      piVar5[8] = iVar20 + iVar17 >> 0xb;
      piVar5[0x30] = iVar17 - iVar20 >> 0xb;
      piVar5[0x10] = iVar8 + iVar24 >> 0xb;
      piVar5[0x28] = iVar24 - iVar8 >> 0xb;
      piVar5[0x18] = iVar18 + iVar12 >> 0xb;
      piVar5[0x20] = iVar12 - iVar18 >> 0xb;
    }
    local_150 = local_150 + -1;
    local_148 = local_148 + 1;
    local_154 = local_154 + 1;
    local_144 = local_144 + 1;
    local_14c = local_14c + 1;
    local_158 = local_158 + 1;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (local_150 != 0);
  do {
    uVar3 = DAT_001be92c;
    iVar11 = piVar9[1];
    puVar6 = (undefined *)(*param_4 + param_5);
    if (iVar11 == 0) {
      iVar8 = piVar9[2];
      if (iVar8 != 0) {
        local_140 = piVar9[7];
        iVar12 = piVar9[6];
        iVar20 = piVar9[4];
        iVar22 = piVar9[5];
        iVar13 = piVar9[3];
        goto LAB_001be74e;
      }
      iVar13 = piVar9[3];
      if (iVar13 != 0) {
        local_140 = piVar9[7];
        iVar20 = piVar9[4];
        iVar12 = piVar9[6];
        iVar22 = piVar9[5];
        goto LAB_001be74e;
      }
      iVar20 = piVar9[4];
      if (iVar20 != 0) {
        local_140 = piVar9[7];
        iVar12 = piVar9[6];
        iVar22 = piVar9[5];
        goto LAB_001be74e;
      }
      iVar22 = piVar9[5];
      if (iVar22 != 0) {
        iVar12 = piVar9[6];
        local_140 = piVar9[7];
        goto LAB_001be74e;
      }
      iVar12 = piVar9[6];
      if (iVar12 != 0) {
        local_140 = piVar9[7];
        goto LAB_001be74e;
      }
      local_140 = piVar9[7];
      if (local_140 != 0) goto LAB_001be74e;
      uVar1 = *(undefined *)(iVar10 + ((uint)((*piVar9 + 0x10) * 0x20000) >> 0x16));
      *puVar6 = uVar1;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      puVar6[3] = uVar1;
      puVar6[4] = uVar1;
      puVar6[5] = uVar1;
      puVar6[6] = uVar1;
      puVar6[7] = uVar1;
    }
    else {
      local_140 = piVar9[7];
      iVar8 = piVar9[2];
      iVar12 = piVar9[6];
      iVar20 = piVar9[4];
      iVar22 = piVar9[5];
      iVar13 = piVar9[3];
LAB_001be74e:
      iVar14 = DAT_001be8fc * (iVar8 + iVar12);
      iVar24 = DAT_001be900 * iVar8 + iVar14;
      iVar14 = iVar14 + DAT_001be904 * iVar12;
      iVar8 = (iVar20 + *piVar9 + 0x10) * 0x2000;
      iVar17 = ((*piVar9 + 0x10) - iVar20) * 0x2000;
      iVar16 = iVar8 - iVar24;
      iVar20 = iVar14 + iVar17;
      iVar17 = iVar17 - iVar14;
      iVar24 = iVar24 + iVar8;
      iVar8 = DAT_001be908 * (iVar22 + iVar11 + local_140 + iVar13);
      iVar18 = DAT_001be90c * (local_140 + iVar13) + iVar8;
      iVar8 = DAT_001be910 * (iVar22 + iVar11) + iVar8;
      iVar12 = DAT_001be914 * (local_140 + iVar11);
      iVar14 = local_140 * DAT_001be91c + iVar12 + iVar18;
      iVar11 = DAT_001be918 * iVar11 + iVar12 + iVar8;
      iVar12 = (iVar13 + iVar22) * DAT_001be920;
      iVar8 = iVar22 * DAT_001be924 + iVar12 + iVar8;
      iVar18 = iVar18 + iVar13 * DAT_001be928 + iVar12;
      *puVar6 = *(undefined *)(iVar10 + (iVar11 + iVar24 >> 0x12 & DAT_001be92c));
      puVar6[7] = *(undefined *)(iVar10 + (iVar24 - iVar11 >> 0x12 & uVar3));
      puVar6[1] = *(undefined *)(iVar10 + (iVar20 + iVar18 >> 0x12 & uVar3));
      puVar6[6] = *(undefined *)(iVar10 + (iVar20 - iVar18 >> 0x12 & uVar3));
      puVar6[2] = *(undefined *)(iVar10 + (iVar8 + iVar17 >> 0x12 & uVar3));
      puVar6[5] = *(undefined *)(iVar10 + (iVar17 - iVar8 >> 0x12 & uVar3));
      puVar6[3] = *(undefined *)(iVar10 + (iVar14 + iVar16 >> 0x12 & uVar3));
      puVar6[4] = *(undefined *)(iVar10 + (uVar3 & iVar16 - iVar14 >> 0x12));
    }
    piVar9 = piVar9 + 8;
    param_4 = param_4 + 1;
    if (piVar9 == &iStack_28) {
      return;
    }
  } while( true );
}


