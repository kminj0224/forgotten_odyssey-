/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c88c  Symbol: FUN_0019c88c */

void * FUN_0019c88c(void *param_1,size_t param_2)

{
  void *__dest;
  
  if (((int)param_2 < 0) || (param_1 == (void *)0x0)) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(***(code ***)(DAT_0019c8cc + 0x19c898 + DAT_0019c8d0))(param_2 + 1);
    if (__dest == (void *)0x0) {
      FUN_00179430(0,0);
    }
    else {
      memcpy(__dest,param_1,param_2);
      *(undefined *)((int)__dest + param_2) = 0;
    }
  }
  return __dest;
}


