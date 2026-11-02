/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019e1a0  Symbol: FUN_0019e1a0 */

void FUN_0019e1a0(int param_1,char *param_2,int param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *__s;
  undefined4 local_20;
  
  iVar4 = DAT_0019e378 + 0x19e1ac;
  if (param_3 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00189e8c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34),param_3);
  }
  __s = *(void **)(param_1 + 0x17c);
  if (__s == (void *)0x0) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      __s = (void *)FUN_0018af0c(*(undefined4 *)(param_1 + 0x34),local_20,param_2,0);
    }
    else {
      __s = (void *)FUN_0018aef4(*(undefined4 *)(param_1 + 0x34),local_20,param_2,0);
    }
    if (__s == (void *)0x0) {
      FUN_00179430(param_1,iVar4 + DAT_0019e384);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)((int)__s + 0x18);
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
    memset(__s,0,0x30);
    *(undefined4 *)((int)__s + 4) = 2;
    *(undefined4 *)((int)__s + 0x14) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((int)__s + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)__s + 0x24) = local_20;
    if (*(int *)(param_1 + 0x16c) == 0) {
      uVar1 = FUN_0019c904(param_2);
      *(undefined4 *)((int)__s + 8) = uVar1;
    }
    else {
      *(char **)((int)__s + 8) = param_2;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x2c);
    if (iVar2 == 0) {
      *(void **)(*(int *)(param_1 + 0x34) + 0x2c) = __s;
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0x18);
      } while (*(int *)(iVar3 + 0x18) != 0);
      *(void **)(iVar3 + 0x18) = __s;
      *(int *)((int)__s + 0x1c) = iVar3;
    }
    if ((**(int **)(iVar4 + DAT_0019e37c) != 0) &&
       (**(code ***)(iVar4 + DAT_0019e380) != (code *)0x0)) {
      (***(code ***)(iVar4 + DAT_0019e380))(__s);
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    if (*param_5 == '\0') {
      iVar2 = FUN_0018cda0(*(undefined4 *)(param_1 + 8),param_4);
      *(int *)((int)__s + 0xc) = iVar2;
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
        uVar1 = *(undefined4 *)((int)__s + 0x20);
        *(void **)(iVar2 + 0x14) = __s;
        *(undefined4 *)(iVar2 + 0x20) = uVar1;
        if (*(int *)(iVar2 + 0x18) == 0) {
          *(int *)((int)__s + 0x10) = iVar2;
        }
      }
      goto LAB_0019e2ca;
    }
  }
  else if (param_4 == 0) goto LAB_0019e2ca;
  iVar2 = FUN_0019dcc4(param_1,param_4,(int)param_5 - param_4);
  *(int *)((int)__s + 0xc) = iVar2;
  *(int *)((int)__s + 0x10) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)((int)__s + 0x20);
    *(void **)(iVar2 + 0x14) = __s;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
  }
LAB_0019e2ca:
  if (-1 < *(int *)(param_1 + 0x114) << 0x1c) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x60) == 2) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0xd8) != 0) {
      return;
    }
    if (((((param_3 == *(int *)(param_1 + 0x138)) && (*param_2 == 'i')) && (param_2[1] == 'd')) &&
        (param_2[2] == '\0')) ||
       (iVar2 = FUN_001943cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34),__s),
       iVar2 != 0)) {
      iVar2 = FUN_0019c88c(param_4,(int)param_5 - param_4);
      FUN_0019454c(param_1 + 0x6c,*(undefined4 *)(param_1 + 8),iVar2,__s);
    }
    else {
      iVar2 = FUN_00193fb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x34),__s);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_0019c88c(param_4,(int)param_5 - param_4);
      FUN_00195784(param_1 + 0x6c,*(undefined4 *)(param_1 + 8),iVar2,__s);
    }
    if (iVar2 != 0) {
      (***(code ***)(iVar4 + DAT_0019e388))(iVar2);
    }
  }
  return;
}


