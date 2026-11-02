/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a18bc  Symbol: FUN_001a18bc */

int FUN_001a18bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  void *__s;
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_001a1930 + 0x1a18c8;
  FUN_0017c498();
  if ((param_3 != 0) && (param_1 != 0)) {
    __s = (void *)(***(code ***)(iVar2 + DAT_001a1934))(0x20);
    if (__s != (void *)0x0) {
      memset(__s,0,0x20);
      *(int *)((int)__s + 0x10) = param_1;
      iVar1 = *(int *)(param_1 + 4);
      FUN_001a17bc(__s,param_2,param_3,param_4,param_5,0);
      (***(code ***)(iVar2 + DAT_001a193c))(__s);
      return *(int *)(param_1 + 4) - iVar1;
    }
    FUN_0019fcac(iVar2 + DAT_001a1938);
  }
  return -1;
}


