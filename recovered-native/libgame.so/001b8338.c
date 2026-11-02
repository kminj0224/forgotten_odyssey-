/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b8338  Symbol: jpeg_fdct_islow */

void jpeg_fdct_islow(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
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
  int *piVar15;
  
  iVar1 = 0;
  piVar6 = param_1;
  do {
    piVar7 = (int *)(param_2 + iVar1);
    iVar1 = iVar1 + 4;
    pbVar4 = (byte *)(*piVar7 + param_3);
    iVar11 = (uint)*pbVar4 - (uint)pbVar4[7];
    iVar12 = (uint)pbVar4[7] + (uint)*pbVar4;
    iVar10 = (uint)pbVar4[1] - (uint)pbVar4[6];
    iVar8 = (uint)pbVar4[6] + (uint)pbVar4[1];
    iVar9 = (uint)pbVar4[2] - (uint)pbVar4[5];
    iVar2 = (uint)pbVar4[5] + (uint)pbVar4[2];
    iVar5 = (uint)pbVar4[3] - (uint)pbVar4[4];
    iVar13 = (uint)pbVar4[3] + (uint)pbVar4[4];
    iVar3 = iVar12 - iVar13;
    iVar14 = iVar8 - iVar2;
    iVar13 = iVar13 + iVar12;
    iVar2 = iVar2 + iVar8;
    iVar8 = iVar13 + iVar2 + DAT_001b85b0;
    piVar6[4] = (iVar13 - iVar2) * 4;
    *piVar6 = iVar8 * 4;
    iVar2 = DAT_001b85b4 * (iVar14 + iVar3) + 0x400;
    piVar6[2] = DAT_001b85b8 * iVar3 + iVar2 >> 0xb;
    piVar6[6] = DAT_001b85bc * iVar14 + iVar2 >> 0xb;
    iVar3 = DAT_001b85c0 * (iVar5 + iVar11);
    iVar8 = DAT_001b85c4 * (iVar9 + iVar10);
    iVar2 = DAT_001b85c8 * (iVar5 + iVar10 + iVar9 + iVar11) + 0x400;
    iVar12 = DAT_001b85cc * (iVar9 + iVar11) + iVar2;
    iVar2 = iVar2 + DAT_001b85d0 * (iVar5 + iVar10);
    piVar6[1] = iVar3 + iVar11 * DAT_001b85d4 + iVar12 >> 0xb;
    piVar6[3] = DAT_001b85d8 * iVar10 + iVar8 + iVar2 >> 0xb;
    piVar6[5] = DAT_001b85dc * iVar9 + iVar8 + iVar12 >> 0xb;
    piVar6[7] = iVar3 + DAT_001b85e0 * iVar5 + iVar2 >> 0xb;
    piVar6 = piVar6 + 8;
  } while (iVar1 != 0x20);
  piVar6 = param_1 + 0x10;
  piVar7 = param_1 + 0x28;
  piVar15 = param_1 + 8;
  do {
    iVar9 = *param_1 - piVar7[0x10];
    iVar2 = piVar7[0x10] + *param_1;
    iVar8 = param_1[8] - piVar7[8];
    iVar3 = piVar7[8] + param_1[8];
    iVar5 = *piVar6 - *piVar7;
    iVar10 = *piVar7 + *piVar6;
    iVar11 = piVar6[8] - piVar6[0x10];
    iVar1 = piVar6[8] + piVar6[0x10];
    iVar12 = iVar2 - iVar1;
    iVar13 = iVar10 + iVar3;
    iVar2 = iVar1 + iVar2 + 2;
    iVar3 = iVar3 - iVar10;
    *param_1 = iVar13 + iVar2 >> 2;
    iVar1 = DAT_001b85b4;
    piVar6[0x10] = iVar2 - iVar13 >> 2;
    iVar1 = iVar1 * (iVar3 + iVar12) + 0x4000;
    *piVar6 = DAT_001b85b8 * iVar12 + iVar1 >> 0xf;
    piVar7[8] = iVar1 + DAT_001b85bc * iVar3 >> 0xf;
    iVar1 = DAT_001b85c0 * (iVar11 + iVar9);
    iVar3 = DAT_001b85c4 * (iVar5 + iVar8);
    iVar2 = DAT_001b85c8 * (iVar11 + iVar8 + iVar5 + iVar9) + 0x4000;
    iVar10 = DAT_001b85cc * (iVar5 + iVar9) + iVar2;
    iVar2 = iVar2 + DAT_001b85d0 * (iVar11 + iVar8);
    param_1[8] = iVar9 * DAT_001b85d4 + iVar1 + iVar10 >> 0xf;
    param_1 = param_1 + 1;
    piVar6[8] = DAT_001b85d8 * iVar8 + iVar3 + iVar2 >> 0xf;
    piVar6 = piVar6 + 1;
    *piVar7 = DAT_001b85dc * iVar5 + iVar3 + iVar10 >> 0xf;
    piVar7[0x10] = DAT_001b85e0 * iVar11 + iVar1 + iVar2 >> 0xf;
    piVar7 = piVar7 + 1;
  } while (param_1 != piVar15);
  return;
}


