/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018afbc  Symbol: FUN_0018afbc */

void * FUN_0018afbc(int param_1,undefined4 param_2)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018b020 + 0x18afc8;
  __s = (void *)(***(code ***)(iVar3 + DAT_0018b024))(0x3c);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018b028);
  }
  else {
    memset(__s,0,0x3c);
    iVar1 = DAT_0018b02c;
    *(undefined4 *)((int)__s + 4) = 3;
    *(int *)((int)__s + 8) = iVar3 + iVar1 + 8;
    if (param_1 != 0) {
      uVar2 = FUN_0019c88c(param_1,param_2);
      *(undefined4 *)((int)__s + 0x28) = uVar2;
    }
    if ((*(int *)(iVar3 + DAT_0018b030 + 4) != 0) &&
       (**(code ***)(iVar3 + DAT_0018b034) != (code *)0x0)) {
      (***(code ***)(iVar3 + DAT_0018b034))(__s);
    }
  }
  return __s;
}


