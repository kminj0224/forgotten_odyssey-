/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ba18  Symbol: FUN_0019ba18 */

int FUN_0019ba18(int param_1,undefined4 param_2,int param_3)

{
  void *__s;
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0019ba8c + 0x19ba24;
  if ((param_3 != 0) && (param_1 != 0)) {
    __s = (void *)(***(code ***)(iVar2 + DAT_0019ba90))(0x20);
    if (__s != (void *)0x0) {
      memset(__s,0,0x20);
      *(int *)((int)__s + 0x10) = param_1;
      iVar1 = *(int *)(param_1 + 4);
      FUN_0019ae7c(__s,param_2,param_3,0,1);
      (***(code ***)(iVar2 + DAT_0019ba98))(__s);
      return *(int *)(param_1 + 4) - iVar1;
    }
    FUN_001a570c(7,2,0,0,iVar2 + DAT_0019ba94);
  }
  return -1;
}


