/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a0c4  Symbol: FUN_0018a0c4 */

void * FUN_0018a0c4(undefined4 param_1,int param_2)

{
  int iVar1;
  void *__s;
  int iVar2;
  
  iVar2 = DAT_0018a11c + 0x18a0d0;
  __s = (void *)0x0;
  if (param_2 != 0) {
    __s = (void *)(***(code ***)(iVar2 + DAT_0018a120))(0x3c);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar2 + DAT_0018a124);
    }
    else {
      memset(__s,0,0x3c);
      iVar1 = DAT_0018a128;
      *(undefined4 *)((int)__s + 0x24) = param_1;
      *(undefined4 *)((int)__s + 4) = 1;
      *(int *)((int)__s + 8) = param_2;
      if (*(int *)(iVar2 + iVar1 + 4) != 0) {
        if (**(code ***)(iVar2 + DAT_0018a12c) != (code *)0x0) {
          (***(code ***)(iVar2 + DAT_0018a12c))(__s);
        }
      }
    }
  }
  return __s;
}


