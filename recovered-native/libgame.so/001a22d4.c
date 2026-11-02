/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a22d4  Symbol: FUN_001a22d4 */

void * FUN_001a22d4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                   int param_6)

{
  void *__s;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_001a23ac + 0x1a22e2;
  __s = (void *)(***(code ***)(iVar2 + DAT_001a23b0))(0x4c);
  if (__s == (void *)0x0) {
    FUN_001a1d04(iVar2 + DAT_001a23b4);
    return (void *)0x0;
  }
  memset(__s,0,0x4c);
  *(undefined4 *)((int)__s + 4) = 0x11;
  *(undefined4 *)((int)__s + 0x30) = param_3;
  if (param_1 == 0) {
    uVar1 = FUN_0019c904(param_2);
    *(undefined4 *)((int)__s + 8) = uVar1;
    if (param_4 != 0) {
      uVar1 = FUN_0019c904(param_4);
      *(undefined4 *)((int)__s + 0x34) = uVar1;
    }
    if (param_5 == 0) goto LAB_001a236e;
    uVar1 = FUN_0019c904(param_5);
  }
  else {
    uVar1 = FUN_0019d178(param_1,param_2,0xffffffff);
    *(undefined4 *)((int)__s + 8) = uVar1;
    if (param_4 != 0) {
      uVar1 = FUN_0019d178(param_1,param_4,0xffffffff);
      *(undefined4 *)((int)__s + 0x34) = uVar1;
    }
    if (param_5 == 0) goto LAB_001a236e;
    uVar1 = FUN_0019d178(param_1,param_5,0xffffffff);
  }
  *(undefined4 *)((int)__s + 0x38) = uVar1;
LAB_001a236e:
  if (param_6 == 0) {
    *(undefined4 *)((int)__s + 0x2c) = 0;
    *(undefined4 *)((int)__s + 0x28) = 0;
  }
  else {
    iVar2 = FUN_0019c49c(param_6);
    *(int *)((int)__s + 0x2c) = iVar2;
    if ((param_1 == 0) || (4 < iVar2)) {
      uVar1 = FUN_0019c88c(param_6,iVar2);
    }
    else {
      uVar1 = FUN_0019d178(param_1,param_6);
    }
    *(undefined4 *)((int)__s + 0x28) = uVar1;
  }
  *(undefined4 *)((int)__s + 0x40) = 0;
  *(undefined4 *)((int)__s + 0x24) = 0;
  *(undefined4 *)((int)__s + 0x44) = 0;
  return __s;
}


