/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f8b4  Symbol: FUN_0018f8b4 */

int * FUN_0018f8b4(int param_1,int param_2,undefined4 param_3)

{
  int *__s;
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0018f938 + 0x18f8c0;
  if ((0 < param_2) && (param_1 != 0)) {
    __s = (int *)(***(code ***)(iVar2 + DAT_0018f93c))(0x24);
    if (__s == (int *)0x0) {
      FUN_0018f77c(iVar2 + DAT_0018f940);
      return (int *)0x0;
    }
    memset(__s,0,0x24);
    iVar1 = FUN_00189c04(param_1,param_2);
    __s[4] = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_001a4320(param_3);
      __s[3] = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_00189c50(**(int **)(iVar2 + DAT_0018f948) << 1);
      }
      __s[5] = iVar1;
      __s[6] = -1;
      *__s = param_1;
      __s[1] = 0;
      __s[2] = 0;
      return __s;
    }
    (***(code ***)(iVar2 + DAT_0018f944))(__s);
  }
  return (int *)0x0;
}


