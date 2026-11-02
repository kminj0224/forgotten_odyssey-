/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018af44  Symbol: FUN_0018af44 */

void * FUN_0018af44(undefined4 param_1,int param_2,undefined4 param_3)

{
  void *__s;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0018afa8 + 0x18af50;
  __s = (void *)(***(code ***)(iVar2 + DAT_0018afac))(0x3c);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar2 + DAT_0018afb0);
  }
  else {
    memset(__s,0,0x3c);
    *(undefined4 *)((int)__s + 4) = 4;
    *(undefined4 *)((int)__s + 0x20) = param_1;
    if (param_2 != 0) {
      uVar1 = FUN_0019c88c(param_2,param_3);
      *(undefined4 *)((int)__s + 0x28) = uVar1;
    }
    if (*(int *)(iVar2 + DAT_0018afb4 + 4) != 0) {
      if (**(code ***)(iVar2 + DAT_0018afb8) != (code *)0x0) {
        (***(code ***)(iVar2 + DAT_0018afb8))(__s);
      }
    }
  }
  return __s;
}


