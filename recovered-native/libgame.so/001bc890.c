/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bc890  Symbol: jpeg_fdct_8x4 */

void jpeg_fdct_8x4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  memset(param_1 + 0x20,0,0x80);
  iVar5 = 0;
  piVar6 = param_1;
  do {
    piVar7 = (int *)(param_2 + iVar5);
    iVar5 = iVar5 + 4;
    pbVar2 = (byte *)(*piVar7 + param_3);
    iVar14 = (uint)*pbVar2 - (uint)pbVar2[7];
    iVar11 = (uint)pbVar2[7] + (uint)*pbVar2;
    iVar13 = (uint)pbVar2[1] - (uint)pbVar2[6];
    iVar8 = (uint)pbVar2[6] + (uint)pbVar2[1];
    iVar1 = (uint)pbVar2[2] - (uint)pbVar2[5];
    iVar9 = (uint)pbVar2[5] + (uint)pbVar2[2];
    iVar3 = (uint)pbVar2[3] - (uint)pbVar2[4];
    iVar12 = (uint)pbVar2[3] + (uint)pbVar2[4];
    iVar10 = iVar11 - iVar12;
    iVar4 = iVar8 - iVar9;
    iVar12 = iVar12 + iVar11;
    iVar9 = iVar9 + iVar8;
    iVar8 = iVar12 + iVar9 + DAT_001bca50;
    piVar6[4] = (iVar12 - iVar9) * 8;
    *piVar6 = iVar8 * 8;
    iVar8 = DAT_001bca5c;
    iVar11 = DAT_001bca54 * (iVar4 + iVar10) + 0x200;
    piVar6[2] = DAT_001bca58 * iVar10 + iVar11 >> 10;
    iVar9 = DAT_001bca60;
    piVar6[6] = iVar8 * iVar4 + iVar11 >> 10;
    iVar9 = iVar9 * (iVar3 + iVar14);
    iVar4 = DAT_001bca64 * (iVar1 + iVar13);
    iVar8 = DAT_001bca68 * (iVar3 + iVar13 + iVar1 + iVar14) + 0x200;
    iVar10 = DAT_001bca6c * (iVar1 + iVar14) + iVar8;
    iVar8 = iVar8 + DAT_001bca70 * (iVar3 + iVar13);
    piVar6[1] = iVar9 + iVar14 * DAT_001bca74 + iVar10 >> 10;
    piVar6[3] = DAT_001bca78 * iVar13 + iVar4 + iVar8 >> 10;
    piVar6[5] = DAT_001bca7c * iVar1 + iVar4 + iVar10 >> 10;
    piVar6[7] = iVar9 + DAT_001bca80 * iVar3 + iVar8 >> 10;
    iVar1 = DAT_001bca5c;
    iVar9 = DAT_001bca58;
    iVar8 = DAT_001bca54;
    piVar6 = piVar6 + 8;
  } while (iVar5 != 0x10);
  piVar6 = param_1 + 8;
  piVar7 = param_1 + 0x18;
  do {
    iVar10 = *param_1 + *piVar7 + 2;
    iVar5 = *param_1 - *piVar7;
    iVar4 = param_1[0x10] + param_1[8];
    iVar3 = param_1[8] - param_1[0x10];
    *param_1 = iVar10 + iVar4 >> 2;
    param_1[0x10] = iVar10 - iVar4 >> 2;
    iVar4 = (iVar3 + iVar5) * iVar8 + 0x4000;
    param_1[8] = iVar4 + iVar5 * iVar9 >> 0xf;
    param_1 = param_1 + 1;
    *piVar7 = iVar4 + iVar3 * iVar1 >> 0xf;
    piVar7 = piVar7 + 1;
  } while (param_1 != piVar6);
  return;
}


