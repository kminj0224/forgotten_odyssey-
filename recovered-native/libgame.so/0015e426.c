/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e426  Symbol: FUN_0015e426 */

int FUN_0015e426(undefined4 param_1,FILE *param_2,long param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if ((((param_5 != 1) && (param_5 != 2)) && (param_5 != 0)) ||
     (iVar1 = fseek(param_2,param_3,param_5), iVar1 != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}


