/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd3fc  Symbol: jpeg_fdct_3x3 */

void jpeg_fdct_3x3(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  memset(param_1,0,0x100);
  iVar9 = DAT_001bd4cc;
  iVar8 = DAT_001bd4c8;
  iVar10 = 0;
  piVar11 = param_1;
  do {
    piVar1 = (int *)(param_2 + iVar10);
    iVar10 = iVar10 + 4;
    pbVar7 = (byte *)(*piVar1 + param_3);
    bVar2 = *pbVar7;
    bVar3 = pbVar7[2];
    bVar4 = pbVar7[1];
    iVar12 = (uint)bVar3 + (uint)bVar2;
    *piVar11 = ((uint)bVar4 + DAT_001bd4d0 + iVar12) * 0x10;
    piVar11[2] = (int)((iVar12 + (uint)bVar4 * -2) * iVar8 + 0x100) >> 9;
    piVar11[1] = (int)(((uint)bVar2 - (uint)bVar3) * iVar9 + 0x100) >> 9;
    iVar6 = DAT_001bd4dc;
    iVar5 = DAT_001bd4d8;
    iVar12 = DAT_001bd4d4;
    piVar11 = piVar11 + 8;
  } while (iVar10 != 0xc);
  piVar11 = param_1 + 3;
  do {
    iVar9 = *param_1;
    iVar10 = param_1[0x10];
    iVar8 = iVar10 + iVar9;
    *param_1 = (iVar8 + param_1[8]) * iVar12 + 0x4000 >> 0xf;
    param_1[0x10] = (iVar8 + param_1[8] * -2) * iVar5 + 0x4000 >> 0xf;
    param_1[8] = (iVar9 - iVar10) * iVar6 + 0x4000 >> 0xf;
    param_1 = param_1 + 1;
  } while (param_1 != piVar11);
  return;
}


