/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a24c  Symbol: FUN_0018a24c */

void * FUN_0018a24c(int param_1)

{
  int iVar1;
  void *__s;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0018a2d8 + 0x18a256;
  if (param_1 == 0) {
    param_1 = iVar3 + DAT_0018a2dc;
  }
  __s = (void *)(***(code ***)(iVar3 + DAT_0018a2e0))(0x60);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018a2e4);
  }
  else {
    memset(__s,0,0x60);
    *(undefined4 *)((int)__s + 4) = 9;
    iVar2 = FUN_0019c904(param_1);
    *(int *)((int)__s + 0x38) = iVar2;
    iVar1 = DAT_0018a2ec;
    if (iVar2 == 0) {
      FUN_001898e8(iVar3 + DAT_0018a2e4);
      (***(code ***)(iVar3 + DAT_0018a2e8))(__s);
      __s = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)__s + 0x28) = 0xffffffff;
      *(undefined4 *)((int)__s + 0x24) = 0xffffffff;
      *(void **)((int)__s + 0x20) = __s;
      *(undefined4 *)((int)__s + 0x58) = 0;
      *(undefined4 *)((int)__s + 0x5c) = 0x20;
      *(undefined4 *)((int)__s + 0x4c) = 1;
      if (*(int *)(iVar3 + iVar1 + 4) != 0) {
        if (**(code ***)(iVar3 + DAT_0018a2f0) != (code *)0x0) {
          (***(code ***)(iVar3 + DAT_0018a2f0))(__s);
        }
      }
    }
  }
  return __s;
}


