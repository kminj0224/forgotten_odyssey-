/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1940  Symbol: FUN_001a1940 */

void * FUN_001a1940(int param_1,uint param_2)

{
  void *__s;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_001a19c0 + 0x1a194c;
  __s = (void *)(***(code ***)(iVar2 + DAT_001a19c4))(0x7c);
  if (__s == (void *)0x0) {
    FUN_0019fcac(iVar2 + DAT_001a19c8);
  }
  else {
    memset(__s,0,0x7c);
    if (param_1 != 0) {
      iVar2 = FUN_001a4238(param_1);
      *(int *)((int)__s + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_0019fa0c(DAT_001a19cc,0,param_1);
        FUN_0019f930(__s);
        return (void *)0x0;
      }
      uVar1 = FUN_0019c904(param_1);
      *(undefined4 *)((int)__s + 0x10) = uVar1;
      *(undefined4 *)((int)__s + 0x74) = 0;
    }
    FUN_0019f968(__s);
    if (((*(uint *)((int)__s + 0x20) & 4) != 0) && ((param_2 & 4) == 0)) {
      param_2 = param_2 | 4;
    }
    *(uint *)((int)__s + 0x20) = param_2;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)((int)__s + 0x28) = 1;
    }
  }
  return __s;
}


