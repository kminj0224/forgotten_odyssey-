/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001be0d8  Symbol: jpeg_idct_ifast */

void jpeg_idct_ifast(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  short sVar23;
  short *local_150;
  short *local_14c;
  int local_148;
  short *local_144;
  short *local_140;
  short *local_13c;
  int local_138;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int iStack_28;
  
  uVar2 = DAT_001be4e4;
  piVar11 = *(int **)(param_2 + 0x54);
  local_150 = param_3 + 0x18;
  local_14c = param_3 + 0x20;
  local_140 = param_3 + 0x30;
  piVar10 = local_128;
  iVar3 = *(int *)(param_1 + 0x14c) + 0x80;
  local_13c = param_3 + 0x38;
  local_144 = param_3 + 0x28;
  local_148 = 8;
  piVar4 = piVar10;
  do {
    if (param_3[8] == 0) {
      sVar15 = param_3[0x10];
      if (sVar15 != 0) goto LAB_001be2b2;
      sVar23 = *local_150;
      if (sVar23 != 0) {
        sVar12 = *local_14c;
LAB_001be13a:
        sVar22 = *local_140;
        sVar19 = *local_144;
        sVar20 = *local_13c;
        goto LAB_001be14c;
      }
      sVar12 = *local_14c;
      if (sVar12 != 0) goto LAB_001be13a;
      sVar19 = *local_144;
      if (sVar19 != 0) {
        sVar22 = *local_140;
        sVar20 = *local_13c;
        goto LAB_001be14c;
      }
      sVar22 = *local_140;
      if (sVar22 != 0) goto LAB_001be2c8;
      sVar20 = *local_13c;
      if (sVar20 != 0) goto LAB_001be14c;
      iVar13 = (int)*param_3 * *piVar11;
      *piVar4 = iVar13;
      piVar4[8] = iVar13;
      piVar4[0x10] = iVar13;
      piVar4[0x18] = iVar13;
      piVar4[0x20] = iVar13;
      piVar4[0x28] = iVar13;
      piVar4[0x30] = iVar13;
      piVar4[0x38] = iVar13;
    }
    else {
      sVar15 = param_3[0x10];
LAB_001be2b2:
      sVar22 = *local_140;
      sVar12 = *local_14c;
      sVar23 = *local_150;
      sVar19 = *local_144;
LAB_001be2c8:
      sVar20 = *local_13c;
LAB_001be14c:
      iVar6 = (int)*param_3 * *piVar11 - piVar11[0x20] * (int)sVar12;
      iVar17 = piVar11[0x20] * (int)sVar12 + (int)*param_3 * *piVar11;
      iVar13 = (int)sVar22 * piVar11[0x30] + (int)sVar15 * piVar11[0x10];
      iVar7 = iVar13 + iVar17;
      iVar16 = (((int)sVar15 * piVar11[0x10] - (int)sVar22 * piVar11[0x30]) * 0x16a >> 8) - iVar13;
      iVar17 = iVar17 - iVar13;
      iVar18 = iVar16 + iVar6;
      iVar6 = iVar6 - iVar16;
      iVar8 = (int)param_3[8] * piVar11[8];
      iVar9 = (int)sVar19 * piVar11[0x28] - piVar11[0x18] * (int)sVar23;
      iVar13 = iVar8 - (int)sVar20 * piVar11[0x38];
      iVar21 = piVar11[0x18] * (int)sVar23 + (int)sVar19 * piVar11[0x28];
      iVar8 = (int)sVar20 * piVar11[0x38] + iVar8;
      iVar14 = DAT_001be4d8 * (iVar9 + iVar13) >> 8;
      iVar16 = iVar8 + iVar21;
      iVar9 = ((DAT_001be4dc * iVar9 >> 8) - iVar16) + iVar14;
      iVar8 = ((iVar8 - iVar21) * 0x16a >> 8) - iVar9;
      *piVar4 = iVar16 + iVar7;
      piVar4[0x38] = iVar7 - iVar16;
      piVar4[8] = iVar18 + iVar9;
      piVar4[0x30] = iVar18 - iVar9;
      iVar13 = ((DAT_001be4e0 * iVar13 >> 8) - iVar14) + iVar8;
      piVar4[0x10] = iVar6 + iVar8;
      piVar4[0x28] = iVar6 - iVar8;
      piVar4[0x20] = iVar17 + iVar13;
      piVar4[0x18] = iVar17 - iVar13;
    }
    local_148 = local_148 + -1;
    local_14c = local_14c + 1;
    local_140 = local_140 + 1;
    local_150 = local_150 + 1;
    local_144 = local_144 + 1;
    local_13c = local_13c + 1;
    param_3 = param_3 + 1;
    piVar11 = piVar11 + 1;
    piVar4 = piVar4 + 1;
  } while (local_148 != 0);
  do {
    puVar5 = (undefined *)(*param_4 + param_5);
    iVar13 = piVar10[1];
    if (iVar13 == 0) {
      iVar16 = piVar10[2];
      if (iVar16 != 0) {
        local_150 = (short *)piVar10[4];
        goto LAB_001be2f4;
      }
      local_138 = piVar10[3];
      if (local_138 != 0) {
        local_150 = (short *)piVar10[4];
LAB_001be416:
        iVar7 = piVar10[6];
        iVar6 = piVar10[5];
        iVar8 = piVar10[7];
        goto LAB_001be304;
      }
      local_150 = (short *)piVar10[4];
      if (local_150 != (short *)0x0) goto LAB_001be416;
      iVar6 = piVar10[5];
      if (iVar6 != 0) {
        iVar7 = piVar10[6];
        iVar8 = piVar10[7];
        goto LAB_001be304;
      }
      iVar7 = piVar10[6];
      if (iVar7 != 0) goto LAB_001be300;
      iVar8 = piVar10[7];
      if (iVar8 != 0) goto LAB_001be304;
      uVar1 = *(undefined *)(iVar3 + (*piVar10 >> 5 & uVar2));
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5[3] = uVar1;
      puVar5[4] = uVar1;
      puVar5[5] = uVar1;
      puVar5[6] = uVar1;
      puVar5[7] = uVar1;
    }
    else {
      local_150 = (short *)piVar10[4];
      iVar16 = piVar10[2];
LAB_001be2f4:
      iVar7 = piVar10[6];
      iVar6 = piVar10[5];
      local_138 = piVar10[3];
LAB_001be300:
      iVar8 = piVar10[7];
LAB_001be304:
      iVar9 = (int)local_150 + *piVar10;
      iVar18 = *piVar10 - (int)local_150;
      iVar14 = iVar7 + iVar16;
      iVar17 = iVar14 + iVar9;
      iVar7 = ((iVar16 - iVar7) * 0x16a >> 8) - iVar14;
      iVar9 = iVar9 - iVar14;
      iVar16 = iVar7 + iVar18;
      iVar18 = iVar18 - iVar7;
      iVar14 = iVar8 + iVar13 + local_138 + iVar6;
      iVar7 = DAT_001be4d8 * ((iVar13 - iVar8) + (iVar6 - local_138)) >> 8;
      iVar21 = ((DAT_001be4dc * (iVar6 - local_138) >> 8) - iVar14) + iVar7;
      iVar6 = (((iVar8 + iVar13) - (local_138 + iVar6)) * 0x16a >> 8) - iVar21;
      iVar13 = ((DAT_001be4e0 * (iVar13 - iVar8) >> 8) - iVar7) + iVar6;
      *puVar5 = *(undefined *)(iVar3 + (iVar17 + iVar14 >> 5 & uVar2));
      puVar5[7] = *(undefined *)(iVar3 + (iVar17 - iVar14 >> 5 & uVar2));
      puVar5[1] = *(undefined *)(iVar3 + (iVar16 + iVar21 >> 5 & uVar2));
      puVar5[6] = *(undefined *)(iVar3 + (iVar16 - iVar21 >> 5 & uVar2));
      puVar5[2] = *(undefined *)(iVar3 + (iVar6 + iVar18 >> 5 & uVar2));
      puVar5[5] = *(undefined *)(iVar3 + (iVar18 - iVar6 >> 5 & uVar2));
      puVar5[4] = *(undefined *)(iVar3 + (iVar13 + iVar9 >> 5 & uVar2));
      puVar5[3] = *(undefined *)(iVar3 + (iVar9 - iVar13 >> 5 & uVar2));
    }
    piVar10 = piVar10 + 8;
    param_4 = param_4 + 1;
    if (piVar10 == &iStack_28) {
      return;
    }
  } while( true );
}


