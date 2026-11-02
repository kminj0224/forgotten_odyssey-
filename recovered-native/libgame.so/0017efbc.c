/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017efbc  Symbol: FUN_0017efbc */

void FUN_0017efbc(int param_1)

{
  void *__dest;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  int iVar5;
  undefined4 local_a0;
  int local_9c;
  int local_8c;
  undefined local_88 [108];
  int local_1c;
  
  iVar4 = DAT_0017f1d0 + 0x17efca;
  local_1c = **(int **)(iVar4 + DAT_0017f1d4);
  *(int *)(iVar4 + DAT_0017f1d8 + 0x10) = *(int *)(iVar4 + DAT_0017f1d8 + 0x10) + 1;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  local_a0 = FUN_0017a70c(param_1,&local_8c);
  iVar5 = 0;
  __n = 0;
  do {
    iVar3 = FUN_0017d0fc(param_1,local_a0);
    if (iVar3 == 0) {
      if (__n == 0) goto LAB_0017f1aa;
      __dest = (void *)FUN_0019c88c(local_88,__n);
      goto LAB_0017f1b8;
    }
    if (iVar5 < 0x65) {
      iVar5 = iVar5 + 1;
    }
    else {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      iVar5 = 0;
    }
    if (local_8c == 1) {
      local_88[__n] = (undefined)local_a0;
      __n = __n + 1;
    }
    else {
      iVar3 = FUN_0017ab20(local_88 + __n,local_a0);
      __n = __n + iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar3 + 0x10) == '\n') {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = 1;
    }
    else {
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
    }
    *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_8c
    ;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    local_a0 = FUN_0017a70c(param_1,&local_8c);
  } while ((int)__n < 100);
  local_9c = __n * 2;
  __dest = (void *)(***(code ***)(iVar4 + DAT_0017f1dc))(local_9c);
  if (__dest == (void *)0x0) {
    FUN_00179430(param_1,0);
  }
  else {
    memcpy(__dest,local_88,__n);
    iVar3 = DAT_0017f1e0;
    while (iVar2 = FUN_0017d0fc(param_1,local_a0), iVar2 != 0) {
      if (iVar5 < 0x65) {
        iVar5 = iVar5 + 1;
      }
      else {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
            0xfa)) {
          FUN_0017c738(param_1);
        }
        iVar5 = 0;
      }
      pvVar1 = __dest;
      if (local_9c <= (int)(__n + 9)) {
        local_9c = local_9c << 1;
        pvVar1 = (void *)(***(code ***)(iVar4 + iVar3))(__dest,local_9c);
        if (pvVar1 == (void *)0x0) {
          FUN_00179430(param_1,0);
          (***(code ***)(iVar4 + DAT_0017f1e4))(__dest);
LAB_0017f1aa:
          __dest = (void *)0x0;
          goto LAB_0017f1b8;
        }
      }
      if (local_8c == 1) {
        *(undefined *)((int)pvVar1 + __n) = (undefined)local_a0;
        __n = __n + 1;
      }
      else {
        iVar2 = FUN_0017ab20((int)pvVar1 + __n,local_a0);
        __n = __n + iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar2 + 0x10) == '\n') {
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = 1;
      }
      else {
        *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      }
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_8c;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      local_a0 = FUN_0017a70c(param_1,&local_8c);
      __dest = pvVar1;
    }
    *(undefined *)((int)__dest + __n) = 0;
  }
LAB_0017f1b8:
  if (local_1c == **(int **)(iVar4 + DAT_0017f1d4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


