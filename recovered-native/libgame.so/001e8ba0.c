/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e8ba0  Symbol: FUN_001e8ba0 */

int * FUN_001e8ba0(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_001e87b8(param_1,param_2,sVar1);
    return param_1;
  }
  iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d0d2c(iVar2,*(uint *)(iVar2 + 0x14) | 1,param_3,*param_1,param_4);
  return param_1;
}


