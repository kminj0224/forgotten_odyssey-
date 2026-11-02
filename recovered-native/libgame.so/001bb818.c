/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bb818  Symbol: jpeg_fdct_2x4 */

void jpeg_fdct_2x4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  memset(param_1,0,0x100);
  iVar9 = 0;
  piVar8 = param_1;
  do {
    piVar10 = (int *)(param_2 + iVar9);
    iVar9 = iVar9 + 4;
    pbVar5 = (byte *)(*piVar10 + param_3);
    uVar4 = (uint)*pbVar5;
    uVar6 = (uint)pbVar5[1];
    *piVar8 = ((uVar4 - 0x100) + uVar6) * 8;
    piVar8[1] = (uVar4 - uVar6) * 8;
    iVar3 = DAT_001bb8cc;
    iVar2 = DAT_001bb8c8;
    iVar1 = DAT_001bb8c4;
    piVar8 = piVar8 + 8;
  } while (iVar9 != 0x10);
  piVar8 = param_1 + 2;
  piVar10 = param_1 + 0x18;
  do {
    iVar12 = *piVar10 + *param_1;
    iVar9 = *param_1 - *piVar10;
    iVar11 = param_1[0x10] + param_1[8];
    iVar7 = param_1[8] - param_1[0x10];
    *param_1 = iVar11 + iVar12;
    param_1[0x10] = iVar12 - iVar11;
    iVar11 = (iVar7 + iVar9) * iVar1 + 0x1000;
    param_1[8] = iVar11 + iVar9 * iVar2 >> 0xd;
    param_1 = param_1 + 1;
    *piVar10 = iVar11 + iVar7 * iVar3 >> 0xd;
    piVar10 = piVar10 + 1;
  } while (param_1 != piVar8);
  return;
}


