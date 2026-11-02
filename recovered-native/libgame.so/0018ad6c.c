/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ad6c  Symbol: FUN_0018ad6c */

void * FUN_0018ad6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *__s;
  int iVar4;
  
  iVar4 = DAT_0018aed4 + 0x18ad78;
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 1)) {
    __s = (void *)(***(code ***)(iVar4 + DAT_0018aedc))(0x30);
    if (__s == (void *)0x0) {
      if ((param_5 == 1) &&
         ((*(int *)(param_1 + 0x20) == 0 ||
          (iVar1 = FUN_0019ccb4(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50),param_3),
          iVar1 == 0)))) {
        (***(code ***)(iVar4 + DAT_0018aed8))(param_3);
      }
      FUN_001898e8(iVar4 + DAT_0018aee0);
    }
    else {
      memset(__s,0,0x30);
      *(undefined4 *)((int)__s + 4) = 2;
      *(int *)((int)__s + 0x14) = param_1;
      iVar1 = 0;
      if (param_1 != 0) {
        iVar1 = *(int *)(param_1 + 0x20);
        *(int *)((int)__s + 0x20) = iVar1;
      }
      *(undefined4 *)((int)__s + 0x24) = param_2;
      if (param_5 == 0) {
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0x50) == 0)) {
          uVar2 = FUN_0019c904(param_3);
        }
        else {
          uVar2 = FUN_0019d178(*(int *)(iVar1 + 0x50),param_3,0xffffffff);
        }
        *(undefined4 *)((int)__s + 8) = uVar2;
      }
      else {
        *(undefined4 *)((int)__s + 8) = param_3;
      }
      if (param_4 != 0) {
        iVar3 = FUN_0019c60c(param_4);
        if ((iVar3 == 0) && (FUN_0018a658(DAT_0018aee4,iVar1,0), iVar1 != 0)) {
          uVar2 = FUN_0019c904(iVar4 + DAT_0018aee8);
          *(undefined4 *)(iVar1 + 0x3c) = uVar2;
        }
        iVar1 = FUN_0018a0b0(iVar1,param_4);
        *(int *)((int)__s + 0xc) = iVar1;
        *(undefined4 *)((int)__s + 0x10) = 0;
        for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
          *(void **)(iVar1 + 0x14) = __s;
          if (*(int *)(iVar1 + 0x18) == 0) {
            *(int *)((int)__s + 0x10) = iVar1;
          }
        }
      }
      uVar2 = 0;
      if (param_1 != 0) {
        iVar1 = *(int *)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x2c) == 0) {
          *(void **)(param_1 + 0x2c) = __s;
        }
        else {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 0x18);
          } while (*(int *)(iVar3 + 0x18) != 0);
          *(void **)(iVar3 + 0x18) = __s;
          *(int *)((int)__s + 0x1c) = iVar3;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x20);
      }
      iVar1 = FUN_001943cc(uVar2,param_1,__s);
      if (iVar1 == 1) {
        FUN_0019454c(0,*(undefined4 *)(param_1 + 0x20),param_4,__s);
      }
      if ((*(int *)(iVar4 + DAT_0018aeec + 4) != 0) &&
         (**(code ***)(iVar4 + DAT_0018aef0) != (code *)0x0)) {
        (***(code ***)(iVar4 + DAT_0018aef0))(__s);
      }
    }
  }
  else {
    if ((param_5 == 1) &&
       ((*(int *)(param_1 + 0x20) == 0 ||
        (iVar1 = FUN_0019ccb4(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50),param_3), iVar1 == 0)
        ))) {
      (***(code ***)(iVar4 + DAT_0018aed8))(param_3);
    }
    __s = (void *)0x0;
  }
  return __s;
}


