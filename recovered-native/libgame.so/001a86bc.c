/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a86bc  Symbol: FUN_001a86bc */

void FUN_001a86bc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < param_4) {
    iVar1 = param_3;
    do {
      iVar2 = iVar1 + 1;
      jcopy_sample_rows(param_1,param_3 + -1,param_1,iVar1,1,param_2);
      iVar1 = iVar2;
    } while (iVar2 < param_4);
  }
  return;
}


