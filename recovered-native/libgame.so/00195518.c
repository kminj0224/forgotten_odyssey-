/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195518  Symbol: FUN_00195518 */

void * FUN_00195518(int param_1,int param_2,void *param_3,uint param_4,int param_5)

{
  void *pvVar1;
  void *__s;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  void *local_34;
  int local_2c;
  undefined4 local_24;
  void *local_1c [2];
  
  iVar6 = DAT_00195758 + 0x195524;
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if (param_3 == (void *)0x0) {
    return (void *)0x0;
  }
  iVar4 = DAT_00195760;
  if (param_4 == 2) {
joined_r0x0019555c:
    iVar2 = iVar4;
    if (param_5 != 0) {
LAB_00195574:
      FUN_00194f00(param_1,iVar6 + iVar2);
      return (void *)0x0;
    }
  }
  else {
    iVar2 = DAT_0019576c;
    if (param_4 < 3) {
      iVar4 = DAT_0019575c;
      if (param_4 != 1) goto LAB_00195574;
      goto joined_r0x0019555c;
    }
    iVar4 = DAT_00195764;
    if (((param_4 != 3) && (iVar4 = DAT_00195768, param_4 != 4)) || (iVar2 = iVar4, param_5 == 0))
    goto LAB_00195574;
  }
  pvVar1 = (void *)FUN_0018b188(param_3,local_1c);
  local_34 = param_3;
  if (pvVar1 != (void *)0x0) {
    local_34 = pvVar1;
  }
  local_2c = *(int *)(param_2 + 0x28);
  if (local_2c == 0) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x50);
    }
    local_2c = FUN_0018f404(0,uVar3);
    *(int *)(param_2 + 0x28) = local_2c;
    if (local_2c != 0) goto LAB_001955be;
    FUN_00194208(param_1,iVar6 + DAT_00195770);
LAB_0019561a:
    if (pvVar1 != (void *)0x0) {
      (***(code ***)(iVar6 + DAT_00195774))(pvVar1);
    }
    if (local_1c[0] == (void *)0x0) {
      return (void *)0x0;
    }
    pcVar5 = **(code ***)(iVar6 + DAT_00195774);
    pvVar1 = local_1c[0];
LAB_001956f0:
    (*pcVar5)(pvVar1);
    return (void *)0x0;
  }
LAB_001955be:
  if (((*(int *)(param_2 + 0x20) == 0) ||
      (iVar4 = *(int *)(*(int *)(param_2 + 0x20) + 0x2c), iVar4 == 0)) ||
     ((iVar4 = FUN_0018eb6c(*(undefined4 *)(iVar4 + 0x28),local_34,local_1c[0]), iVar4 == 0 ||
      (*(int *)(iVar4 + 0x24) != 0)))) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    FUN_0018ec78(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x20) + 0x2c) + 0x28),local_34,
                 local_1c[0],0);
    FUN_001954d0(iVar4);
  }
  __s = (void *)FUN_0018eb6c(local_2c,local_34,local_1c[0]);
  if (__s == (void *)0x0) {
    __s = (void *)(***(code ***)(iVar6 + DAT_00195778))(0x38);
    if (__s == (void *)0x0) {
      FUN_00194208(param_1,iVar6 + DAT_0019577c);
      if (pvVar1 != (void *)0x0) {
        (***(code ***)(iVar6 + DAT_00195774))(pvVar1);
      }
      if (local_1c[0] == (void *)0x0) {
        return (void *)0x0;
      }
      pcVar5 = **(code ***)(iVar6 + DAT_00195774);
      pvVar1 = local_1c[0];
      goto LAB_0019574c;
    }
    memset(__s,0,0x38);
    *(undefined4 *)((int)__s + 4) = 0xf;
    iVar4 = FUN_0019c904(local_34);
    *(int *)((int)__s + 8) = iVar4;
    if (iVar4 == 0) {
      FUN_00194208(param_1,iVar6 + DAT_0019577c);
      if (pvVar1 != (void *)0x0) {
        (***(code ***)(iVar6 + DAT_00195774))(pvVar1);
      }
      if (local_1c[0] != (void *)0x0) {
        (***(code ***)(iVar6 + DAT_00195774))();
      }
      pcVar5 = **(code ***)(iVar6 + DAT_00195774);
      pvVar1 = __s;
      goto LAB_001956f0;
    }
    *(void **)((int)__s + 0x30) = local_1c[0];
    iVar4 = FUN_0018f230(local_2c,local_34,local_1c[0],__s);
    if (iVar4 != 0) {
      FUN_001954d0(__s);
      if (pvVar1 == (void *)0x0) {
        return (void *)0x0;
      }
      pcVar5 = **(code ***)(iVar6 + DAT_00195774);
      goto LAB_001956f0;
    }
    *(undefined4 *)((int)__s + 0x2c) = local_24;
  }
  else {
    if (*(int *)((int)__s + 0x24) != 0) goto LAB_0019561a;
    if (local_1c[0] != (void *)0x0) {
      (***(code ***)(iVar6 + DAT_00195774))();
      local_1c[0] = (void *)0x0;
    }
  }
  *(uint *)((int)__s + 0x24) = param_4;
  if ((param_1 == 0) || (1 < (uint)(*(int *)(param_1 + 0x1c) + DAT_00195780))) {
    uVar3 = FUN_00194878(*(undefined4 *)(param_2 + 0x20),param_5);
    *(undefined4 *)((int)__s + 0x28) = uVar3;
  }
  else {
    *(int *)((int)__s + 0x28) = param_5;
    if (param_5 != 0) {
      *(undefined4 *)(param_5 + 0x14) = 1;
    }
  }
  *(int *)((int)__s + 0x14) = param_2;
  *(undefined4 *)((int)__s + 0x20) = *(undefined4 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x10) == 0) {
    *(void **)(param_2 + 0x10) = __s;
    *(void **)(param_2 + 0xc) = __s;
  }
  else {
    *(void **)(*(int *)(param_2 + 0x10) + 0x18) = __s;
    *(undefined4 *)((int)__s + 0x1c) = *(undefined4 *)(param_2 + 0x10);
    *(void **)(param_2 + 0x10) = __s;
  }
  if (pvVar1 == (void *)0x0) {
    return __s;
  }
  pcVar5 = **(code ***)(iVar6 + DAT_00195774);
LAB_0019574c:
  (*pcVar5)(pvVar1);
  return __s;
}


