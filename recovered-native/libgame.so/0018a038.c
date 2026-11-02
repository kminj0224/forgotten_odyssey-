/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a038  Symbol: FUN_0018a038 */

void * FUN_0018a038(int param_1)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018a098 + 0x18a044;
  __s = (void *)(***(code ***)(iVar3 + DAT_0018a09c))(0x3c);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018a0a0);
  }
  else {
    memset(__s,0,0x3c);
    iVar1 = DAT_0018a0a4;
    *(undefined4 *)((int)__s + 4) = 3;
    *(int *)((int)__s + 8) = iVar3 + iVar1 + 8;
    if (param_1 != 0) {
      uVar2 = FUN_0019c904(param_1);
      *(undefined4 *)((int)__s + 0x28) = uVar2;
    }
    if (*(int *)(iVar3 + DAT_0018a0a8 + 4) != 0) {
      if (**(code ***)(iVar3 + DAT_0018a0ac) != (code *)0x0) {
        (***(code ***)(iVar3 + DAT_0018a0ac))(__s);
      }
    }
  }
  return __s;
}


