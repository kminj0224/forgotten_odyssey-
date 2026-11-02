/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bf2d8  Symbol: jpeg_idct_2x2 */

void jpeg_idct_2x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = DAT_001bf358;
  piVar3 = *(int **)(param_2 + 0x54);
  iVar2 = *(int *)(param_1 + 0x14c) + 0x80;
  iVar5 = *piVar3 * (int)*param_3 + 4;
  iVar6 = iVar5 + piVar3[8] * (int)param_3[8];
  iVar5 = iVar5 - piVar3[8] * (int)param_3[8];
  iVar8 = piVar3[9] * (int)param_3[9] + piVar3[1] * (int)param_3[1];
  iVar4 = piVar3[1] * (int)param_3[1] - piVar3[9] * (int)param_3[9];
  iVar7 = *param_4;
  *(undefined *)(iVar7 + param_5) = *(undefined *)(iVar2 + (iVar8 + iVar6 >> 3 & DAT_001bf358));
  ((undefined *)(iVar7 + param_5))[1] = *(undefined *)(iVar2 + (iVar6 - iVar8 >> 3 & uVar1));
  iVar6 = param_4[1];
  *(undefined *)(iVar6 + param_5) = *(undefined *)(iVar2 + (iVar4 + iVar5 >> 3 & uVar1));
  ((undefined *)(iVar6 + param_5))[1] = *(undefined *)(iVar2 + (uVar1 & iVar5 - iVar4 >> 3));
  return;
}


