/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd4e0  Symbol: jpeg_fdct_4x4 */

void jpeg_fdct_4x4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar3 = DAT_001bd5dc;
  memset(param_1,0,0x100);
  iVar12 = DAT_001bd5e4;
  iVar7 = DAT_001bd5e0;
  iVar8 = 0;
  piVar9 = param_1;
  do {
    iVar1 = DAT_001bd5e8;
    piVar10 = (int *)(param_2 + iVar8);
    iVar8 = iVar8 + 4;
    pbVar4 = (byte *)(*piVar10 + param_3);
    iVar2 = (uint)pbVar4[3] + (uint)*pbVar4;
    iVar11 = (uint)*pbVar4 - (uint)pbVar4[3];
    iVar5 = (uint)pbVar4[2] + (uint)pbVar4[1];
    iVar13 = (uint)pbVar4[1] - (uint)pbVar4[2];
    piVar9[2] = (iVar2 - iVar5) * 0x10;
    iVar6 = (iVar13 + iVar11) * iVar7 + 0x100;
    *piVar9 = (iVar2 + iVar5 + iVar1) * 0x10;
    piVar9[1] = iVar6 + iVar11 * iVar12 >> 9;
    piVar9[3] = iVar6 + iVar13 * iVar3 >> 9;
    iVar5 = DAT_001bd5e4;
    iVar2 = DAT_001bd5e0;
    iVar1 = DAT_001bd5dc;
    piVar9 = piVar9 + 8;
  } while (iVar8 != 0x10);
  piVar9 = param_1 + 4;
  piVar10 = param_1 + 0x18;
  do {
    iVar8 = *param_1 + *piVar10 + 2;
    iVar3 = *param_1 - *piVar10;
    iVar12 = param_1[0x10] + param_1[8];
    iVar7 = param_1[8] - param_1[0x10];
    *param_1 = iVar8 + iVar12 >> 2;
    param_1[0x10] = iVar8 - iVar12 >> 2;
    iVar12 = (iVar7 + iVar3) * iVar2 + 0x4000;
    param_1[8] = iVar12 + iVar3 * iVar5 >> 0xf;
    param_1 = param_1 + 1;
    *piVar10 = iVar12 + iVar7 * iVar1 >> 0xf;
    piVar10 = piVar10 + 1;
  } while (param_1 != piVar9);
  return;
}


