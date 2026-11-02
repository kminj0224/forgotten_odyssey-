/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207d0c  Symbol: FUN_00207d0c */

int FUN_00207d0c(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  
  __n = param_3;
  do {
    while (sVar1 = write(param_1,param_2,__n), sVar1 == -1) {
      piVar2 = (int *)__errno();
      if (*piVar2 != 4) goto LAB_00207d58;
    }
    __n = __n - sVar1;
    param_2 = (void *)((int)param_2 + sVar1);
  } while (__n != 0);
LAB_00207d58:
  return param_3 - __n;
}


