/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194d20  Symbol: FUN_00194d20 */

void * FUN_00194d20(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  void *__s;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  
  iVar3 = DAT_00194eec + 0x194d2c;
  if (((param_2 == 0) || (param_4 == 0)) || (param_3 == 0)) {
LAB_00194d6c:
    FUN_00193e3c(param_9);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x20);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x50);
      if (((*(int *)(iVar2 + 0x30) == param_2) && (*(int *)(iVar2 + 0x2c) != 0)) &&
         ((iVar2 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x2c), iVar2 != 0 &&
          (iVar2 = FUN_0018eae4(iVar2,param_4,param_5,param_3), iVar2 != 0)))) goto LAB_00194d6c;
    }
    local_28 = *(int *)(param_2 + 0x2c);
    if (local_28 == 0) {
      local_28 = FUN_0018f404(0,iVar4);
      *(int *)(param_2 + 0x2c) = local_28;
      if (local_28 == 0) {
        __s = (void *)0x0;
        iVar2 = DAT_00194ef0;
        goto LAB_00194dae;
      }
    }
    __s = (void *)(***(code ***)(iVar3 + DAT_00194ef4))(0x40);
    iVar2 = DAT_00194ef8;
    if (__s == (void *)0x0) {
LAB_00194dae:
      FUN_00194208(param_1,iVar3 + iVar2);
      FUN_00193e3c(param_9);
      return __s;
    }
    memset(__s,0,0x40);
    *(undefined4 *)((int)__s + 4) = 0x10;
    *(undefined4 *)((int)__s + 0x28) = param_6;
    *(undefined4 *)((int)__s + 0x20) = *(undefined4 *)(param_2 + 0x20);
    if (iVar4 == 0) {
      uVar1 = FUN_0019c904(param_4);
      *(undefined4 *)((int)__s + 8) = uVar1;
      uVar1 = FUN_0019c904(param_5);
      *(undefined4 *)((int)__s + 0x38) = uVar1;
      uVar1 = FUN_0019c904(param_3);
    }
    else {
      uVar1 = FUN_0019d178(iVar4,param_4,0xffffffff);
      *(undefined4 *)((int)__s + 8) = uVar1;
      uVar1 = FUN_0019d178(iVar4,param_5,0xffffffff);
      *(undefined4 *)((int)__s + 0x38) = uVar1;
      uVar1 = FUN_0019d178(iVar4,param_3,0xffffffff);
    }
    *(undefined4 *)((int)__s + 0x3c) = uVar1;
    *(undefined4 *)((int)__s + 0x34) = param_9;
    *(undefined4 *)((int)__s + 0x2c) = param_7;
    if (param_8 != 0) {
      if (iVar4 == 0) {
        uVar1 = FUN_0019c904(param_8);
      }
      else {
        uVar1 = FUN_0019d178(iVar4,param_8,0xffffffff);
      }
      *(undefined4 *)((int)__s + 0x30) = uVar1;
    }
    iVar2 = FUN_0018f070(local_28,*(undefined4 *)((int)__s + 8),*(undefined4 *)((int)__s + 0x38),
                         *(undefined4 *)((int)__s + 0x3c),__s);
    if (-1 < iVar2) {
      iVar2 = FUN_00194c40(param_2,param_3);
      if (iVar2 != 0) {
        iVar5 = iVar3 + DAT_00194efc;
        iVar4 = FUN_0019c30c(*(undefined4 *)((int)__s + 8),iVar5);
        if ((iVar4 == 0) &&
           ((*(int *)((int)__s + 0x38) == 0 ||
            (iVar4 = FUN_0019c30c(*(int *)((int)__s + 0x38),iVar5), iVar4 == 0)))) {
          if (*(int *)(iVar2 + 0x2c) != 0) {
            iVar3 = iVar3 + DAT_00194efc;
            iVar2 = *(int *)(iVar2 + 0x2c);
            do {
              iVar4 = iVar2;
              iVar2 = FUN_0019c30c(*(undefined4 *)(iVar4 + 8),iVar3);
              if ((iVar2 == 0) &&
                 ((*(int *)((int)__s + 0x38) == 0 ||
                  (iVar2 = FUN_0019c30c(*(int *)((int)__s + 0x38),iVar3), iVar2 == 0)))) break;
              iVar2 = *(int *)(iVar4 + 0x24);
            } while (*(int *)(iVar4 + 0x24) != 0);
            *(undefined4 *)((int)__s + 0x24) = *(undefined4 *)(iVar4 + 0x24);
            *(void **)(iVar4 + 0x24) = __s;
            goto LAB_00194ec8;
          }
          *(undefined4 *)((int)__s + 0x24) = 0;
        }
        else {
          *(undefined4 *)((int)__s + 0x24) = *(undefined4 *)(iVar2 + 0x2c);
        }
        *(void **)(iVar2 + 0x2c) = __s;
      }
LAB_00194ec8:
      *(int *)((int)__s + 0x14) = param_2;
      if (*(int *)(param_2 + 0x10) == 0) {
        *(void **)(param_2 + 0x10) = __s;
        *(void **)(param_2 + 0xc) = __s;
        return __s;
      }
      *(void **)(*(int *)(param_2 + 0x10) + 0x18) = __s;
      *(undefined4 *)((int)__s + 0x1c) = *(undefined4 *)(param_2 + 0x10);
      *(void **)(param_2 + 0x10) = __s;
      return __s;
    }
    FUN_001949cc(__s);
  }
  return (void *)0x0;
}


