/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd5ec  Symbol: jpeg_fdct_5x5 */

void jpeg_fdct_5x5(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar5 = DAT_001bd74c;
  memset(param_1,0,0x100);
  iVar11 = DAT_001bd754;
  iVar3 = DAT_001bd750;
  iVar4 = 0;
  piVar9 = param_1;
  do {
    piVar8 = (int *)(param_2 + iVar4);
    iVar4 = iVar4 + 4;
    pbVar6 = (byte *)(*piVar8 + param_3);
    iVar10 = (uint)*pbVar6 - (uint)pbVar6[4];
    iVar14 = (uint)pbVar6[4] + (uint)*pbVar6;
    bVar1 = pbVar6[2];
    iVar2 = (uint)pbVar6[1] - (uint)pbVar6[3];
    iVar12 = (uint)pbVar6[1] + (uint)pbVar6[3];
    iVar7 = iVar12 + iVar14;
    *piVar9 = (DAT_001bd758 + (uint)bVar1 + iVar7) * 8;
    iVar12 = (iVar14 - iVar12) * iVar11;
    iVar7 = iVar7 + (uint)bVar1 * -4;
    piVar9[2] = iVar12 + iVar7 * 0xb50 + 0x200 >> 10;
    piVar9[4] = iVar12 + 0x200 + iVar7 * -0xb50 >> 10;
    iVar7 = (iVar2 + iVar10) * iVar5;
    iVar2 = DAT_001bd75c * iVar2;
    piVar9[1] = iVar10 * iVar3 + 0x200 + iVar7 >> 10;
    piVar9[3] = iVar2 + 0x200 + iVar7 >> 10;
    iVar12 = DAT_001bd76c;
    iVar10 = DAT_001bd768;
    iVar7 = DAT_001bd764;
    iVar2 = DAT_001bd760;
    piVar9 = piVar9 + 8;
  } while (iVar4 != 0x14);
  piVar9 = param_1 + 5;
  piVar8 = param_1 + 0x18;
  do {
    iVar4 = *param_1 - piVar8[8];
    iVar11 = piVar8[8] + *param_1;
    iVar3 = param_1[8] - *piVar8;
    iVar5 = *piVar8 + param_1[8];
    iVar13 = iVar5 + iVar11;
    iVar14 = (iVar11 - iVar5) * iVar7;
    *param_1 = (param_1[0x10] + iVar13) * iVar2 + 0x4000 >> 0xf;
    iVar11 = (iVar13 + param_1[0x10] * -4) * iVar10;
    param_1[0x10] = iVar14 + iVar11 + 0x4000 >> 0xf;
    iVar5 = DAT_001bd770;
    piVar8[8] = (iVar14 + 0x4000) - iVar11 >> 0xf;
    iVar11 = (iVar3 + iVar4) * iVar12;
    iVar3 = DAT_001bd774 * iVar3;
    param_1[8] = iVar5 * iVar4 + 0x4000 + iVar11 >> 0xf;
    *piVar8 = iVar3 + 0x4000 + iVar11 >> 0xf;
    piVar8 = piVar8 + 1;
    param_1 = param_1 + 1;
  } while (param_1 != piVar9);
  return;
}


