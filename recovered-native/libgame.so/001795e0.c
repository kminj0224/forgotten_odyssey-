/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001795e0  Symbol: FUN_001795e0 */

void * FUN_001795e0(undefined4 param_1)

{
  int iVar1;
  void *__s;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00179628 + 0x1795ec;
  __s = (void *)(***(code ***)(iVar2 + DAT_0017962c))(0x3c);
  if (__s == (void *)0x0) {
    FUN_00179430(param_1,iVar2 + DAT_00179630);
  }
  else {
    memset(__s,0,0x3c);
    iVar1 = DAT_00179634;
    *(undefined4 *)((int)__s + 0x1c) = 1;
    *(undefined4 *)((int)__s + 0x20) = 1;
    *(undefined4 *)((int)__s + 0x34) = 0xffffffff;
    iVar3 = *(int *)(iVar2 + iVar1);
    *(int *)((int)__s + 0x38) = iVar3;
    *(int *)(iVar2 + iVar1) = iVar3 + 1;
  }
  return __s;
}


