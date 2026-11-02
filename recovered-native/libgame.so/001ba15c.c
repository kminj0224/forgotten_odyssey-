/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ba15c  Symbol: jpeg_fdct_15x15 */

void jpeg_fdct_15x15(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int local_108 [8];
  int local_e8 [24];
  int local_88 [8];
  int local_68 [8];
  int local_48 [9];
  
  piVar4 = local_108;
  iVar16 = 0;
  piVar20 = param_1;
  while( true ) {
    do {
      piVar11 = piVar20;
      iVar5 = iVar16 * 4;
      iVar16 = iVar16 + 1;
      pbVar17 = (byte *)(param_3 + *(int *)(iVar5 + param_2));
      iVar3 = (uint)*pbVar17 - (uint)pbVar17[0xe];
      iVar6 = (uint)pbVar17[0xe] + (uint)*pbVar17;
      iVar13 = (uint)pbVar17[1] - (uint)pbVar17[0xd];
      iVar5 = (uint)pbVar17[0xd] + (uint)pbVar17[1];
      iVar18 = (uint)pbVar17[2] - (uint)pbVar17[0xc];
      iVar7 = (uint)pbVar17[0xc] + (uint)pbVar17[2];
      iVar2 = (uint)pbVar17[3] - (uint)pbVar17[0xb];
      iVar8 = (uint)pbVar17[0xb] + (uint)pbVar17[3];
      iVar9 = (uint)pbVar17[4] - (uint)pbVar17[10];
      iVar14 = (uint)pbVar17[10] + (uint)pbVar17[4];
      iVar10 = (uint)pbVar17[5] - (uint)pbVar17[9];
      iVar19 = (uint)pbVar17[5] + (uint)pbVar17[9];
      bVar1 = pbVar17[7];
      iVar15 = (uint)pbVar17[6] - (uint)pbVar17[8];
      iVar24 = (uint)pbVar17[6] + (uint)pbVar17[8];
      iVar21 = iVar7 + (uint)bVar1;
      iVar22 = iVar19 + iVar6 + iVar14;
      iVar23 = iVar8 + iVar5 + iVar24;
      *piVar11 = iVar21 + DAT_001ba3e4 + iVar22 + iVar23;
      piVar11[6] = DAT_001ba3e8 * (iVar22 + iVar21 * -2) + DAT_001ba3ec * (iVar21 * 2 - iVar23) +
                   0x1000 >> 0xd;
      iVar7 = (iVar14 + iVar5 >> 1) + iVar7 + (uint)bVar1 * -2;
      iVar14 = DAT_001ba3f4 * (iVar24 - iVar19) + DAT_001ba3f0 * (iVar6 - iVar8) + 0x1000 +
               DAT_001ba3f8 * (iVar5 - iVar14);
      piVar11[2] = DAT_001ba400 * (iVar8 - iVar7) + DAT_001ba3fc * (iVar7 - iVar24) + iVar14 >> 0xd;
      iVar5 = DAT_001ba408;
      piVar11[4] = (iVar19 - iVar7) * DAT_001ba404 + iVar14 + (iVar7 - iVar6) * 0x2ec >> 0xd;
      iVar6 = DAT_001ba410;
      iVar7 = iVar18 * iVar5;
      iVar8 = (iVar9 + iVar13) * DAT_001ba410 + (iVar10 + iVar2) * DAT_001ba40c +
              (iVar3 - iVar15) * DAT_001ba414;
      piVar11[1] = iVar15 * DAT_001ba420 +
                   iVar7 + 0x1000 + iVar8 + iVar2 * DAT_001ba418 + iVar9 * DAT_001ba41c >> 0xd;
      piVar11[3] = ((iVar3 - iVar9) - iVar10) * iVar6 + ((iVar13 - iVar2) - iVar15) * DAT_001ba424 +
                   0x1000 >> 0xd;
      iVar6 = DAT_001ba428;
      piVar11[5] = (((iVar15 + iVar10 + iVar3) - iVar2) - iVar18) * iVar5 + 0x1000 >> 0xd;
      piVar11[7] = ((iVar6 * iVar3 + iVar13 * DAT_001ba42c + 0x1000 + DAT_001ba430 * iVar10) - iVar7
                   ) + iVar8 >> 0xd;
      piVar20 = piVar4;
    } while (iVar16 == 8);
    if (iVar16 == 0xf) break;
    piVar20 = piVar11 + 8;
  }
  piVar11 = param_1 + 0x10;
  piVar20 = local_88;
  piVar12 = param_1 + 0x28;
  do {
    iVar13 = *param_1 - piVar20[0x10];
    iVar16 = piVar20[0x10] + *param_1;
    iVar14 = param_1[8] - piVar20[8];
    iVar7 = piVar20[8] + param_1[8];
    iVar5 = *piVar20;
    piVar20 = piVar20 + 1;
    iVar15 = *piVar11 - iVar5;
    iVar5 = iVar5 + *piVar11;
    iVar6 = piVar11[8] - piVar4[0x18];
    iVar8 = piVar4[0x18] + piVar11[8];
    iVar18 = piVar11[0x10] - piVar4[0x10];
    iVar23 = piVar4[0x10] + piVar11[0x10];
    iVar9 = *piVar12 - piVar4[8];
    iVar2 = *piVar12 + piVar4[8];
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar19 = piVar12[0x10];
    iVar10 = piVar12[8] - iVar3;
    iVar3 = piVar12[8] + iVar3;
    iVar21 = iVar5 + iVar19;
    iVar24 = iVar8 + iVar7 + iVar3;
    iVar22 = iVar2 + iVar16 + iVar23;
    *param_1 = DAT_001ba6e0 * (iVar22 + iVar24 + iVar21) + 0x4000 >> 0xf;
    piVar12[8] = DAT_001ba6e8 * (iVar21 * 2 - iVar24) + DAT_001ba6e4 * (iVar22 + iVar21 * -2) +
                 0x4000 >> 0xf;
    iVar5 = iVar5 + iVar19 * -2 + (iVar23 + iVar7 >> 1);
    iVar7 = DAT_001ba6f0 * (iVar3 - iVar2) + DAT_001ba6ec * (iVar16 - iVar8) + 0x4000 +
            DAT_001ba6f4 * (iVar7 - iVar23);
    *piVar11 = DAT_001ba6fc * (iVar8 - iVar5) + DAT_001ba6f8 * (iVar5 - iVar3) + iVar7 >> 0xf;
    piVar11[0x10] = (iVar5 - iVar16) * 0x354 + iVar7 + (iVar2 - iVar5) * DAT_001ba700 >> 0xf;
    iVar5 = DAT_001ba70c;
    iVar16 = DAT_001ba704;
    iVar2 = iVar15 * DAT_001ba704;
    iVar3 = (iVar18 + iVar14) * DAT_001ba70c + (iVar9 + iVar6) * DAT_001ba708 +
            (iVar13 - iVar10) * DAT_001ba710;
    param_1[8] = iVar10 * DAT_001ba71c +
                 iVar2 + 0x4000 + iVar3 + iVar6 * DAT_001ba714 + iVar18 * DAT_001ba718 >> 0xf;
    param_1 = param_1 + 1;
    piVar11[8] = ((iVar13 - iVar18) - iVar9) * iVar5 + ((iVar14 - iVar6) - iVar10) * DAT_001ba720 +
                 0x4000 >> 0xf;
    piVar11 = piVar11 + 1;
    *piVar12 = (((iVar10 + iVar9 + iVar13) - iVar15) - iVar6) * iVar16 + 0x4000 >> 0xf;
    piVar12[0x10] =
         ((iVar13 * DAT_001ba724 + iVar14 * DAT_001ba728 + 0x4000 + iVar9 * DAT_001ba72c) - iVar2) +
         iVar3 >> 0xf;
    piVar12 = piVar12 + 1;
  } while (piVar4 != local_e8);
  return;
}


