/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bc694  Symbol: jpeg_fdct_4x2 */

void jpeg_fdct_4x2(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = DAT_001bc744;
  memset(param_1,0,0x100);
  iVar3 = DAT_001bc74c;
  iVar2 = DAT_001bc748;
  iVar9 = 0;
  piVar11 = param_1;
  do {
    iVar4 = DAT_001bc750;
    piVar1 = (int *)(param_2 + iVar9);
    iVar9 = iVar9 + 4;
    pbVar6 = (byte *)(*piVar1 + param_3);
    iVar5 = (uint)pbVar6[3] + (uint)*pbVar6;
    iVar12 = (uint)*pbVar6 - (uint)pbVar6[3];
    iVar7 = (uint)pbVar6[2] + (uint)pbVar6[1];
    iVar13 = (uint)pbVar6[1] - (uint)pbVar6[2];
    piVar11[2] = (iVar5 - iVar7) * 0x20;
    iVar8 = (iVar13 + iVar12) * iVar2 + 0x80;
    *piVar11 = (iVar5 + iVar7 + iVar4) * 0x20;
    piVar11[1] = iVar8 + iVar12 * iVar3 >> 8;
    piVar11[3] = iVar8 + iVar13 * iVar10 >> 8;
    piVar11 = piVar11 + 8;
  } while (iVar9 != 8);
  piVar11 = param_1 + 4;
  do {
    iVar10 = *param_1;
    *param_1 = iVar10 + 2 + param_1[8] >> 2;
    param_1[8] = (iVar10 + 2) - param_1[8] >> 2;
    param_1 = param_1 + 1;
  } while (param_1 != piVar11);
  return;
}


