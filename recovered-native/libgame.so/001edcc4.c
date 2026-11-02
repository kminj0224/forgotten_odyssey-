/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001edcc4  Symbol: FUN_001edcc4 */

int FUN_001edcc4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_001ed6f8(param_1,param_2 - iVar2,1,0,param_4);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  return iVar1 + (param_2 - iVar2);
}


