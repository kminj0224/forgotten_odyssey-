/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4280  Symbol: jpeg_idct_1x2 */

void jpeg_idct_1x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_001c42bc;
  iVar2 = *(int *)(param_1 + 0x14c) + 0x80;
  iVar4 = (int)*param_3 * **(int **)(param_2 + 0x54) + 4;
  iVar3 = (int)param_3[8] * (*(int **)(param_2 + 0x54))[8];
  *(undefined *)(*param_4 + param_5) = *(undefined *)(iVar2 + (iVar3 + iVar4 >> 3 & DAT_001c42bc));
  *(undefined *)(param_4[1] + param_5) = *(undefined *)(iVar2 + (uVar1 & iVar4 - iVar3 >> 3));
  return;
}


