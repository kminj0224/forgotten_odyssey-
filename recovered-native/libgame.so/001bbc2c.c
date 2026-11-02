/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bbc2c  Symbol: jpeg_fdct_5x10 */

void jpeg_fdct_5x10(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int local_68 [5];
  int aiStack_54 [12];
  
  iVar12 = DAT_001bbed4;
  memset(param_1,0,0x100);
  iVar11 = DAT_001bbee0;
  iVar10 = DAT_001bbedc;
  iVar15 = DAT_001bbed8;
  piVar2 = local_68;
  iVar3 = 0;
  piVar4 = param_1;
  while( true ) {
    do {
      piVar8 = piVar4;
      iVar5 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      pbVar6 = (byte *)(*(int *)(iVar5 + param_2) + param_3);
      bVar1 = pbVar6[2];
      iVar9 = (uint)*pbVar6 - (uint)pbVar6[4];
      iVar14 = (uint)pbVar6[4] + (uint)*pbVar6;
      iVar5 = (uint)pbVar6[1] - (uint)pbVar6[3];
      iVar13 = (uint)pbVar6[1] + (uint)pbVar6[3];
      iVar7 = iVar13 + iVar14;
      *piVar8 = (DAT_001bbee4 + (uint)bVar1 + iVar7) * 4;
      iVar13 = (iVar14 - iVar13) * iVar10;
      iVar7 = iVar7 + (uint)bVar1 * -4;
      piVar8[2] = iVar13 + iVar7 * 0xb50 + 0x400 >> 0xb;
      piVar8[4] = iVar13 + 0x400 + iVar7 * -0xb50 >> 0xb;
      iVar7 = (iVar5 + iVar9) * iVar12;
      piVar8[1] = iVar9 * iVar15 + 0x400 + iVar7 >> 0xb;
      piVar8[3] = iVar5 * iVar11 + 0x400 + iVar7 >> 0xb;
      piVar4 = piVar2;
    } while (iVar3 == 8);
    if (iVar3 == 10) break;
    piVar4 = piVar8 + 8;
  }
  piVar4 = param_1 + 8;
  piVar16 = param_1 + 0x38;
  piVar8 = param_1 + 0x20;
  do {
    iVar10 = *param_1 - piVar2[8];
    iVar15 = piVar2[8] + *param_1;
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar9 = *piVar4 - iVar5;
    iVar5 = iVar5 + *piVar4;
    iVar3 = param_1[0x10] - *piVar16;
    iVar17 = *piVar16 + param_1[0x10];
    iVar7 = piVar4[0x10] - piVar8[0x10];
    iVar14 = piVar8[0x10] + piVar4[0x10];
    iVar11 = *piVar8 - piVar8[8];
    iVar13 = piVar8[8] + *piVar8;
    iVar12 = iVar15 - iVar13;
    iVar13 = iVar13 + iVar15;
    iVar15 = iVar5 - iVar14;
    iVar14 = iVar14 + iVar5;
    *param_1 = DAT_001bbee8 * (iVar17 + iVar13 + iVar14) + 0x4000 >> 0xf;
    *piVar8 = DAT_001bbef0 * (iVar17 * 2 - iVar14) + DAT_001bbeec * (iVar13 + iVar17 * -2) + 0x4000
              >> 0xf;
    iVar5 = DAT_001bbef4 * (iVar15 + iVar12);
    param_1[0x10] = DAT_001bbef8 * iVar12 + 0x4000 + iVar5 >> 0xf;
    param_1 = param_1 + 1;
    piVar8[0x10] = iVar5 + iVar15 * DAT_001bbefc + 0x4000 >> 0xf;
    iVar12 = DAT_001bbee8;
    iVar5 = iVar9 - iVar7;
    piVar8[8] = DAT_001bbee8 * (((iVar11 + iVar10) - iVar5) - iVar3) + 0x4000 >> 0xf;
    iVar15 = DAT_001bbf0c;
    piVar8 = piVar8 + 1;
    iVar3 = iVar3 * iVar12;
    *piVar4 = iVar11 * 0x910 + iVar3 + 0x4000 + iVar10 * DAT_001bbf00 + iVar9 * DAT_001bbf04 +
              iVar7 * DAT_001bbf08 >> 0xf;
    iVar15 = (iVar5 + iVar11 + iVar10) * DAT_001bbf10 + (iVar5 * iVar15 - iVar3);
    iVar12 = DAT_001bbf18 * (iVar10 - iVar11) + DAT_001bbf14 * (iVar7 + iVar9) + 0x4000;
    piVar4[0x10] = iVar12 + iVar15 >> 0xf;
    *piVar16 = iVar12 - iVar15 >> 0xf;
    piVar16 = piVar16 + 1;
    piVar4 = piVar4 + 1;
  } while (piVar2 != aiStack_54);
  return;
}


