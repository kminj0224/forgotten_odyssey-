/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bb8d0  Symbol: jpeg_fdct_3x6 */

void jpeg_fdct_3x6(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
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
  
  memset(param_1,0,0x100);
  iVar10 = DAT_001bba0c;
  iVar9 = DAT_001bba08;
  iVar6 = 0;
  piVar7 = param_1;
  do {
    piVar8 = (int *)(param_2 + iVar6);
    iVar6 = iVar6 + 4;
    pbVar5 = (byte *)(*piVar8 + param_3);
    bVar1 = pbVar5[1];
    bVar2 = *pbVar5;
    bVar3 = pbVar5[2];
    iVar11 = (uint)bVar3 + (uint)bVar2;
    *piVar7 = (DAT_001bba10 + (uint)bVar1 + iVar11) * 8;
    piVar7[2] = (int)((iVar11 + (uint)bVar1 * -2) * iVar9 + 0x200) >> 10;
    piVar7[1] = (int)(((uint)bVar2 - (uint)bVar3) * iVar10 + 0x200) >> 10;
    iVar4 = DAT_001bba18;
    iVar11 = DAT_001bba14;
    piVar7 = piVar7 + 8;
  } while (iVar6 != 0x18);
  piVar7 = param_1 + 3;
  piVar8 = param_1 + 0x18;
  do {
    iVar6 = *param_1 - piVar8[0x10];
    iVar9 = piVar8[0x10] + *param_1;
    iVar13 = param_1[8] - piVar8[8];
    iVar12 = piVar8[8] + param_1[8];
    iVar15 = *piVar8 + param_1[0x10];
    iVar10 = param_1[0x10] - *piVar8;
    iVar14 = iVar15 + iVar9;
    *param_1 = iVar4 * (iVar14 + iVar12) + 0x4000 >> 0xf;
    param_1[0x10] = (iVar9 - iVar15) * iVar11 + 0x4000 >> 0xf;
    iVar9 = DAT_001bba20;
    piVar8[8] = DAT_001bba1c * (iVar14 + iVar12 * -2) + 0x4000 >> 0xf;
    iVar9 = iVar9 * (iVar10 + iVar6);
    param_1[8] = iVar9 + iVar4 * (iVar13 + iVar6) + 0x4000 >> 0xf;
    param_1 = param_1 + 1;
    *piVar8 = iVar4 * ((iVar6 - iVar13) - iVar10) + 0x4000 >> 0xf;
    piVar8[0x10] = iVar9 + 0x4000 + iVar4 * (iVar10 - iVar13) >> 0xf;
    piVar8 = piVar8 + 1;
  } while (param_1 != piVar7);
  return;
}


