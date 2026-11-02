/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c196c  Symbol: jpeg_idct_16x8 */

void jpeg_idct_16x8(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  short sVar30;
  int iVar31;
  short sVar32;
  int iVar33;
  int iVar34;
  short sVar35;
  int iVar36;
  short *local_15c;
  short *local_158;
  int local_154;
  short *local_150;
  short *local_14c;
  short *local_148;
  int local_128 [64];
  int iStack_28;
  
  piVar3 = *(int **)(param_2 + 0x54);
  piVar6 = local_128;
  local_14c = param_3 + 0x30;
  local_15c = param_3 + 0x18;
  iVar8 = *(int *)(param_1 + 0x14c) + 0x80;
  local_158 = param_3 + 0x20;
  local_148 = param_3 + 0x38;
  local_150 = param_3 + 0x28;
  local_154 = 8;
  piVar4 = piVar6;
  do {
    if (param_3[8] == 0) {
      sVar17 = param_3[0x10];
      if (sVar17 != 0) goto LAB_001c1b90;
      sVar30 = *local_15c;
      if (sVar30 != 0) {
        sVar35 = *local_158;
        sVar7 = *local_14c;
LAB_001c19d2:
        sVar1 = *local_148;
        sVar32 = *local_150;
        goto LAB_001c19de;
      }
      sVar35 = *local_158;
      if (sVar35 != 0) {
        sVar7 = *local_14c;
        goto LAB_001c19d2;
      }
      sVar32 = *local_150;
      if (sVar32 != 0) {
        sVar1 = *local_148;
        sVar7 = *local_14c;
        goto LAB_001c19de;
      }
      sVar7 = *local_14c;
      if (sVar7 != 0) {
        sVar1 = *local_148;
        goto LAB_001c19de;
      }
      sVar1 = *local_148;
      if (sVar1 != 0) goto LAB_001c19de;
      iVar10 = *piVar3 * (int)*param_3 * 4;
      *piVar4 = iVar10;
      piVar4[8] = iVar10;
      piVar4[0x10] = iVar10;
      piVar4[0x18] = iVar10;
      piVar4[0x20] = iVar10;
      piVar4[0x28] = iVar10;
      piVar4[0x30] = iVar10;
      piVar4[0x38] = iVar10;
    }
    else {
      sVar17 = param_3[0x10];
LAB_001c1b90:
      sVar35 = *local_158;
      sVar1 = *local_148;
      sVar7 = *local_14c;
      sVar32 = *local_150;
      sVar30 = *local_15c;
LAB_001c19de:
      iVar10 = DAT_001c1bb0 * (piVar3[0x30] * (int)sVar7 + piVar3[0x10] * (int)sVar17);
      iVar18 = iVar10 + DAT_001c1bb4 * piVar3[0x10] * (int)sVar17;
      iVar10 = iVar10 + DAT_001c1bb8 * piVar3[0x30] * (int)sVar7;
      iVar36 = (int)*param_3 * *piVar3 * 0x2000 + 0x400;
      iVar33 = (int)sVar35 * piVar3[0x20] * 0x2000 + iVar36;
      iVar36 = iVar36 + (int)sVar35 * piVar3[0x20] * -0x2000;
      iVar11 = iVar33 - iVar18;
      iVar19 = iVar10 + iVar36;
      iVar36 = iVar36 - iVar10;
      iVar24 = piVar3[0x38] * (int)sVar1;
      iVar18 = iVar18 + iVar33;
      iVar12 = piVar3[0x28] * (int)sVar32;
      iVar10 = (int)sVar30 * piVar3[0x18];
      iVar33 = (int)param_3[8] * piVar3[8];
      iVar9 = DAT_001c1bbc * (iVar12 + iVar33 + iVar10 + iVar24);
      iVar31 = DAT_001c1bc0 * (iVar10 + iVar24) + iVar9;
      iVar9 = DAT_001c1bc4 * (iVar12 + iVar33) + iVar9;
      iVar13 = DAT_001c1bc8 * (iVar24 + iVar33);
      iVar24 = iVar24 * DAT_001c1bd0 + iVar13 + iVar31;
      iVar13 = DAT_001c1bcc * iVar33 + iVar13 + iVar9;
      iVar33 = (iVar10 + iVar12) * DAT_001c1bd4;
      iVar9 = iVar12 * DAT_001c1bd8 + iVar33 + iVar9;
      iVar31 = iVar10 * DAT_001c1bdc + iVar33 + iVar31;
      *piVar4 = iVar13 + iVar18 >> 0xb;
      piVar4[0x38] = iVar18 - iVar13 >> 0xb;
      piVar4[8] = iVar31 + iVar19 >> 0xb;
      piVar4[0x30] = iVar19 - iVar31 >> 0xb;
      piVar4[0x10] = iVar9 + iVar36 >> 0xb;
      piVar4[0x28] = iVar36 - iVar9 >> 0xb;
      piVar4[0x18] = iVar24 + iVar11 >> 0xb;
      piVar4[0x20] = iVar11 - iVar24 >> 0xb;
    }
    local_154 = local_154 + -1;
    local_14c = local_14c + 1;
    local_158 = local_158 + 1;
    local_148 = local_148 + 1;
    local_150 = local_150 + 1;
    local_15c = local_15c + 1;
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    if (local_154 == 0) {
      do {
        uVar2 = DAT_001c1f40;
        iVar10 = piVar6[4] * DAT_001c1ed8;
        iVar33 = DAT_001c1edc * piVar6[4];
        iVar11 = (*piVar6 + 0x10) * 0x2000;
        iVar13 = iVar11 + iVar10;
        iVar20 = iVar11 + iVar33;
        iVar10 = iVar11 - iVar10;
        iVar11 = iVar11 - iVar33;
        iVar12 = piVar6[6];
        iVar19 = piVar6[2];
        iVar33 = (iVar19 - iVar12) * DAT_001c1ee0;
        iVar9 = (iVar19 - iVar12) * DAT_001c1ee4;
        iVar18 = iVar12 * DAT_001c1eec + iVar9;
        iVar31 = iVar18 + iVar13;
        iVar36 = iVar19 * DAT_001c1ef0 + iVar33;
        iVar13 = iVar13 - iVar18;
        iVar18 = iVar36 + iVar20;
        iVar20 = iVar20 - iVar36;
        iVar9 = DAT_001c1ee8 * iVar19 + iVar9;
        iVar33 = DAT_001c1ef4 * iVar12 + iVar33;
        iVar21 = iVar9 + iVar11;
        iVar36 = iVar33 + iVar10;
        iVar11 = iVar11 - iVar9;
        iVar10 = iVar10 - iVar33;
        iVar9 = piVar6[5];
        iVar22 = piVar6[1];
        iVar25 = (iVar9 + iVar22) * DAT_001c1ef8;
        iVar19 = (iVar9 + iVar22) * DAT_001c1efc;
        iVar33 = piVar6[7];
        iVar26 = (iVar22 - iVar33) * DAT_001c1f00;
        iVar12 = piVar6[3];
        piVar6 = piVar6 + 8;
        iVar27 = DAT_001c1f04 * (iVar22 - iVar12);
        iVar24 = (iVar12 + iVar22) * DAT_001c1f08;
        iVar14 = (iVar33 + iVar22) * DAT_001c1f0c;
        iVar15 = iVar24 + iVar19 + iVar22 * DAT_001c1f10 + iVar14;
        iVar23 = DAT_001c1f14 * iVar22 + iVar25 + iVar26 + iVar27;
        iVar22 = (iVar9 + iVar12) * 0x470;
        iVar16 = (iVar9 - iVar12) * DAT_001c1f18;
        iVar28 = (iVar33 + iVar12) * DAT_001c1f28;
        iVar34 = iVar24 + iVar22 + iVar12 * DAT_001c1f1c + iVar28;
        iVar29 = (iVar33 + iVar12) * DAT_001c1f30;
        iVar24 = iVar12 * DAT_001c1f34 + iVar29 + iVar27 + iVar16;
        iVar27 = (iVar33 + iVar9) * DAT_001c1f38;
        iVar19 = iVar9 * DAT_001c1f20 + iVar19 + iVar22 + iVar27;
        iVar12 = DAT_001c1f04 * (iVar33 - iVar9);
        iVar22 = iVar33 * DAT_001c1f3c + iVar29 + iVar26 + iVar12;
        iVar12 = iVar25 + iVar9 * DAT_001c1f24 + iVar16 + iVar12;
        iVar27 = iVar27 + iVar14 + iVar28 + iVar33 * DAT_001c1f2c;
        puVar5 = (undefined *)(*param_4 + param_5);
        *puVar5 = *(undefined *)(iVar8 + (iVar15 + iVar31 >> 0x12 & DAT_001c1f40));
        puVar5[0xf] = *(undefined *)(iVar8 + (iVar31 - iVar15 >> 0x12 & uVar2));
        puVar5[1] = *(undefined *)(iVar8 + (iVar18 + iVar34 >> 0x12 & uVar2));
        puVar5[0xe] = *(undefined *)(iVar8 + (iVar18 - iVar34 >> 0x12 & uVar2));
        puVar5[2] = *(undefined *)(iVar8 + (iVar21 + iVar19 >> 0x12 & uVar2));
        puVar5[0xd] = *(undefined *)(iVar8 + (iVar21 - iVar19 >> 0x12 & uVar2));
        puVar5[3] = *(undefined *)(iVar8 + (iVar36 + iVar27 >> 0x12 & uVar2));
        puVar5[0xc] = *(undefined *)(iVar8 + (iVar36 - iVar27 >> 0x12 & uVar2));
        puVar5[4] = *(undefined *)(iVar8 + (iVar10 + iVar22 >> 0x12 & uVar2));
        puVar5[0xb] = *(undefined *)(iVar8 + (iVar10 - iVar22 >> 0x12 & uVar2));
        puVar5[5] = *(undefined *)(iVar8 + (iVar12 + iVar11 >> 0x12 & uVar2));
        puVar5[10] = *(undefined *)(iVar8 + (iVar11 - iVar12 >> 0x12 & uVar2));
        puVar5[6] = *(undefined *)(iVar8 + (iVar24 + iVar20 >> 0x12 & uVar2));
        puVar5[9] = *(undefined *)(iVar8 + (iVar20 - iVar24 >> 0x12 & uVar2));
        puVar5[7] = *(undefined *)(iVar8 + (iVar23 + iVar13 >> 0x12 & uVar2));
        puVar5[8] = *(undefined *)(iVar8 + (uVar2 & iVar13 - iVar23 >> 0x12));
        param_4 = param_4 + 1;
      } while (piVar6 != &iStack_28);
      return;
    }
  } while( true );
}


