/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c7f8  Symbol: FUN_0017c7f8 */

void ** FUN_0017c7f8(void *param_1,void *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                    undefined4 param_6)

{
  int iVar1;
  void **ppvVar2;
  void *__s;
  size_t __n;
  int iVar3;
  
  iVar3 = DAT_0017c8ac + 0x17c804;
  if (param_3 == 0) {
    return (void **)0x0;
  }
  iVar1 = FUN_0018fbec(param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return (void **)0x0;
  }
  ppvVar2 = (void **)FUN_00179dd4();
  if (ppvVar2 == (void **)0x0) {
    FUN_0018ff94(iVar1);
    return (void **)0x0;
  }
  if (param_1 != (void *)0x0) {
    if (*ppvVar2 != *(void **)(iVar3 + DAT_0017c8b0)) {
      (***(code ***)(iVar3 + DAT_0017c8b4))();
    }
    __s = (void *)(***(code ***)(iVar3 + DAT_0017c8b8))(0x80);
    *ppvVar2 = __s;
    if (__s == (void *)0x0) {
      FUN_00179430(ppvVar2,0);
      goto LAB_0017c894;
    }
    memset(__s,0,0x80);
    if (*(int *)((int)param_1 + 0x6c) == DAT_0017c8bc) {
      __n = 0x80;
    }
    else {
      __n = 0x70;
    }
    memcpy(*ppvVar2,param_1,__n);
    if (param_2 != (void *)0x0) {
      ppvVar2[1] = param_2;
    }
  }
  iVar3 = FUN_0017a148(ppvVar2,iVar1,param_6);
  if (iVar3 != 0) {
    FUN_0017bfa0(ppvVar2,iVar3);
    return ppvVar2;
  }
LAB_0017c894:
  FUN_00179908(ppvVar2);
  return (void **)0x0;
}


