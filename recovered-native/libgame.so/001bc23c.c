/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bc23c  Symbol: jpeg_fdct_7x14 */

void jpeg_fdct_7x14(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_e8 [7];
  int aiStack_cc [17];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  memset(param_1,0,0x100);
  piVar1 = local_e8;
  iVar2 = 0;
  piVar15 = param_1;
  while( true ) {
    do {
      piVar5 = piVar15;
      iVar3 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      pbVar13 = (byte *)(*(int *)(iVar3 + param_2) + param_3);
      iVar3 = (uint)*pbVar13 - (uint)pbVar13[6];
      iVar16 = (uint)pbVar13[6] + (uint)*pbVar13;
      iVar10 = (uint)pbVar13[1] - (uint)pbVar13[5];
      iVar4 = (uint)pbVar13[5] + (uint)pbVar13[1];
      iVar7 = (uint)pbVar13[2] - (uint)pbVar13[4];
      uVar14 = (uint)pbVar13[3];
      iVar23 = (uint)pbVar13[4] + (uint)pbVar13[2];
      *piVar5 = (uVar14 + DAT_001bc5f0 + iVar4 + iVar16 + iVar23) * 4;
      iVar8 = (iVar16 + iVar23 + uVar14 * -4) * 0xb50;
      iVar9 = DAT_001bc5f4 * (iVar16 - iVar4);
      iVar17 = (DAT_001bc5f4 + 0x13f) * (iVar16 - iVar23);
      iVar16 = DAT_001bc5f8 * (iVar4 - iVar23);
      piVar5[4] = (int)(DAT_001bc5fc * (uVar14 * 2 - iVar4) + iVar16 + iVar9 + 0x400) >> 0xb;
      piVar5[2] = iVar17 + iVar16 + 0x400 + iVar8 >> 0xb;
      piVar5[6] = (iVar9 + 0x400 + iVar8) - iVar17 >> 0xb;
      iVar9 = DAT_001bc600 * (iVar10 + iVar3);
      iVar4 = DAT_001bc604 * (iVar3 - iVar10);
      iVar8 = DAT_001bc608 * (iVar7 + iVar10);
      iVar3 = DAT_001bc60c * (iVar7 + iVar3);
      piVar5[1] = (iVar9 + iVar3 + 0x400) - iVar4 >> 0xb;
      piVar5[3] = iVar9 + iVar8 + 0x400 + iVar4 >> 0xb;
      piVar5[5] = DAT_001bc610 * iVar7 + 0x400 + iVar8 + iVar3 >> 0xb;
      piVar15 = piVar1;
    } while (iVar2 == 8);
    if (iVar2 == 0xe) break;
    piVar15 = piVar5 + 8;
  }
  piVar6 = param_1 + 0x10;
  piVar15 = local_88;
  piVar5 = param_1 + 0x28;
  do {
    iVar2 = DAT_001bc618;
    iVar3 = *param_1 - piVar15[0x10];
    iVar18 = piVar15[0x10] + *param_1;
    iVar19 = param_1[8] - piVar15[8];
    iVar4 = piVar15[8] + param_1[8];
    iVar20 = *piVar15;
    piVar15 = piVar15 + 1;
    iVar10 = *piVar6 - iVar20;
    iVar20 = iVar20 + *piVar6;
    iVar21 = piVar6[8] - piVar1[0x10];
    iVar17 = piVar1[0x10] + piVar6[8];
    iVar23 = piVar6[0x10] - piVar1[8];
    iVar7 = piVar6[0x10] + piVar1[8];
    iVar8 = *piVar1;
    piVar1 = piVar1 + 1;
    iVar11 = *piVar5 - iVar8;
    iVar8 = iVar8 + *piVar5;
    iVar22 = piVar5[0x10] + piVar5[8];
    iVar12 = piVar5[8] - piVar5[0x10];
    iVar9 = iVar18 - iVar22;
    iVar16 = iVar4 - iVar8;
    iVar8 = iVar8 + iVar4;
    iVar4 = iVar20 - iVar7;
    iVar7 = iVar7 + iVar20;
    iVar22 = iVar22 + iVar18;
    *param_1 = DAT_001bc614 * (iVar22 + iVar8 + iVar17 + iVar7) + 0x4000 >> 0xf;
    piVar6[0x10] = DAT_001bc61c * (iVar8 + iVar17 * -2) + iVar2 * (iVar22 + iVar17 * -2) + 0x4000 +
                   DAT_001bc620 * (iVar17 * 2 - iVar7) >> 0xf;
    iVar2 = DAT_001bc624 * (iVar16 + iVar9);
    *piVar6 = DAT_001bc62c * iVar4 + iVar9 * DAT_001bc628 + 0x4000 + iVar2 >> 0xf;
    piVar5[8] = iVar4 * DAT_001bc634 + iVar16 * DAT_001bc630 + 0x4000 + iVar2 >> 0xf;
    iVar2 = DAT_001bc614;
    piVar5[0x10] = DAT_001bc614 *
                   ((((iVar21 + iVar3) - iVar12) - (iVar10 + iVar19)) - (iVar11 - iVar23)) + 0x4000
                   >> 0xf;
    iVar21 = iVar21 * iVar2;
    iVar4 = (iVar11 - iVar23) * DAT_001bc63c + ((iVar10 + iVar19) * DAT_001bc638 - iVar21) + 0x4000;
    iVar7 = (iVar10 + iVar3) * DAT_001bc644 + (iVar12 + iVar23) * DAT_001bc640;
    *piVar5 = iVar23 * DAT_001bc648 + iVar4 + iVar7 + iVar10 * DAT_001bc64c >> 0xf;
    piVar5 = piVar5 + 1;
    iVar2 = (iVar11 - iVar12) * DAT_001bc650 + (iVar19 + iVar3) * DAT_001bc654;
    piVar6[8] = iVar4 + iVar2 + iVar11 * DAT_001bc658 + iVar19 * DAT_001bc65c >> 0xf;
    piVar6 = piVar6 + 1;
    param_1[8] = DAT_001bc664 * iVar3 + iVar2 + iVar7 + iVar21 + 0x4000 + iVar12 * DAT_001bc660 >>
                 0xf;
    param_1 = param_1 + 1;
  } while (piVar1 != aiStack_cc);
  return;
}


