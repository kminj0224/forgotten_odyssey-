/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ec964  Symbol: FUN_001ec964 */

int * FUN_001ec964(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar3 = DAT_001ec9b4 + 0x1ec988;
  param_1[5] = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x14);
  param_1[4] = iVar1;
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar6;
  param_1[3] = iVar5;
  param_1[6] = iVar2;
  FUN_001c56b4(param_1 + 7,param_2 + 0x1c,iVar2,iVar3,param_4);
  return param_1;
}


