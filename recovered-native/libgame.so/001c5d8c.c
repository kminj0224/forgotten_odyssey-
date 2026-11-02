/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5d8c  Symbol: FUN_001c5d8c */

void ** FUN_001c5d8c(void **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *param_1;
  iVar1 = FUN_0021100c(pvVar2,0xffffffff,param_3,param_4,param_4);
  if ((iVar1 == 1) && (pvVar2 != (void *)0x0)) {
    FUN_001c5bc8(pvVar2);
    operator_delete(pvVar2);
    return param_1;
  }
  return param_1;
}


