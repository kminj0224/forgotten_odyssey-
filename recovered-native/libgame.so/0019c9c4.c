/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c9c4  Symbol: FUN_0019c9c4 */

void * FUN_0019c9c4(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  size_t __n;
  
  if ((int)param_3 < 0) {
    param_3 = 0;
    if (param_2 == (void *)0x0) goto LAB_0019c9f2;
    for (; *(char *)((int)param_2 + param_3) != '\0'; param_3 = param_3 + 1) {
    }
  }
  if ((param_3 != 0) && (param_2 != (void *)0x0)) {
    __n = 0;
    if (param_1 != (void *)0x0) {
      for (; *(char *)((int)param_1 + __n) != '\0'; __n = __n + 1) {
      }
      pvVar1 = (void *)(***(code ***)(DAT_0019ca5c + 0x19c9d0 + DAT_0019ca60))(__n + param_3 + 1);
      if (pvVar1 != (void *)0x0) {
        memcpy(pvVar1,param_1,__n);
        memcpy((void *)((int)pvVar1 + __n),param_2,param_3);
        *(undefined *)((int)pvVar1 + __n + param_3) = 0;
        return pvVar1;
      }
      FUN_00179430(0,0);
      param_2 = param_1;
      param_3 = __n;
    }
    pvVar1 = (void *)FUN_0019c88c(param_2,param_3);
    return pvVar1;
  }
LAB_0019c9f2:
  pvVar1 = (void *)FUN_0019c904(param_1);
  return pvVar1;
}


