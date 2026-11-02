/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2d90  Symbol: jpeg_idct_2x1 */

void jpeg_idct_2x1(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_001c2dcc;
  iVar3 = *param_4;
  iVar2 = *(int *)(param_1 + 0x14c) + 0x80;
  iVar5 = (int)*param_3 * **(int **)(param_2 + 0x54) + 4;
  iVar4 = (int)param_3[1] * (*(int **)(param_2 + 0x54))[1];
  *(undefined *)(iVar3 + param_5) = *(undefined *)(iVar2 + (iVar4 + iVar5 >> 3 & DAT_001c2dcc));
  ((undefined *)(iVar3 + param_5))[1] = *(undefined *)(iVar2 + (uVar1 & iVar5 - iVar4 >> 3));
  return;
}


