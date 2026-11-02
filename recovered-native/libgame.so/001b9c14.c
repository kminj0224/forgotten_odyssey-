/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b9c14  Symbol: jpeg_fdct_14x14 */

void jpeg_fdct_14x14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_e8 [8];
  int local_c8 [16];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  piVar2 = local_e8;
  iVar1 = 0;
  piVar18 = param_1;
  while( true ) {
    do {
      piVar7 = piVar18;
      iVar4 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      pbVar5 = (byte *)(*(int *)(iVar4 + param_2) + param_3);
      iVar3 = (uint)*pbVar5 - (uint)pbVar5[0xd];
      iVar12 = (uint)pbVar5[0xd] + (uint)*pbVar5;
      iVar16 = (uint)pbVar5[1] - (uint)pbVar5[0xc];
      iVar13 = (uint)pbVar5[0xc] + (uint)pbVar5[1];
      iVar14 = (uint)pbVar5[2] - (uint)pbVar5[0xb];
      iVar15 = (uint)pbVar5[0xb] + (uint)pbVar5[2];
      iVar19 = (uint)pbVar5[3] - (uint)pbVar5[10];
      iVar4 = (uint)pbVar5[10] + (uint)pbVar5[3];
      iVar17 = (uint)pbVar5[4] - (uint)pbVar5[9];
      iVar9 = (uint)pbVar5[4] + (uint)pbVar5[9];
      iVar10 = (uint)pbVar5[5] - (uint)pbVar5[8];
      iVar23 = (uint)pbVar5[5] + (uint)pbVar5[8];
      iVar22 = (uint)pbVar5[6] + (uint)pbVar5[7];
      iVar6 = (uint)pbVar5[6] - (uint)pbVar5[7];
      iVar11 = iVar22 + iVar12;
      iVar12 = iVar12 - iVar22;
      iVar22 = iVar13 - iVar23;
      iVar20 = iVar9 + iVar15;
      iVar23 = iVar23 + iVar13;
      iVar15 = iVar15 - iVar9;
      *piVar7 = iVar4 + DAT_001b9e30 + iVar11 + iVar23 + iVar20;
      piVar7[4] = DAT_001b9e3c * (iVar4 * 2 - iVar20) +
                  DAT_001b9e38 * (iVar23 + iVar4 * -2) + DAT_001b9e34 * (iVar11 + iVar4 * -2) +
                  0x1000 >> 0xd;
      iVar4 = DAT_001b9e50;
      iVar9 = DAT_001b9e40 * (iVar12 + iVar22);
      iVar22 = DAT_001b9e4c * iVar22;
      piVar7[2] = DAT_001b9e48 * iVar15 + iVar12 * DAT_001b9e44 + 0x1000 + iVar9 >> 0xd;
      piVar7[6] = iVar9 + iVar22 + iVar4 * iVar15 + 0x1000 >> 0xd;
      piVar7[7] = (((iVar19 + iVar3) - iVar6) - (iVar14 + iVar16)) - (iVar10 - iVar17);
      iVar11 = (iVar14 + iVar16) * DAT_001b9e58 + (iVar10 - iVar17) * DAT_001b9e54 +
               iVar19 * -0x2000 + 0x1000;
      iVar9 = (iVar6 + iVar17) * DAT_001b9e5c + (iVar14 + iVar3) * DAT_001b9e60;
      piVar7[5] = iVar17 * DAT_001b9e64 + iVar9 + iVar11 + iVar14 * DAT_001b9e68 >> 0xd;
      iVar4 = DAT_001b9e6c * (iVar10 - iVar6) + (iVar16 + iVar3) * DAT_001b9e70;
      piVar7[3] = iVar10 * DAT_001b9e74 + iVar4 + iVar11 + iVar16 * DAT_001b9e78 >> 0xd;
      piVar7[1] = iVar6 + 0x1000 + iVar19 * 0x2000 + iVar9 + iVar4 + DAT_001b9e7c * (iVar6 + iVar3)
                  >> 0xd;
      piVar18 = piVar2;
    } while (iVar1 == 8);
    if (iVar1 == 0xe) break;
    piVar18 = piVar7 + 8;
  }
  piVar8 = param_1 + 0x10;
  piVar18 = local_88;
  piVar7 = param_1 + 0x28;
  do {
    iVar1 = DAT_001ba10c;
    iVar4 = *param_1 - piVar18[0x10];
    iVar19 = piVar18[0x10] + *param_1;
    iVar20 = param_1[8] - piVar18[8];
    iVar3 = piVar18[8] + param_1[8];
    iVar23 = *piVar18;
    piVar18 = piVar18 + 1;
    iVar22 = *piVar8 - iVar23;
    iVar23 = iVar23 + *piVar8;
    iVar21 = piVar8[8] - piVar2[0x10];
    iVar12 = piVar2[0x10] + piVar8[8];
    iVar13 = piVar8[0x10] - piVar2[8];
    iVar6 = piVar8[0x10] + piVar2[8];
    iVar9 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar14 = *piVar7 - iVar9;
    iVar9 = iVar9 + *piVar7;
    iVar17 = piVar7[0x10] + piVar7[8];
    iVar16 = piVar7[8] - piVar7[0x10];
    iVar10 = iVar19 - iVar17;
    iVar11 = iVar3 - iVar9;
    iVar15 = iVar23 - iVar6;
    iVar6 = iVar6 + iVar23;
    iVar17 = iVar17 + iVar19;
    iVar9 = iVar9 + iVar3;
    *param_1 = DAT_001ba108 * (iVar17 + iVar9 + iVar12 + iVar6) + 0x2000 >> 0xe;
    piVar8[0x10] = DAT_001ba114 * (iVar12 * 2 - iVar6) +
                   DAT_001ba110 * (iVar9 + iVar12 * -2) + iVar1 * (iVar17 + iVar12 * -2) + 0x2000 >>
                   0xe;
    iVar1 = DAT_001ba118 * (iVar11 + iVar10);
    *piVar8 = DAT_001ba120 * iVar15 + iVar10 * DAT_001ba11c + 0x2000 + iVar1 >> 0xe;
    piVar7[8] = iVar15 * DAT_001ba128 + iVar11 * DAT_001ba124 + 0x2000 + iVar1 >> 0xe;
    iVar1 = DAT_001ba108;
    piVar7[0x10] = DAT_001ba108 *
                   ((((iVar21 + iVar4) - iVar16) - (iVar22 + iVar20)) - (iVar14 - iVar13)) + 0x2000
                   >> 0xe;
    iVar21 = iVar21 * iVar1;
    iVar3 = (iVar14 - iVar13) * DAT_001ba130 + ((iVar22 + iVar20) * DAT_001ba12c - iVar21) + 0x2000;
    iVar6 = (iVar22 + iVar4) * DAT_001ba138 + (iVar16 + iVar13) * DAT_001ba134;
    *piVar7 = iVar13 * DAT_001ba13c + iVar3 + iVar6 + iVar22 * DAT_001ba140 >> 0xe;
    piVar7 = piVar7 + 1;
    iVar1 = (iVar14 - iVar16) * DAT_001ba144 + (iVar20 + iVar4) * DAT_001ba148;
    piVar8[8] = iVar3 + iVar1 + iVar14 * DAT_001ba14c + iVar20 * DAT_001ba150 >> 0xe;
    piVar8 = piVar8 + 1;
    param_1[8] = DAT_001ba158 * iVar4 + iVar1 + iVar6 + iVar21 + 0x2000 + iVar16 * DAT_001ba154 >>
                 0xe;
    param_1 = param_1 + 1;
  } while (piVar2 != local_c8);
  return;
}


