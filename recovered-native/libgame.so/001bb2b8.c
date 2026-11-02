/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bb2b8  Symbol: jpeg_fdct_8x16 */

void jpeg_fdct_8x16(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *local_164;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  local_164 = local_128;
  iVar2 = 0;
  piVar15 = param_1;
  while( true ) {
    do {
      piVar13 = piVar15;
      iVar5 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      pbVar6 = (byte *)(*(int *)(iVar5 + param_2) + param_3);
      iVar16 = (uint)*pbVar6 - (uint)pbVar6[7];
      iVar11 = (uint)pbVar6[7] + (uint)*pbVar6;
      iVar14 = (uint)pbVar6[1] - (uint)pbVar6[6];
      iVar18 = (uint)pbVar6[6] + (uint)pbVar6[1];
      iVar12 = (uint)pbVar6[2] - (uint)pbVar6[5];
      iVar5 = (uint)pbVar6[5] + (uint)pbVar6[2];
      iVar7 = (uint)pbVar6[3] - (uint)pbVar6[4];
      iVar3 = (uint)pbVar6[3] + (uint)pbVar6[4];
      iVar8 = iVar11 - iVar3;
      iVar4 = iVar18 - iVar5;
      iVar3 = iVar3 + iVar11;
      iVar5 = iVar5 + iVar18;
      iVar11 = iVar3 + iVar5 + DAT_001bb418;
      piVar13[4] = (iVar3 - iVar5) * 4;
      *piVar13 = iVar11 * 4;
      iVar3 = DAT_001bb41c * (iVar4 + iVar8);
      piVar13[2] = DAT_001bb420 * iVar8 + 0x400 + iVar3 >> 0xb;
      iVar5 = DAT_001bb428;
      piVar13[6] = DAT_001bb424 * iVar4 + 0x400 + iVar3 >> 0xb;
      iVar5 = iVar5 * (iVar12 + iVar14);
      iVar3 = DAT_001bb42c * (iVar7 + iVar14 + iVar12 + iVar16);
      iVar8 = DAT_001bb430 * (iVar12 + iVar16) + iVar3;
      iVar3 = DAT_001bb434 * (iVar7 + iVar14) + iVar3;
      iVar4 = DAT_001bb438 * (iVar7 + iVar16);
      piVar13[1] = iVar16 * DAT_001bb43c + 0x400 + iVar4 + iVar8 >> 0xb;
      piVar13[3] = DAT_001bb440 * iVar14 + 0x400 + iVar5 + iVar3 >> 0xb;
      piVar13[5] = DAT_001bb444 * iVar12 + 0x400 + iVar5 + iVar8 >> 0xb;
      piVar13[7] = DAT_001bb448 * iVar7 + 0x400 + iVar4 + iVar3 >> 0xb;
      piVar15 = local_164;
    } while (iVar2 == 8);
    if (iVar2 == 0x10) break;
    piVar15 = piVar13 + 8;
  }
  piVar9 = param_1 + 0x10;
  piVar15 = local_88;
  piVar10 = param_1 + 0x28;
  piVar13 = local_e8;
  do {
    iVar2 = *param_1 - piVar15[0x10];
    iVar18 = piVar15[0x10] + *param_1;
    piVar1 = piVar15 + 8;
    iVar19 = param_1[8] - *piVar1;
    iVar20 = *piVar15;
    piVar15 = piVar15 + 1;
    iVar24 = *piVar1 + param_1[8];
    iVar11 = *piVar9 - iVar20;
    iVar20 = *piVar9 + iVar20;
    iVar5 = piVar9[8] - piVar13[0x10];
    iVar8 = piVar9[8] + piVar13[0x10];
    iVar21 = piVar9[0x10] - piVar13[8];
    iVar12 = piVar9[0x10] + piVar13[8];
    iVar14 = *piVar13;
    piVar13 = piVar13 + 1;
    iVar22 = *piVar10 - iVar14;
    iVar14 = *piVar10 + iVar14;
    piVar1 = local_164 + 8;
    iVar3 = piVar10[8] - *piVar1;
    iVar16 = *local_164;
    local_164 = local_164 + 1;
    iVar23 = *piVar1 + piVar10[8];
    iVar7 = iVar16 + piVar10[0x10];
    iVar16 = piVar10[0x10] - iVar16;
    iVar4 = iVar7 + iVar18;
    iVar18 = iVar18 - iVar7;
    iVar17 = iVar24 - iVar23;
    iVar7 = iVar20 - iVar14;
    iVar23 = iVar23 + iVar24;
    iVar14 = iVar14 + iVar20;
    iVar20 = iVar12 + iVar8;
    iVar8 = iVar8 - iVar12;
    *param_1 = iVar4 + 4 + iVar23 + iVar14 + iVar20 >> 3;
    piVar9[0x10] = DAT_001bb784 * (iVar4 - iVar20) + DAT_001bb788 * (iVar23 - iVar14) + 0x8000 >>
                   0x10;
    iVar4 = DAT_001bb790 * (iVar8 - iVar17) + DAT_001bb78c * (iVar18 - iVar7);
    *piVar9 = DAT_001bb798 * iVar7 + DAT_001bb794 * iVar17 + 0x8000 + iVar4 >> 0x10;
    piVar10[8] = DAT_001bb7a0 * iVar8 + iVar18 * DAT_001bb79c + 0x8000 + iVar4 >> 0x10;
    iVar14 = (iVar11 + iVar2) * DAT_001bb7b0 + (iVar16 + iVar22) * DAT_001bb7ac;
    iVar18 = (iVar5 + iVar2) * DAT_001bb7b8 + (iVar21 - iVar16) * DAT_001bb7b4;
    iVar8 = (iVar11 + iVar19) * 0x470 + (iVar3 - iVar22) * DAT_001bb7bc;
    iVar7 = (iVar3 + iVar21) * DAT_001bb7c0 + (iVar5 + iVar19) * DAT_001bb7c4;
    iVar4 = DAT_001bb7a4 * (iVar22 - iVar21) + (iVar5 + iVar11) * DAT_001bb7c8;
    iVar12 = DAT_001bb7a4 * (iVar3 - iVar16) + (iVar19 + iVar2) * DAT_001bb7a8 + 0x8000;
    param_1[8] = iVar2 * DAT_001bb7d0 + iVar12 + iVar14 + iVar18 + iVar16 * DAT_001bb7cc >> 0x10;
    param_1 = param_1 + 1;
    piVar9[8] = iVar12 + iVar8 + iVar7 + iVar3 * DAT_001bb7d4 + iVar19 * DAT_001bb7d8 >> 0x10;
    piVar9 = piVar9 + 1;
    *piVar10 = iVar11 * DAT_001bb7e0 + iVar8 + iVar14 + 0x8000 + iVar4 + iVar22 * DAT_001bb7dc >>
               0x10;
    piVar10[0x10] =
         iVar4 + iVar7 + iVar18 + 0x8000 + iVar21 * DAT_001bb7e4 + iVar5 * DAT_001bb7e8 >> 0x10;
    piVar10 = piVar10 + 1;
  } while (local_164 != local_108);
  return;
}


