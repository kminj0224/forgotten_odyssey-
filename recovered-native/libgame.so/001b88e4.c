/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b88e4  Symbol: jpeg_fdct_10x10 */

void jpeg_fdct_10x10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int local_68 [8];
  int local_48 [9];
  
  piVar2 = local_68;
  iVar7 = 0;
  piVar6 = param_1;
  while( true ) {
    do {
      piVar8 = piVar6;
      iVar16 = DAT_001b8c48;
      iVar3 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      pbVar4 = (byte *)(*(int *)(iVar3 + param_2) + param_3);
      iVar12 = (uint)*pbVar4 - (uint)pbVar4[9];
      iVar10 = (uint)pbVar4[9] + (uint)*pbVar4;
      iVar3 = (uint)pbVar4[1] - (uint)pbVar4[8];
      iVar14 = (uint)pbVar4[8] + (uint)pbVar4[1];
      iVar9 = (uint)pbVar4[2] - (uint)pbVar4[7];
      iVar15 = (uint)pbVar4[7] + (uint)pbVar4[2];
      iVar11 = (uint)pbVar4[3] - (uint)pbVar4[6];
      iVar1 = (uint)pbVar4[3] + (uint)pbVar4[6];
      iVar18 = (uint)pbVar4[4] + (uint)pbVar4[5];
      iVar5 = (uint)pbVar4[4] - (uint)pbVar4[5];
      iVar13 = iVar10 - iVar18;
      iVar18 = iVar18 + iVar10;
      iVar10 = iVar1 + iVar14;
      iVar14 = iVar14 - iVar1;
      *piVar8 = (iVar15 + DAT_001b8c44 + iVar18 + iVar10) * 2;
      piVar8[4] = DAT_001b8c4c * (iVar15 * 2 - iVar10) + iVar16 * (iVar18 + iVar15 * -2) + 0x800 >>
                  0xc;
      iVar16 = DAT_001b8c58;
      iVar1 = DAT_001b8c50 * (iVar14 + iVar13);
      piVar8[2] = DAT_001b8c54 * iVar13 + 0x800 + iVar1 >> 0xc;
      piVar8[6] = iVar16 * iVar14 + 0x800 + iVar1 >> 0xc;
      iVar16 = iVar3 - iVar11;
      piVar8[5] = (((iVar12 + iVar5) - iVar16) - iVar9) * 2;
      piVar8[1] = iVar11 * DAT_001b8c68 +
                  iVar9 * 0x2000 + 0x800 + iVar12 * DAT_001b8c5c + iVar3 * DAT_001b8c60 +
                  iVar5 * DAT_001b8c64 >> 0xc;
      iVar1 = iVar16 * 0x1000 + iVar9 * -0x2000 + (iVar16 + iVar12 + iVar5) * DAT_001b8c6c;
      iVar16 = DAT_001b8c70 * (iVar11 + iVar3) + 0x800 + DAT_001b8c74 * (iVar12 - iVar5);
      piVar8[3] = iVar16 + iVar1 >> 0xc;
      piVar8[7] = iVar16 - iVar1 >> 0xc;
      piVar6 = piVar2;
    } while (iVar7 == 8);
    if (iVar7 == 10) break;
    piVar6 = piVar8 + 8;
  }
  piVar6 = param_1 + 8;
  piVar17 = param_1 + 0x38;
  piVar8 = param_1 + 0x20;
  do {
    iVar3 = *param_1 - piVar2[8];
    iVar16 = piVar2[8] + *param_1;
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar10 = *piVar6 - iVar5;
    iVar5 = iVar5 + *piVar6;
    iVar14 = param_1[0x10] - *piVar17;
    iVar13 = *piVar17 + param_1[0x10];
    iVar9 = piVar6[0x10] - piVar8[0x10];
    iVar12 = piVar8[0x10] + piVar6[0x10];
    iVar1 = *piVar8 - piVar8[8];
    iVar11 = piVar8[8] + *piVar8;
    iVar7 = iVar16 - iVar11;
    iVar11 = iVar11 + iVar16;
    iVar16 = iVar5 - iVar12;
    iVar12 = iVar12 + iVar5;
    *param_1 = DAT_001b8c78 * (iVar13 + iVar11 + iVar12) + 0x4000 >> 0xf;
    *piVar8 = DAT_001b8c80 * (iVar13 * 2 - iVar12) + DAT_001b8c7c * (iVar11 + iVar13 * -2) + 0x4000
              >> 0xf;
    iVar5 = DAT_001b8c84 * (iVar16 + iVar7);
    param_1[0x10] = DAT_001b8c88 * iVar7 + 0x4000 + iVar5 >> 0xf;
    param_1 = param_1 + 1;
    piVar8[0x10] = iVar5 + iVar16 * DAT_001b8c8c + 0x4000 >> 0xf;
    iVar7 = DAT_001b8c78;
    iVar5 = iVar10 - iVar9;
    piVar8[8] = DAT_001b8c78 * (((iVar1 + iVar3) - iVar5) - iVar14) + 0x4000 >> 0xf;
    iVar16 = DAT_001b8c9c;
    piVar8 = piVar8 + 1;
    iVar14 = iVar14 * iVar7;
    *piVar6 = iVar1 * 0x910 + iVar14 + 0x4000 + iVar3 * DAT_001b8c90 + iVar10 * DAT_001b8c94 +
              iVar9 * DAT_001b8c98 >> 0xf;
    iVar16 = (iVar5 + iVar1 + iVar3) * DAT_001b8ca0 + (iVar5 * iVar16 - iVar14);
    iVar7 = DAT_001b8ca8 * (iVar3 - iVar1) + DAT_001b8ca4 * (iVar9 + iVar10) + 0x4000;
    piVar6[0x10] = iVar7 + iVar16 >> 0xf;
    *piVar17 = iVar7 - iVar16 >> 0xf;
    piVar17 = piVar17 + 1;
    piVar6 = piVar6 + 1;
  } while (piVar2 != local_48);
  return;
}


