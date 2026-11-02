/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e44a  Symbol: FUN_0015e44a */

int FUN_0015e44a(undefined4 param_1,FILE *param_2,long param_3,int param_4)

{
  int iVar1;
  
  if ((((param_4 != 1) && (param_4 != 2)) && (param_4 != 0)) ||
     (iVar1 = fseek(param_2,param_3,param_4), iVar1 != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}


