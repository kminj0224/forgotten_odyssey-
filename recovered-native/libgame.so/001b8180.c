/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b8180  Symbol: jpeg_fdct_ifast */

void jpeg_fdct_ifast(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar6 = 0;
  piVar7 = param_1;
  do {
    piVar8 = (int *)(param_2 + iVar6);
    iVar6 = iVar6 + 4;
    pbVar3 = (byte *)(*piVar8 + param_3);
    iVar9 = (uint)pbVar3[7] + (uint)*pbVar3;
    iVar5 = (uint)*pbVar3 - (uint)pbVar3[7];
    iVar11 = (uint)pbVar3[6] + (uint)pbVar3[1];
    iVar10 = (uint)pbVar3[1] - (uint)pbVar3[6];
    iVar14 = (uint)pbVar3[5] + (uint)pbVar3[2];
    iVar12 = (uint)pbVar3[2] - (uint)pbVar3[5];
    bVar1 = pbVar3[3];
    bVar2 = pbVar3[4];
    iVar4 = (uint)bVar2 + (uint)bVar1;
    iVar15 = iVar4 + iVar9;
    iVar16 = iVar14 + iVar11;
    iVar9 = iVar9 - iVar4;
    *piVar7 = iVar15 + iVar16 + DAT_001b8334;
    piVar7[4] = iVar15 - iVar16;
    iVar4 = (iVar11 + (iVar9 - iVar14)) * 0xb5 >> 8;
    piVar7[2] = iVar9 + iVar4;
    piVar7[6] = iVar9 - iVar4;
    iVar9 = (iVar12 - (uint)bVar2) + (uint)bVar1;
    iVar14 = iVar10 + iVar5;
    iVar4 = (iVar9 - iVar14) * 0x62 >> 8;
    iVar11 = iVar4 + (iVar9 * 0x8b >> 8);
    iVar4 = iVar4 + (iVar14 * 0x14e >> 8);
    iVar9 = (iVar12 + iVar10) * 0xb5 >> 8;
    iVar10 = iVar9 + iVar5;
    iVar5 = iVar5 - iVar9;
    piVar7[3] = iVar5 - iVar11;
    piVar7[5] = iVar11 + iVar5;
    piVar7[1] = iVar4 + iVar10;
    piVar7[7] = iVar10 - iVar4;
    piVar7 = piVar7 + 8;
  } while (iVar6 != 0x20);
  piVar13 = param_1 + 8;
  piVar7 = param_1 + 0x10;
  piVar8 = param_1 + 0x28;
  do {
    iVar5 = piVar8[0x10] + *param_1;
    iVar6 = *param_1 - piVar8[0x10];
    iVar12 = piVar8[8] + param_1[8];
    iVar10 = param_1[8] - piVar8[8];
    iVar15 = *piVar8 + *piVar7;
    iVar11 = *piVar7 - *piVar8;
    iVar4 = piVar7[0x10];
    iVar14 = piVar7[8];
    iVar9 = iVar4 + iVar14;
    iVar16 = iVar9 + iVar5;
    iVar17 = iVar15 + iVar12;
    *param_1 = iVar17 + iVar16;
    iVar5 = iVar5 - iVar9;
    piVar7[0x10] = iVar16 - iVar17;
    iVar9 = (iVar12 + (iVar5 - iVar15)) * 0xb5 >> 8;
    *piVar7 = iVar5 + iVar9;
    piVar8[8] = iVar5 - iVar9;
    iVar14 = (iVar11 - iVar4) + iVar14;
    iVar9 = iVar10 + iVar6;
    iVar4 = (iVar14 - iVar9) * 0x62 >> 8;
    iVar5 = iVar4 + (iVar14 * 0x8b >> 8);
    iVar4 = iVar4 + (iVar9 * 0x14e >> 8);
    iVar9 = (iVar11 + iVar10) * 0xb5 >> 8;
    iVar10 = iVar9 + iVar6;
    iVar6 = iVar6 - iVar9;
    *piVar8 = iVar5 + iVar6;
    piVar7[8] = iVar6 - iVar5;
    param_1[8] = iVar4 + iVar10;
    piVar8[0x10] = iVar10 - iVar4;
    param_1 = param_1 + 1;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  } while (param_1 != piVar13);
  return;
}


