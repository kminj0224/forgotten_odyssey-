/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd3b0  Symbol: jpeg_fdct_2x2 */

void jpeg_fdct_2x2(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  memset(param_1,0,0x100);
  uVar3 = (uint)*(byte *)(*param_2 + param_3);
  uVar5 = (uint)((byte *)(*param_2 + param_3))[1];
  iVar1 = uVar5 + uVar3;
  iVar4 = uVar3 - uVar5;
  uVar5 = (uint)*(byte *)(param_2[1] + param_3);
  uVar3 = (uint)((byte *)(param_2[1] + param_3))[1];
  iVar2 = uVar3 + uVar5;
  iVar6 = uVar5 - uVar3;
  iVar7 = iVar1 + DAT_001bd3f8;
  param_1[8] = (iVar1 - iVar2) * 0x10;
  *param_1 = (iVar7 + iVar2) * 0x10;
  param_1[1] = (iVar6 + iVar4) * 0x10;
  param_1[9] = (iVar4 - iVar6) * 0x10;
  return;
}


