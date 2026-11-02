/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189fb0  Symbol: FUN_00189fb0 */

void * FUN_00189fb0(int param_1)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018a00c + 0x189fbc;
  __s = (void *)(***(code ***)(iVar3 + DAT_0018a010))(0x3c);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018a014);
  }
  else {
    memset(__s,0,0x3c);
    iVar1 = DAT_0018a018;
    *(undefined4 *)((int)__s + 4) = 8;
    *(int *)((int)__s + 8) = iVar3 + iVar1;
    if (param_1 != 0) {
      uVar2 = FUN_0019c904(param_1);
      *(undefined4 *)((int)__s + 0x28) = uVar2;
    }
    if (*(int *)(iVar3 + DAT_0018a01c + 4) != 0) {
      if (**(code ***)(iVar3 + DAT_0018a020) != (code *)0x0) {
        (***(code ***)(iVar3 + DAT_0018a020))(__s);
      }
    }
  }
  return __s;
}


