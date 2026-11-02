/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bc754  Symbol: jpeg_fdct_6x3 */

void jpeg_fdct_6x3(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = DAT_001bc874;
  memset(param_1,0,0x100);
  iVar6 = DAT_001bc878;
  iVar7 = 0;
  piVar8 = param_1;
  do {
    piVar1 = (int *)(param_2 + iVar7);
    iVar7 = iVar7 + 4;
    pbVar2 = (byte *)(*piVar1 + param_3);
    iVar11 = (uint)*pbVar2 - (uint)pbVar2[5];
    iVar9 = (uint)pbVar2[5] + (uint)*pbVar2;
    iVar5 = (uint)pbVar2[1] - (uint)pbVar2[4];
    iVar12 = (uint)pbVar2[4] + (uint)pbVar2[1];
    iVar3 = (uint)pbVar2[2] - (uint)pbVar2[3];
    iVar10 = (uint)pbVar2[3] + (uint)pbVar2[2];
    iVar13 = iVar10 + iVar9;
    *piVar8 = (DAT_001bc87c + iVar12 + iVar13) * 8;
    piVar8[2] = (iVar9 - iVar10) * iVar6 + 0x200 >> 10;
    piVar8[4] = (iVar13 + iVar12 * -2) * iVar4 + 0x200 >> 10;
    iVar9 = DAT_001bc880 * (iVar3 + iVar11) + 0x200 >> 10;
    piVar8[1] = iVar9 + (iVar5 + iVar11) * 8;
    piVar8[3] = ((iVar11 - iVar5) - iVar3) * 8;
    piVar8[5] = iVar9 + (iVar3 - iVar5) * 8;
    iVar9 = DAT_001bc88c;
    iVar5 = DAT_001bc888;
    iVar3 = DAT_001bc884;
    piVar8 = piVar8 + 8;
  } while (iVar7 != 0xc);
  piVar8 = param_1 + 6;
  do {
    iVar4 = *param_1;
    iVar6 = param_1[0x10];
    iVar7 = iVar6 + iVar4;
    *param_1 = (iVar7 + param_1[8]) * iVar3 + 0x4000 >> 0xf;
    param_1[0x10] = (iVar7 + param_1[8] * -2) * iVar5 + 0x4000 >> 0xf;
    param_1[8] = (iVar4 - iVar6) * iVar9 + 0x4000 >> 0xf;
    param_1 = param_1 + 1;
  } while (param_1 != piVar8);
  return;
}


