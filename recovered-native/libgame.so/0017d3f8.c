/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d3f8  Symbol: FUN_0017d3f8 */

void FUN_0017d3f8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *__dest;
  size_t __n;
  int iVar5;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_8c;
  undefined local_88 [108];
  int local_1c;
  
  iVar5 = DAT_0017d578 + 0x17d404;
  local_1c = **(int **)(iVar5 + DAT_0017d57c);
  local_a4 = *param_2;
  *(int *)(iVar5 + DAT_0017d580 + 4) = *(int *)(iVar5 + DAT_0017d580 + 4) + 1;
  uVar1 = FUN_0017a970(param_1,local_a4,&local_8c);
  iVar2 = FUN_0017cf9c(param_1,uVar1);
  if (iVar2 == 0) {
LAB_0017d4f8:
    __dest = (void *)0x0;
  }
  else {
    if (local_8c == 1) {
      local_88[0] = (undefined)uVar1;
      __n = 1;
    }
    else {
      __n = FUN_0017ab20(local_88,uVar1);
    }
    local_a4 = local_a4 + local_8c;
    local_a0 = FUN_0017a970(param_1,local_a4,&local_8c);
    do {
      iVar2 = FUN_0017d0fc(param_1,local_a0);
      if (iVar2 == 0) {
        *param_2 = local_a4;
        __dest = (void *)FUN_0019c88c(local_88,__n);
        goto LAB_0017d560;
      }
      if (local_8c == 1) {
        local_88[__n] = (undefined)local_a0;
        __n = __n + 1;
      }
      else {
        iVar2 = FUN_0017ab20(local_88 + __n,local_a0);
        __n = __n + iVar2;
      }
      local_a4 = local_a4 + local_8c;
      local_a0 = FUN_0017a970(param_1,local_a4,&local_8c);
    } while ((int)__n < 100);
    local_a8 = __n << 1;
    __dest = (void *)(***(code ***)(iVar5 + DAT_0017d584))(local_a8);
    if (__dest == (void *)0x0) {
      FUN_00179430(param_1,0);
    }
    else {
      memcpy(__dest,local_88,__n);
      iVar2 = DAT_0017d588;
      while (iVar4 = FUN_0017d0fc(param_1,local_a0), iVar4 != 0) {
        pvVar3 = __dest;
        if (local_a8 <= (int)(__n + 9)) {
          local_a8 = local_a8 << 1;
          pvVar3 = (void *)(***(code ***)(iVar5 + iVar2))(__dest,local_a8);
          if (pvVar3 == (void *)0x0) {
            FUN_00179430(param_1,0);
            (***(code ***)(iVar5 + DAT_0017d58c))(__dest);
            goto LAB_0017d4f8;
          }
        }
        if (local_8c == 1) {
          *(undefined *)((int)pvVar3 + __n) = (undefined)local_a0;
          __n = __n + 1;
        }
        else {
          iVar4 = FUN_0017ab20((int)pvVar3 + __n,local_a0);
          __n = __n + iVar4;
        }
        local_a4 = local_a4 + local_8c;
        local_a0 = FUN_0017a970(param_1,local_a4,&local_8c);
        __dest = pvVar3;
      }
      *(undefined *)((int)__dest + __n) = 0;
      *param_2 = local_a4;
    }
  }
LAB_0017d560:
  if (local_1c == **(int **)(iVar5 + DAT_0017d57c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


