/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c3cc8  Symbol: jpeg_idct_4x8 */

void jpeg_idct_4x8(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  int iVar23;
  short *local_d8;
  int local_d4;
  short *local_d0;
  short *local_cc;
  short *local_c8;
  short *local_c4;
  int local_a8 [32];
  int iStack_28;
  
  piVar9 = local_a8;
  piVar6 = *(int **)(param_2 + 0x54);
  local_cc = param_3 + 0x28;
  local_c4 = param_3 + 0x30;
  local_d0 = param_3 + 0x20;
  iVar4 = *(int *)(param_1 + 0x14c) + 0x80;
  local_c8 = param_3 + 0x38;
  local_d8 = param_3 + 0x18;
  local_d4 = 4;
  piVar8 = piVar9;
  do {
    if (param_3[8] == 0) {
      sVar13 = param_3[0x10];
      if (sVar13 != 0) goto LAB_001c3f68;
      sVar18 = *local_d8;
      if (sVar18 != 0) {
        sVar1 = *local_c8;
        sVar3 = *local_c4;
        sVar22 = *local_d0;
        sVar20 = *local_cc;
        goto LAB_001c3d40;
      }
      sVar22 = *local_d0;
      if (sVar22 != 0) {
        sVar1 = *local_c8;
        sVar3 = *local_c4;
        sVar20 = *local_cc;
        goto LAB_001c3d40;
      }
      sVar20 = *local_cc;
      if (sVar20 != 0) {
        sVar1 = *local_c8;
        sVar3 = *local_c4;
        goto LAB_001c3d40;
      }
      sVar3 = *local_c4;
      if (sVar3 != 0) {
        sVar1 = *local_c8;
        goto LAB_001c3d40;
      }
      sVar1 = *local_c8;
      if (sVar1 != 0) goto LAB_001c3d40;
      iVar10 = *piVar6 * (int)*param_3 * 4;
      *piVar8 = iVar10;
      piVar8[4] = iVar10;
      piVar8[8] = iVar10;
      piVar8[0xc] = iVar10;
      piVar8[0x10] = iVar10;
      piVar8[0x14] = iVar10;
      piVar8[0x18] = iVar10;
      piVar8[0x1c] = iVar10;
    }
    else {
      sVar13 = param_3[0x10];
LAB_001c3f68:
      sVar22 = *local_d0;
      sVar1 = *local_c8;
      sVar3 = *local_c4;
      sVar20 = *local_cc;
      sVar18 = *local_d8;
LAB_001c3d40:
      iVar10 = DAT_001c3ff0 * (piVar6[0x30] * (int)sVar3 + piVar6[0x10] * (int)sVar13);
      iVar14 = iVar10 + DAT_001c3ff4 * piVar6[0x10] * (int)sVar13;
      iVar10 = iVar10 + DAT_001c3ff8 * piVar6[0x30] * (int)sVar3;
      iVar23 = (int)*param_3 * *piVar6 * 0x2000 + 0x400;
      iVar21 = (int)sVar22 * piVar6[0x20] * 0x2000 + iVar23;
      iVar23 = iVar23 + (int)sVar22 * piVar6[0x20] * -0x2000;
      iVar16 = iVar21 - iVar14;
      iVar15 = iVar10 + iVar23;
      iVar23 = iVar23 - iVar10;
      iVar17 = piVar6[0x38] * (int)sVar1;
      iVar11 = piVar6[0x28] * (int)sVar20;
      iVar10 = (int)sVar18 * piVar6[0x18];
      iVar5 = (int)param_3[8] * piVar6[8];
      iVar14 = iVar14 + iVar21;
      iVar21 = DAT_001c3ffc * (iVar11 + iVar5 + iVar10 + iVar17);
      iVar19 = DAT_001c4000 * (iVar10 + iVar17) + iVar21;
      iVar21 = DAT_001c4004 * (iVar11 + iVar5) + iVar21;
      iVar12 = DAT_001c4008 * (iVar17 + iVar5);
      iVar17 = iVar17 * DAT_001c4010 + iVar12 + iVar19;
      iVar12 = DAT_001c400c * iVar5 + iVar12 + iVar21;
      iVar5 = (iVar10 + iVar11) * DAT_001c4014;
      iVar21 = iVar11 * DAT_001c4018 + iVar5 + iVar21;
      iVar19 = iVar10 * DAT_001c401c + iVar5 + iVar19;
      *piVar8 = iVar12 + iVar14 >> 0xb;
      piVar8[0x1c] = iVar14 - iVar12 >> 0xb;
      piVar8[0x18] = iVar15 - iVar19 >> 0xb;
      piVar8[4] = iVar19 + iVar15 >> 0xb;
      piVar8[8] = iVar21 + iVar23 >> 0xb;
      piVar8[0x14] = iVar23 - iVar21 >> 0xb;
      piVar8[0xc] = iVar17 + iVar16 >> 0xb;
      piVar8[0x10] = iVar16 - iVar17 >> 0xb;
    }
    uVar2 = DAT_001c4020;
    iVar5 = DAT_001c3ff4;
    iVar10 = DAT_001c3ff0;
    local_d4 = local_d4 + -1;
    local_c4 = local_c4 + 1;
    local_d0 = local_d0 + 1;
    local_c8 = local_c8 + 1;
    local_cc = local_cc + 1;
    local_d8 = local_d8 + 1;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
    if (local_d4 == 0) {
      do {
        iVar19 = ((*piVar9 + 0x10) - piVar9[2]) * 0x2000;
        piVar8 = piVar9 + 1;
        piVar6 = piVar9 + 3;
        iVar23 = (*piVar9 + 0x10 + piVar9[2]) * 0x2000;
        piVar9 = piVar9 + 4;
        iVar21 = (*piVar6 + *piVar8) * iVar10;
        iVar11 = iVar21 + *piVar8 * iVar5;
        iVar21 = iVar21 + DAT_001c3ff8 * *piVar6;
        puVar7 = (undefined *)(param_5 + *param_4);
        *puVar7 = *(undefined *)(iVar4 + (iVar11 + iVar23 >> 0x12 & uVar2));
        puVar7[3] = *(undefined *)(iVar4 + (iVar23 - iVar11 >> 0x12 & uVar2));
        puVar7[1] = *(undefined *)(iVar4 + (iVar21 + iVar19 >> 0x12 & uVar2));
        puVar7[2] = *(undefined *)(iVar4 + (iVar19 - iVar21 >> 0x12 & uVar2));
        param_4 = param_4 + 1;
      } while (piVar9 != &iStack_28);
      return;
    }
  } while( true );
}


