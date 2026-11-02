/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bba24  Symbol: jpeg_fdct_4x8 */

void jpeg_fdct_4x8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar2 = DAT_001bbbf8;
  memset(param_1,0,0x100);
  iVar11 = DAT_001bbc00;
  iVar13 = DAT_001bbbfc;
  iVar6 = 0;
  piVar8 = param_1;
  do {
    iVar5 = DAT_001bbc04;
    piVar7 = (int *)(param_2 + iVar6);
    iVar6 = iVar6 + 4;
    pbVar3 = (byte *)(*piVar7 + param_3);
    iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
    iVar10 = (uint)*pbVar3 - (uint)pbVar3[3];
    iVar4 = (uint)pbVar3[2] + (uint)pbVar3[1];
    iVar12 = (uint)pbVar3[1] - (uint)pbVar3[2];
    piVar8[2] = (iVar1 - iVar4) * 8;
    *piVar8 = (iVar1 + iVar4 + iVar5) * 8;
    iVar5 = (iVar12 + iVar10) * iVar13 + 0x200;
    piVar8[1] = iVar5 + iVar10 * iVar11 >> 10;
    piVar8[3] = iVar5 + iVar12 * iVar2 >> 10;
    iVar5 = DAT_001bbbfc;
    piVar8 = piVar8 + 8;
  } while (iVar6 != 0x20);
  piVar8 = param_1 + 4;
  piVar7 = param_1 + 0x10;
  piVar9 = param_1 + 0x28;
  do {
    iVar10 = *param_1 - piVar9[0x10];
    iVar11 = piVar9[0x10] + *param_1;
    iVar4 = param_1[8] - piVar9[8];
    iVar13 = piVar9[8] + param_1[8];
    iVar6 = *piVar7 - *piVar9;
    iVar2 = *piVar9 + *piVar7;
    iVar14 = piVar7[0x10] + piVar7[8];
    iVar1 = piVar7[8] - piVar7[0x10];
    iVar12 = iVar11 - iVar14;
    iVar14 = iVar11 + iVar14 + 2;
    iVar11 = iVar2 + iVar13;
    iVar13 = iVar13 - iVar2;
    *param_1 = iVar14 + iVar11 >> 2;
    piVar7[0x10] = iVar14 - iVar11 >> 2;
    iVar2 = (iVar13 + iVar12) * iVar5 + 0x4000;
    *piVar7 = DAT_001bbc00 * iVar12 + iVar2 >> 0xf;
    piVar9[8] = DAT_001bbbf8 * iVar13 + iVar2 >> 0xf;
    iVar2 = DAT_001bbc08 * (iVar1 + iVar10);
    iVar13 = DAT_001bbc0c * (iVar6 + iVar4);
    iVar11 = DAT_001bbc10 * (iVar1 + iVar4 + iVar6 + iVar10) + 0x4000;
    iVar12 = DAT_001bbc14 * (iVar6 + iVar10) + iVar11;
    iVar11 = iVar11 + DAT_001bbc18 * (iVar1 + iVar4);
    param_1[8] = iVar10 * DAT_001bbc1c + iVar2 + iVar12 >> 0xf;
    param_1 = param_1 + 1;
    piVar7[8] = DAT_001bbc20 * iVar4 + iVar13 + iVar11 >> 0xf;
    piVar7 = piVar7 + 1;
    *piVar9 = DAT_001bbc24 * iVar6 + iVar13 + iVar12 >> 0xf;
    piVar9[0x10] = DAT_001bbc28 * iVar1 + iVar2 + iVar11 >> 0xf;
    piVar9 = piVar9 + 1;
  } while (param_1 != piVar8);
  return;
}


