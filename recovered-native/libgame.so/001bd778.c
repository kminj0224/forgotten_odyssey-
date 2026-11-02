/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd778  Symbol: jpeg_fdct_6x6 */

void jpeg_fdct_6x6(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  
  memset(param_1,0,0x100);
  iVar9 = DAT_001bd8fc;
  iVar8 = DAT_001bd8f8;
  iVar4 = 0;
  piVar5 = param_1;
  do {
    piVar13 = (int *)(param_2 + iVar4);
    iVar4 = iVar4 + 4;
    pbVar1 = (byte *)(*piVar13 + param_3);
    iVar10 = (uint)*pbVar1 - (uint)pbVar1[5];
    iVar6 = (uint)pbVar1[5] + (uint)*pbVar1;
    iVar3 = (uint)pbVar1[1] - (uint)pbVar1[4];
    iVar11 = (uint)pbVar1[4] + (uint)pbVar1[1];
    iVar2 = (uint)pbVar1[2] - (uint)pbVar1[3];
    iVar7 = (uint)pbVar1[3] + (uint)pbVar1[2];
    iVar12 = iVar7 + iVar6;
    *piVar5 = (DAT_001bd900 + iVar11 + iVar12) * 4;
    piVar5[2] = (iVar6 - iVar7) * iVar8 + 0x400 >> 0xb;
    piVar5[4] = (iVar12 + iVar11 * -2) * iVar9 + 0x400 >> 0xb;
    iVar6 = DAT_001bd904 * (iVar2 + iVar10) + 0x400 >> 0xb;
    piVar5[1] = iVar6 + (iVar3 + iVar10) * 4;
    piVar5[3] = ((iVar10 - iVar3) - iVar2) * 4;
    piVar5[5] = iVar6 + (iVar2 - iVar3) * 4;
    iVar3 = DAT_001bd90c;
    iVar2 = DAT_001bd908;
    piVar5 = piVar5 + 8;
  } while (iVar4 != 0x18);
  piVar5 = param_1 + 0x18;
  piVar13 = param_1 + 6;
  do {
    iVar4 = *param_1 - piVar5[0x10];
    iVar8 = piVar5[0x10] + *param_1;
    iVar7 = param_1[8] - piVar5[8];
    iVar6 = piVar5[8] + param_1[8];
    iVar11 = *piVar5 + param_1[0x10];
    iVar9 = param_1[0x10] - *piVar5;
    iVar10 = iVar11 + iVar8;
    *param_1 = iVar3 * (iVar10 + iVar6) + 0x4000 >> 0xf;
    param_1[0x10] = (iVar8 - iVar11) * iVar2 + 0x4000 >> 0xf;
    iVar8 = DAT_001bd914;
    piVar5[8] = DAT_001bd910 * (iVar10 + iVar6 * -2) + 0x4000 >> 0xf;
    iVar8 = iVar8 * (iVar9 + iVar4);
    param_1[8] = iVar8 + iVar3 * (iVar7 + iVar4) + 0x4000 >> 0xf;
    param_1 = param_1 + 1;
    *piVar5 = iVar3 * ((iVar4 - iVar7) - iVar9) + 0x4000 >> 0xf;
    piVar5[0x10] = iVar8 + 0x4000 + iVar3 * (iVar9 - iVar7) >> 0xf;
    piVar5 = piVar5 + 1;
  } while (param_1 != piVar13);
  return;
}


