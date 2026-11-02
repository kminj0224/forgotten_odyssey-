/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4744  Symbol: FUN_001a4744 */

size_t FUN_001a4744(void *param_1,size_t *param_2,void *param_3,size_t *param_4)

{
  size_t __n;
  
  if ((((param_3 != (void *)0x0) && (param_1 != (void *)0x0)) && (param_4 != (size_t *)0x0)) &&
     (param_2 != (size_t *)0x0)) {
    __n = *param_4;
    if ((int)*param_2 < (int)*param_4) {
      __n = *param_2;
    }
    if (-1 < (int)__n) {
      memcpy(param_1,param_3,__n);
      *param_2 = __n;
      *param_4 = __n;
      return *param_2;
    }
  }
  return 0xffffffff;
}


