/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019e38c  Symbol: FUN_0019e38c */

void FUN_0019e38c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6,
                 int param_7,int param_8,undefined4 *param_9)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *__s;
  int iVar5;
  int local_30;
  int *local_24;
  
  iVar5 = DAT_0019e5b4 + 0x19e398;
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (((*(int *)(param_1 + 0x68) != 0) && (*(int *)(*(int *)(param_1 + 8) + 0x30) == 0)) &&
     ((iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x2c), iVar4 == 0 ||
      ((((*(int *)(iVar4 + 0x24) == 0 && (*(int *)(iVar4 + 0x28) == 0)) &&
        (*(int *)(iVar4 + 0x2c) == 0)) && (*(int *)(iVar4 + 0x30) == 0)))))) {
    FUN_0019e068(param_1,0x5e,iVar5 + DAT_0019e5b8,0,0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  __s = *(void **)(param_1 + 0x174);
  if (__s == (void *)0x0) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      __s = (void *)FUN_0018c898(*(undefined4 *)(param_1 + 8),0,param_2,0);
    }
    else {
      __s = (void *)FUN_0018c828(*(undefined4 *)(param_1 + 8),0,param_2,0);
    }
    if (__s != (void *)0x0) goto LAB_0019e462;
LAB_0019e570:
    FUN_0019d7d4(param_1,iVar5 + DAT_0019e5cc);
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)((int)__s + 0x18);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
    memset(__s,0,0x3c);
    *(undefined4 *)((int)__s + 4) = 1;
    if (*(int *)(param_1 + 0x16c) == 0) {
      iVar4 = FUN_0019c904(param_2);
      *(int *)((int)__s + 8) = iVar4;
      if (iVar4 == 0) goto LAB_0019e570;
    }
    else {
      *(undefined4 *)((int)__s + 8) = param_2;
    }
    if ((**(int **)(iVar5 + DAT_0019e5bc) != 0) &&
       (**(code ***)(iVar5 + DAT_0019e5c0) != (code *)0x0)) {
      (***(code ***)(iVar5 + DAT_0019e5c0))(__s);
    }
LAB_0019e462:
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
      if (DAT_0019e5c4 < iVar4) {
        iVar4 = -1;
      }
      *(short *)((int)__s + 0x38) = (short)iVar4;
    }
    if ((iVar3 == 0) || (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0)) {
      FUN_0018c194(*(int *)(param_1 + 8),__s);
    }
    local_24 = (int *)0x0;
    for (local_30 = 0; local_30 < param_5; local_30 = local_30 + 1) {
      iVar4 = *param_6;
      piVar1 = (int *)FUN_0018a4ec(0,param_6[1]);
      if (piVar1 == (int *)0x0) goto LAB_0019e570;
      if (local_24 == (int *)0x0) {
        *(int **)((int)__s + 0x30) = piVar1;
      }
      else {
        *local_24 = (int)piVar1;
      }
      if ((param_4 != 0) && (param_3 == iVar4)) {
        *(int **)((int)__s + 0x24) = piVar1;
      }
      param_6 = param_6 + 2;
      local_24 = piVar1;
    }
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    FUN_0017becc(param_1,__s);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) == 1) {
        FUN_0018c194(iVar3,__s);
      }
      else {
        FUN_0018c31c(iVar3,__s);
      }
    }
    if ((param_8 != 0) && (-1 < *(int *)(param_1 + 0x114) << 0x1d)) {
      param_7 = param_7 - param_8;
    }
    if ((param_4 != 0) && (*(int *)((int)__s + 0x24) == 0)) {
      iVar3 = FUN_00189e8c(*(undefined4 *)(param_1 + 8),iVar3,param_3);
      *(int *)((int)__s + 0x24) = iVar3;
      if ((iVar3 == 0) && (iVar3 = FUN_0019c30c(param_3,iVar5 + DAT_0019e5c8), iVar3 != 0)) {
        uVar2 = FUN_00189e8c(*(undefined4 *)(param_1 + 8),__s,param_3);
        *(undefined4 *)((int)__s + 0x24) = uVar2;
      }
      if (*(int *)((int)__s + 0x24) == 0) {
        iVar3 = FUN_0018a4ec(__s,0,param_3);
        if (iVar3 == 0) goto LAB_0019e570;
        FUN_0019e100(param_1,0xc9,iVar5 + DAT_0019e5d0,param_3,0);
      }
    }
    if (0 < param_7) {
      iVar5 = 0;
      do {
        FUN_0019e1a0(param_1,*param_9,param_9[1],param_9[3],param_9[4]);
        iVar5 = iVar5 + 1;
        param_9 = param_9 + 5;
      } while (iVar5 < param_7);
    }
  }
  return;
}


