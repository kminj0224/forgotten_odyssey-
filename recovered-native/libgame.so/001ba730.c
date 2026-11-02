/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ba730  Symbol: jpeg_fdct_16x16 */

void jpeg_fdct_16x16(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  byte *pbVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *local_16c;
  int local_14c;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  local_16c = local_128;
  local_14c = 0;
  piVar19 = param_1;
  while( true ) {
    do {
      piVar16 = piVar19;
      pbVar17 = (byte *)(*(int *)(local_14c * 4 + param_2) + param_3);
      iVar15 = (uint)*pbVar17 - (uint)pbVar17[0xf];
      iVar5 = (uint)pbVar17[0xf] + (uint)*pbVar17;
      iVar6 = (uint)pbVar17[1] - (uint)pbVar17[0xe];
      iVar2 = (uint)pbVar17[0xe] + (uint)pbVar17[1];
      iVar20 = (uint)pbVar17[2] - (uint)pbVar17[0xd];
      iVar9 = (uint)pbVar17[0xd] + (uint)pbVar17[2];
      iVar21 = (uint)pbVar17[3] - (uint)pbVar17[0xc];
      iVar10 = (uint)pbVar17[0xc] + (uint)pbVar17[3];
      iVar7 = (uint)pbVar17[4] - (uint)pbVar17[0xb];
      iVar11 = (uint)pbVar17[0xb] + (uint)pbVar17[4];
      iVar12 = (uint)pbVar17[5] - (uint)pbVar17[10];
      iVar3 = (uint)pbVar17[10] + (uint)pbVar17[5];
      iVar24 = (uint)pbVar17[6] + (uint)pbVar17[9];
      iVar23 = (uint)pbVar17[7] + (uint)pbVar17[8];
      iVar4 = (uint)pbVar17[6] - (uint)pbVar17[9];
      iVar18 = (uint)pbVar17[7] - (uint)pbVar17[8];
      iVar8 = iVar5 - iVar23;
      iVar23 = iVar23 + iVar5;
      iVar5 = iVar2 - iVar24;
      iVar22 = iVar9 - iVar3;
      iVar24 = iVar24 + iVar2;
      iVar3 = iVar3 + iVar9;
      iVar2 = iVar11 + iVar10;
      iVar10 = iVar10 - iVar11;
      *piVar16 = (iVar23 + DAT_001baa00 + iVar24 + iVar3 + iVar2) * 4;
      piVar16[4] = DAT_001baa04 * (iVar23 - iVar2) + DAT_001baa08 * (iVar24 - iVar3) + 0x400 >> 0xb;
      iVar3 = DAT_001baa10 * (iVar10 - iVar5) + DAT_001baa0c * (iVar8 - iVar22);
      piVar16[2] = DAT_001baa18 * iVar22 + DAT_001baa14 * iVar5 + 0x400 + iVar3 >> 0xb;
      iVar2 = DAT_001baa24;
      piVar16[6] = DAT_001baa20 * iVar10 + iVar8 * DAT_001baa1c + 0x400 + iVar3 >> 0xb;
      iVar10 = (iVar20 + iVar15) * DAT_001baa30 + (iVar18 + iVar12) * DAT_001baa2c;
      iVar11 = (iVar21 + iVar15) * DAT_001baa38 + (iVar7 - iVar18) * DAT_001baa34;
      iVar9 = (iVar20 + iVar6) * 0x470 + (iVar4 - iVar12) * DAT_001baa3c;
      iVar5 = (iVar4 + iVar7) * DAT_001baa40 + (iVar21 + iVar6) * DAT_001baa44;
      iVar8 = DAT_001baa24 * (iVar12 - iVar7) + (iVar21 + iVar20) * DAT_001baa48;
      iVar3 = iVar2 * (iVar4 - iVar18) + (iVar6 + iVar15) * DAT_001baa28 + 0x400;
      piVar16[1] = iVar3 + iVar10 + iVar11 + iVar18 * DAT_001baa4c + iVar15 * DAT_001baa50 >> 0xb;
      iVar2 = DAT_001baa5c;
      piVar16[3] = iVar3 + iVar9 + iVar5 + DAT_001baa54 * iVar4 + DAT_001baa58 * iVar6 >> 0xb;
      iVar3 = DAT_001baa68;
      piVar16[5] = iVar10 + 0x400 + iVar9 + iVar8 + DAT_001baa60 * iVar12 + iVar20 * DAT_001baa64 >>
                   0xb;
      piVar16[7] = iVar5 + iVar11 + 0x400 + iVar8 + iVar7 * iVar2 + iVar21 * iVar3 >> 0xb;
      local_14c = local_14c + 1;
      piVar19 = local_16c;
    } while (local_14c == 8);
    if (local_14c == 0x10) break;
    piVar19 = piVar16 + 8;
  }
  piVar13 = param_1 + 0x10;
  piVar19 = local_88;
  piVar14 = param_1 + 0x28;
  piVar16 = local_e8;
  do {
    iVar15 = *param_1 - piVar19[0x10];
    piVar1 = piVar19 + 8;
    iVar11 = piVar19[0x10] + *param_1;
    iVar18 = param_1[8] - *piVar1;
    iVar20 = *piVar19;
    piVar19 = piVar19 + 1;
    iVar24 = *piVar1 + param_1[8];
    iVar7 = *piVar13 - iVar20;
    iVar20 = *piVar13 + iVar20;
    iVar2 = piVar13[8] - piVar16[0x10];
    iVar6 = piVar13[8] + piVar16[0x10];
    iVar21 = piVar13[0x10] - piVar16[8];
    iVar8 = piVar13[0x10] + piVar16[8];
    iVar9 = *piVar16;
    piVar16 = piVar16 + 1;
    iVar23 = *piVar14 - iVar9;
    iVar9 = *piVar14 + iVar9;
    piVar1 = local_16c + 8;
    iVar3 = piVar14[8] - *piVar1;
    iVar10 = *local_16c;
    local_16c = local_16c + 1;
    iVar22 = *piVar1 + piVar14[8];
    iVar5 = iVar10 + piVar14[0x10];
    iVar10 = piVar14[0x10] - iVar10;
    iVar4 = iVar5 + iVar11;
    iVar11 = iVar11 - iVar5;
    iVar12 = iVar24 - iVar22;
    iVar5 = iVar20 - iVar9;
    iVar22 = iVar22 + iVar24;
    iVar9 = iVar9 + iVar20;
    iVar20 = iVar8 + iVar6;
    iVar6 = iVar6 - iVar8;
    *param_1 = iVar4 + 8 + iVar22 + iVar9 + iVar20 >> 4;
    piVar13[0x10] =
         DAT_001bada4 * (iVar4 - iVar20) + DAT_001bada8 * (iVar22 - iVar9) + 0x10000 >> 0x11;
    iVar4 = DAT_001badb0 * (iVar6 - iVar12) + DAT_001badac * (iVar11 - iVar5);
    *piVar13 = DAT_001badb8 * iVar5 + DAT_001badb4 * iVar12 + 0x10000 + iVar4 >> 0x11;
    piVar14[8] = DAT_001badc0 * iVar6 + iVar11 * DAT_001badbc + 0x10000 + iVar4 >> 0x11;
    iVar9 = (iVar7 + iVar15) * DAT_001badd0 + (iVar10 + iVar23) * DAT_001badcc;
    iVar11 = (iVar2 + iVar15) * DAT_001badd8 + (iVar21 - iVar10) * DAT_001badd4;
    iVar6 = (iVar7 + iVar18) * 0x470 + (iVar3 - iVar23) * DAT_001baddc;
    iVar5 = (iVar3 + iVar21) * DAT_001bade0 + (iVar2 + iVar18) * DAT_001bade4;
    iVar4 = DAT_001badc4 * (iVar23 - iVar21) + (iVar2 + iVar7) * DAT_001bade8;
    iVar8 = DAT_001badc4 * (iVar3 - iVar10) + (iVar18 + iVar15) * DAT_001badc8 + 0x10000;
    param_1[8] = iVar15 * DAT_001badf0 + iVar8 + iVar9 + iVar11 + iVar10 * DAT_001badec >> 0x11;
    param_1 = param_1 + 1;
    piVar13[8] = iVar8 + iVar6 + iVar5 + iVar3 * DAT_001badf4 + iVar18 * DAT_001badf8 >> 0x11;
    piVar13 = piVar13 + 1;
    *piVar14 = iVar7 * DAT_001bae00 + iVar6 + iVar9 + 0x10000 + iVar4 + iVar23 * DAT_001badfc >>
               0x11;
    piVar14[0x10] =
         iVar4 + iVar5 + iVar11 + 0x10000 + iVar21 * DAT_001bae04 + iVar2 * DAT_001bae08 >> 0x11;
    piVar14 = piVar14 + 1;
  } while (local_16c != local_108);
  return;
}


