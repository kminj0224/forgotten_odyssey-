/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a448  Symbol: FUN_0018a448 */

void * FUN_0018a448(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018a4d8 + 0x18a454;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    return (void *)0x0;
  }
  __s = (void *)(***(code ***)(iVar3 + DAT_0018a4dc))(0x40);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018a4e0);
  }
  else {
    memset(__s,0,0x40);
    *(undefined4 *)((int)__s + 4) = 0xe;
    if (param_2 != 0) {
      uVar2 = FUN_0019c904(param_2);
      *(undefined4 *)((int)__s + 8) = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = FUN_0019c904(param_3);
      *(undefined4 *)((int)__s + 0x34) = uVar2;
    }
    if (param_4 != 0) {
      uVar2 = FUN_0019c904(param_4);
      *(undefined4 *)((int)__s + 0x38) = uVar2;
    }
    if (param_1 != 0) {
      *(void **)(param_1 + 0x30) = __s;
    }
    iVar1 = DAT_0018a4e4;
    *(int *)((int)__s + 0x20) = param_1;
    if ((*(int *)(iVar3 + iVar1 + 4) != 0) && (**(code ***)(iVar3 + DAT_0018a4e8) != (code *)0x0)) {
      (***(code ***)(iVar3 + DAT_0018a4e8))(__s);
    }
  }
  return __s;
}


