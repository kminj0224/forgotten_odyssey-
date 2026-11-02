/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a7b0  Symbol: FUN_0018a7b0 */

void * FUN_0018a7b0(void **param_1,void *param_2)

{
  void *__dest;
  void *__src;
  void *__n;
  void *pvVar1;
  
  if (param_1 != (void **)0x0) {
    if (param_2 == (void *)0x0) {
      return (void *)0x0;
    }
    if (param_2 <= param_1[1]) {
      __n = (void *)((int)param_1[1] - (int)param_2);
      param_1[1] = __n;
      if ((param_1[3] != (void *)0x2) &&
         ((param_1[3] != (void *)0x3 || (param_1[4] == (void *)0x0)))) {
        memmove(*param_1,(void *)((int)*param_1 + (int)param_2),(size_t)__n);
        *(undefined *)((int)*param_1 + (int)param_1[1]) = 0;
        return param_2;
      }
      pvVar1 = param_1[2];
      __src = (void *)((int)*param_1 + (int)param_2);
      *param_1 = __src;
      param_1[2] = (void *)((int)pvVar1 - (int)param_2);
      if (param_1[3] != (void *)0x3) {
        return param_2;
      }
      __dest = param_1[4];
      if (__dest == (void *)0x0) {
        return param_2;
      }
      if ((void *)((int)__src - (int)__dest) < (void *)((int)pvVar1 - (int)param_2)) {
        return param_2;
      }
      memmove(__dest,__src,(size_t)__n);
      *param_1 = param_1[4];
      *(undefined *)((int)param_1[4] + (int)param_1[1]) = 0;
      param_1[2] = (void *)((int)param_1[2] + (int)(void *)((int)__src - (int)__dest));
      return param_2;
    }
  }
  return (void *)0xffffffff;
}


