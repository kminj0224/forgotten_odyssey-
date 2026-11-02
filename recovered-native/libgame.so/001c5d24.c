/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5d24  Symbol: FUN_001c5d24 */

void ** FUN_001c5d24(void **param_1,void **param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_0021100c(*param_2,1);
  pvVar2 = *param_1;
  iVar1 = FUN_0021100c(pvVar2,0xffffffff);
  if ((iVar1 == 1) && (pvVar2 != (void *)0x0)) {
    FUN_001c5bc8(pvVar2);
    operator_delete(pvVar2);
    *param_1 = *param_2;
    return param_1;
  }
  *param_1 = *param_2;
  return param_1;
}


