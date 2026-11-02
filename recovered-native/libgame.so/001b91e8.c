/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b91e8  Symbol: jpeg_fdct_12x12 */

void jpeg_fdct_12x12(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_cc;
  int local_a8 [8];
  int local_88 [25];
  
  piVar6 = local_a8;
  local_cc = 0;
  piVar2 = param_1;
  while( true ) {
    do {
      piVar7 = piVar2;
      pbVar8 = (byte *)(*(int *)(local_cc * 4 + param_2) + param_3);
      iVar1 = (uint)*pbVar8 - (uint)pbVar8[0xb];
      iVar10 = (uint)pbVar8[0xb] + (uint)*pbVar8;
      iVar14 = (uint)pbVar8[1] - (uint)pbVar8[10];
      iVar3 = (uint)pbVar8[10] + (uint)pbVar8[1];
      iVar4 = (uint)pbVar8[2] - (uint)pbVar8[9];
      iVar11 = (uint)pbVar8[9] + (uint)pbVar8[2];
      iVar5 = (uint)pbVar8[3] - (uint)pbVar8[8];
      iVar19 = (uint)pbVar8[8] + (uint)pbVar8[3];
      iVar15 = (uint)pbVar8[4] - (uint)pbVar8[7];
      iVar18 = (uint)pbVar8[7] + (uint)pbVar8[4];
      iVar9 = (uint)pbVar8[5] - (uint)pbVar8[6];
      iVar12 = (uint)pbVar8[5] + (uint)pbVar8[6];
      iVar16 = iVar12 + iVar10;
      iVar10 = iVar10 - iVar12;
      iVar12 = iVar3 - iVar18;
      iVar17 = iVar19 + iVar11;
      iVar11 = iVar11 - iVar19;
      *piVar7 = iVar3 + DAT_001b959c + iVar18 + iVar16 + iVar17;
      piVar7[6] = (iVar10 - iVar12) - iVar11;
      piVar7[4] = DAT_001b95a0 * (iVar16 - iVar17) + 0x1000 >> 0xd;
      piVar7[2] = ((iVar12 + 0x1000) - iVar11) + DAT_001b95a4 * (iVar10 + iVar11) >> 0xd;
      iVar16 = DAT_001b95a8 * (iVar15 + iVar14);
      iVar3 = iVar14 * DAT_001b95ac + iVar16;
      iVar10 = (iVar4 + iVar1) * DAT_001b95b4;
      iVar12 = (iVar5 + iVar1) * DAT_001b95b8;
      iVar11 = (iVar5 + iVar4) * DAT_001b95bc;
      iVar16 = iVar15 * DAT_001b95b0 + iVar16;
      piVar7[1] = iVar1 * DAT_001b95c0 + iVar3 + 0x1000 + iVar10 + iVar12 + iVar9 * 0x5e8 >> 0xd;
      iVar15 = iVar9 * DAT_001b95b8;
      iVar14 = iVar9 * DAT_001b95c4;
      piVar7[3] = (iVar9 + iVar4) * DAT_001b95c8 + 0x1000 + iVar16 + (iVar1 - iVar5) * DAT_001b95cc
                  >> 0xd;
      iVar1 = DAT_001b95d4;
      piVar7[5] = (iVar15 + iVar10 + 0x1000 + iVar11 + DAT_001b95d0 * iVar4) - iVar16 >> 0xd;
      piVar7[7] = (iVar1 * iVar5 + iVar11 + iVar12 + 0x1000 + iVar14) - iVar3 >> 0xd;
      local_cc = local_cc + 1;
      piVar2 = piVar6;
    } while (local_cc == 8);
    if (local_cc == 0xc) break;
    piVar2 = piVar7 + 8;
  }
  piVar2 = param_1 + 8;
  piVar7 = param_1 + 0x20;
  piVar13 = param_1 + 0x38;
  do {
    iVar9 = *param_1 - piVar6[0x18];
    iVar5 = piVar6[0x18] + *param_1;
    iVar15 = *piVar2 - piVar6[0x10];
    iVar10 = piVar6[0x10] + *piVar2;
    iVar16 = param_1[0x10] - piVar6[8];
    iVar12 = piVar6[8] + param_1[0x10];
    iVar17 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar1 = piVar2[0x10] - iVar17;
    iVar17 = iVar17 + piVar2[0x10];
    iVar18 = *piVar7 - *piVar13;
    iVar11 = *piVar13 + *piVar7;
    iVar3 = piVar7[8] - piVar7[0x10];
    iVar4 = piVar7[0x10] + piVar7[8];
    iVar14 = iVar4 + iVar5;
    iVar5 = iVar5 - iVar4;
    iVar4 = iVar10 - iVar11;
    iVar19 = iVar12 - iVar17;
    iVar17 = iVar17 + iVar12;
    *param_1 = DAT_001b95d8 * (iVar10 + iVar11 + iVar14 + iVar17) + 0x2000 >> 0xe;
    piVar7[0x10] = DAT_001b95d8 * ((iVar5 - iVar4) - iVar19) + 0x2000 >> 0xe;
    *piVar7 = DAT_001b95dc * (iVar14 - iVar17) + 0x2000 >> 0xe;
    param_1[0x10] =
         DAT_001b95e0 * (iVar5 + iVar19) + 0x2000 + DAT_001b95d8 * (iVar4 - iVar19) >> 0xe;
    param_1 = param_1 + 1;
    iVar12 = DAT_001b95e4 * (iVar18 + iVar15);
    iVar11 = iVar15 * DAT_001b95e8 + iVar12;
    iVar12 = iVar18 * DAT_001b95ec + iVar12;
    iVar4 = (iVar16 + iVar9) * DAT_001b95f0;
    iVar5 = (iVar1 + iVar9) * DAT_001b95f4;
    iVar10 = (iVar1 + iVar16) * DAT_001b95f8;
    *piVar2 = iVar9 * DAT_001b95fc + iVar11 + 0x2000 + iVar4 + iVar5 + iVar3 * 0x540 >> 0xe;
    piVar2[0x10] = (iVar3 + iVar16) * DAT_001b9600 + 0x2000 + iVar12 +
                   (iVar9 - iVar1) * DAT_001b9604 >> 0xe;
    piVar2 = piVar2 + 1;
    piVar7[8] = (iVar4 + 0x2000 + iVar10 + iVar3 * DAT_001b95f4 + iVar16 * DAT_001b9608) - iVar12 >>
                0xe;
    piVar7 = piVar7 + 1;
    *piVar13 = (DAT_001b960c * iVar3 + iVar10 + iVar5 + 0x2000 + iVar1 * DAT_001b9610) - iVar11 >>
               0xe;
    piVar13 = piVar13 + 1;
  } while (piVar6 != local_88);
  return;
}


