/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc534  Symbol: FUN_001dc534 */

void FUN_001dc534(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5,int param_6,int param_7,int *param_8)

{
  void *__dest;
  int iVar1;
  
  if (param_5 == (void *)0x0) {
    iVar1 = FUN_001dc398(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8);
    iVar1 = iVar1 - param_6;
  }
  else {
    __dest = (void *)FUN_001dc398(param_6,param_4,param_2,param_3,param_7,param_5);
    memcpy(__dest,param_5,*param_8 - ((int)param_5 - param_7));
    iVar1 = (int)__dest + ((*param_8 - ((int)param_5 - param_7)) - param_6);
  }
  *param_8 = iVar1;
  return;
}


