/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7800  Symbol: FUN_001c7800 */

int * FUN_001c7800(int *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(param_1[1] + -0xc);
  pvVar2 = *(void **)(DAT_001c7870 + 0x1c7820);
  *param_1 = DAT_001c786c + 0x1c7820;
  if ((pvVar3 != pvVar2) && (iVar1 = FUN_0021100c(param_1[1] + -4,0xffffffff), iVar1 < 1)) {
    operator_delete(pvVar3);
  }
  std::exception::~exception((exception *)param_1);
  return param_1;
}


