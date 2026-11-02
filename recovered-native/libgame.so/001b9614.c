/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b9614  Symbol: jpeg_fdct_13x13 */

void jpeg_fdct_13x13(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_e4;
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  piVar3 = local_c8;
  local_e4 = 0;
  piVar11 = param_1;
  while( true ) {
    do {
      piVar8 = piVar11;
      pbVar15 = (byte *)(*(int *)(local_e4 * 4 + param_2) + param_3);
      iVar10 = (uint)*pbVar15 - (uint)pbVar15[0xc];
      iVar5 = (uint)pbVar15[0xc] + (uint)*pbVar15;
      iVar4 = (uint)pbVar15[1] - (uint)pbVar15[0xb];
      iVar6 = (uint)pbVar15[0xb] + (uint)pbVar15[1];
      iVar21 = (uint)pbVar15[10] + (uint)pbVar15[2];
      iVar7 = (uint)pbVar15[2] - (uint)pbVar15[10];
      iVar12 = (uint)pbVar15[3] - (uint)pbVar15[9];
      iVar17 = (uint)pbVar15[9] + (uint)pbVar15[3];
      iVar2 = (uint)pbVar15[4] - (uint)pbVar15[8];
      iVar20 = (uint)pbVar15[4] + (uint)pbVar15[8];
      iVar13 = (uint)pbVar15[5] - (uint)pbVar15[7];
      iVar18 = (uint)pbVar15[5] + (uint)pbVar15[7];
      uVar16 = (uint)pbVar15[6];
      *piVar8 = DAT_001b9884 + iVar5 + iVar6 + iVar21 + iVar17 + iVar20 + iVar18 + uVar16;
      iVar14 = DAT_001b98a0;
      iVar5 = iVar5 + uVar16 * -2;
      iVar6 = iVar6 + uVar16 * -2;
      iVar21 = iVar21 + uVar16 * -2;
      iVar17 = iVar17 + uVar16 * -2;
      iVar20 = iVar20 + uVar16 * -2;
      iVar18 = iVar18 + uVar16 * -2;
      piVar8[2] = DAT_001b989c * iVar20 +
                  iVar5 * DAT_001b9888 + 0x1000 + iVar6 * DAT_001b988c + DAT_001b9890 * iVar17 +
                  DAT_001b9894 * iVar21 + iVar18 * DAT_001b9898 >> 0xd;
      iVar19 = (iVar18 - iVar6) * 0xa20 +
               iVar14 * (iVar20 - iVar17) + DAT_001b98a4 * (iVar5 - iVar21);
      iVar5 = (iVar17 + iVar20) * DAT_001b98a8 + (iVar5 + iVar21) * DAT_001b98ac +
              DAT_001b98b0 * (iVar18 + iVar6);
      piVar8[4] = iVar5 + 0x1000 + iVar19 >> 0xd;
      iVar14 = DAT_001b98b4;
      piVar8[6] = (iVar19 - iVar5) + 0x1000 >> 0xd;
      iVar18 = (iVar7 + iVar10) * DAT_001b98b8;
      iVar6 = (iVar13 + iVar2) * DAT_001b98bc + DAT_001b98c0 * (iVar12 + iVar10);
      iVar20 = (iVar7 + iVar4) * DAT_001b98c4 + DAT_001b98c0 * (iVar2 - iVar13);
      iVar17 = (iVar12 + iVar4) * DAT_001b98c8;
      iVar5 = (iVar12 + iVar7) * DAT_001b98cc;
      iVar21 = (iVar4 + iVar10) * iVar14 + 0x1000;
      piVar8[1] = iVar10 * DAT_001b98d4 + iVar2 * DAT_001b98d0 + iVar21 + iVar18 + iVar6 >> 0xd;
      iVar14 = DAT_001b98e0;
      piVar8[3] = iVar21 + iVar20 + iVar17 + DAT_001b98d8 * iVar2 + DAT_001b98dc * iVar4 >> 0xd;
      iVar2 = DAT_001b98e8;
      piVar8[5] = iVar13 * DAT_001b98e4 + iVar18 + 0x1000 + iVar20 + iVar5 + iVar14 * iVar7 >> 0xd;
      piVar8[7] = iVar6 + 0x1000 + iVar17 + iVar5 + iVar13 * iVar2 + iVar12 * DAT_001b98ec >> 0xd;
      local_e4 = local_e4 + 1;
      piVar11 = piVar3;
    } while (local_e4 == 8);
    if (local_e4 == 0xd) break;
    piVar11 = piVar8 + 8;
  }
  piVar8 = param_1 + 0x10;
  piVar11 = local_88;
  piVar9 = param_1 + 0x28;
  do {
    iVar7 = *param_1 - piVar11[0x10];
    iVar4 = piVar11[0x10] + *param_1;
    iVar10 = param_1[8] - piVar11[8];
    iVar14 = piVar11[8] + param_1[8];
    iVar5 = *piVar11;
    piVar11 = piVar11 + 1;
    iVar12 = *piVar8 - iVar5;
    iVar5 = iVar5 + *piVar8;
    piVar1 = piVar3 + 8;
    iVar13 = piVar8[8] - *piVar1;
    iVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    iVar21 = *piVar1 + piVar8[8];
    iVar17 = piVar8[0x10] - iVar6;
    iVar6 = iVar6 + piVar8[0x10];
    iVar18 = *piVar9 - piVar9[0x10];
    iVar20 = piVar9[0x10] + *piVar9;
    iVar2 = piVar9[8];
    *param_1 = DAT_001b9bac * (iVar4 + iVar14 + iVar5 + iVar21 + iVar6 + iVar20 + iVar2) + 0x2000 >>
               0xe;
    iVar14 = iVar14 + iVar2 * -2;
    iVar4 = iVar4 + iVar2 * -2;
    iVar21 = iVar21 + iVar2 * -2;
    iVar5 = iVar5 + iVar2 * -2;
    iVar20 = iVar20 + iVar2 * -2;
    iVar6 = iVar6 + iVar2 * -2;
    *piVar8 = DAT_001b9bc4 * iVar6 +
              iVar4 * DAT_001b9bb0 + 0x2000 + iVar14 * DAT_001b9bb4 + DAT_001b9bb8 * iVar21 +
              DAT_001b9bbc * iVar5 + iVar20 * DAT_001b9bc0 >> 0xe;
    iVar2 = (iVar20 - iVar14) * DAT_001b9bc8 + (iVar6 - iVar21) * 0xa90 + (iVar4 - iVar5) * 0x1c01;
    iVar14 = (iVar21 + iVar6) * DAT_001b9bcc + (iVar4 + iVar5) * DAT_001b9bd0 +
             DAT_001b9bd4 * (iVar20 + iVar14);
    piVar8[0x10] = iVar14 + 0x2000 + iVar2 >> 0xe;
    piVar9[8] = (iVar2 - iVar14) + 0x2000 >> 0xe;
    iVar4 = (iVar12 + iVar7) * DAT_001b9bdc;
    iVar2 = DAT_001b9be4 * (iVar13 + iVar7) + (iVar18 + iVar17) * DAT_001b9be0;
    iVar21 = (iVar12 + iVar10) * DAT_001b9be8 + DAT_001b9be4 * (iVar17 - iVar18);
    iVar5 = (iVar13 + iVar10) * DAT_001b9bec;
    iVar14 = (iVar13 + iVar12) * DAT_001b9bf0;
    iVar6 = (iVar10 + iVar7) * DAT_001b9bd8 + 0x2000;
    param_1[8] = iVar7 * DAT_001b9bf8 + iVar17 * DAT_001b9bf4 + iVar6 + iVar4 + iVar2 >> 0xe;
    param_1 = param_1 + 1;
    piVar8[8] = iVar10 * DAT_001b9c00 + iVar6 + iVar21 + iVar5 + iVar17 * DAT_001b9bfc >> 0xe;
    piVar8 = piVar8 + 1;
    *piVar9 = iVar12 * DAT_001b9c08 + iVar21 + iVar4 + 0x2000 + iVar14 + iVar18 * DAT_001b9c04 >>
              0xe;
    piVar9[0x10] = iVar5 + iVar2 + 0x2000 + iVar14 + iVar18 * DAT_001b9c0c + iVar13 * DAT_001b9c10
                   >> 0xe;
    piVar9 = piVar9 + 1;
  } while (piVar3 != local_a8);
  return;
}


