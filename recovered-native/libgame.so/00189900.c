/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189900  Symbol: FUN_00189900 */

int ** FUN_00189900(void **param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int **__s;
  int **__s_00;
  int iVar1;
  
  iVar1 = DAT_001899b4 + 0x18990c;
  if ((param_1 == (void **)0x0) || (1 < param_2 + 1U)) {
    return (int **)0x0;
  }
  __s = (int **)*param_1;
  if (__s == (int **)0x0) {
    __s = (int **)(***(code ***)(iVar1 + DAT_001899b8))(0xc);
    if (__s == (int **)0x0) {
      FUN_001898e8(iVar1 + DAT_001899bc);
      return (int **)0x0;
    }
    memset(__s,0,0xc);
    *param_1 = __s;
  }
  __s_00 = (int **)__s[2];
  if (__s_00 == (int **)0x0) {
    __s_00 = (int **)(***(code ***)(iVar1 + DAT_001899b8))(0x18);
    if (__s_00 == (int **)0x0) {
      FUN_001898e8(iVar1 + DAT_001899c0);
      return (int **)0x0;
    }
  }
  else {
    __s[2] = *__s_00;
  }
  memset(__s_00,0,0x18);
  if (*__s == (int *)0x0) {
    *__s = (int *)__s_00;
  }
  else {
    if (param_2 != -1) {
      (*__s)[1] = (int)__s_00;
      *__s_00 = *__s;
      *__s = (int *)__s_00;
      goto LAB_00189996;
    }
    __s_00[1] = __s[1];
    *__s[1] = (int)__s_00;
  }
  __s[1] = (int *)__s_00;
LAB_00189996:
  __s_00[2] = param_3;
  __s_00[4] = (int *)0xffffffff;
  __s_00[3] = param_4;
  __s_00[5] = param_5;
  return __s_00;
}


