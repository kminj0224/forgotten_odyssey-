/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018cb30  Symbol: FUN_0018cb30 */

void * FUN_0018cb30(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  
  iVar8 = DAT_0018cd10 + 0x18cb3c;
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (*(uint *)(param_1 + 4) < 0x13) {
    uVar1 = 1 << (*(uint *)(param_1 + 4) & 0xff);
    if ((uVar1 & DAT_0018cd14) != 0) {
      return (void *)0x0;
    }
    if ((int)(uVar1 << 0xd) < 0) {
      pvVar2 = (void *)FUN_0018a630(param_1);
      return pvVar2;
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      pvVar2 = (void *)FUN_0018c9a8(param_2,param_3,param_1);
      return pvVar2;
    }
  }
  pvVar2 = (void *)(***(code ***)(iVar8 + DAT_0018cd18))(0x3c);
  if (pvVar2 == (void *)0x0) {
    FUN_001898e8(iVar8 + DAT_0018cd1c);
    return (void *)0x0;
  }
  memset(pvVar2,0,0x3c);
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(int *)((int)pvVar2 + 0x20) = param_2;
  iVar6 = DAT_0018cd20;
  *(undefined4 *)((int)pvVar2 + 4) = uVar4;
  iVar5 = *(int *)(param_1 + 8);
  *(int *)((int)pvVar2 + 0x14) = param_3;
  iVar6 = iVar8 + iVar6;
  if (((iVar5 == iVar6 + 8) || (iVar5 == iVar6 + 0x10)) || (iVar5 == iVar6)) {
    *(int *)((int)pvVar2 + 8) = iVar5;
  }
  else if (iVar5 != 0) {
    if ((param_2 == 0) || (*(int *)(param_2 + 0x50) == 0)) {
      uVar4 = FUN_0019c904(iVar5);
    }
    else {
      uVar4 = FUN_0019d178(*(int *)(param_2 + 0x50),iVar5,0xffffffff);
    }
    *(undefined4 *)((int)pvVar2 + 8) = uVar4;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 1) {
    *(undefined2 *)((int)pvVar2 + 0x38) = *(undefined2 *)(param_1 + 0x38);
  }
  else if (((*(int *)(param_1 + 0x28) != 0) && (iVar6 != 5)) && ((iVar6 != 0x14 && (iVar6 != 0x13)))
          ) {
    uVar4 = FUN_0019c904();
    *(undefined4 *)((int)pvVar2 + 0x28) = uVar4;
  }
  if (param_3 != 0) {
    if ((*(int *)(iVar8 + DAT_0018cd24 + 4) != 0) &&
       (**(code ***)(iVar8 + DAT_0018cd28) != (code *)0x0)) {
      (***(code ***)(iVar8 + DAT_0018cd28))(pvVar2);
    }
    pvVar3 = (void *)FUN_0018c194(param_3,pvVar2);
    if (pvVar3 != pvVar2) {
      return pvVar3;
    }
  }
  if (param_4 == 0) goto LAB_0018cce4;
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar4 = FUN_0018a630();
    *(undefined4 *)((int)pvVar2 + 0x30) = uVar4;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar6 = FUN_00189e8c(param_2,pvVar2,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc));
    if (iVar6 == 0) {
      iVar6 = FUN_00189e8c(*(undefined4 *)(param_1 + 0x20),param_1,
                           *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc));
      pvVar3 = pvVar2;
      if (iVar6 == 0) goto LAB_0018cc80;
      do {
        pvVar7 = pvVar3;
        pvVar3 = *(void **)((int)pvVar7 + 0x14);
      } while (pvVar3 != (void *)0x0);
      iVar6 = FUN_0018a4ec(pvVar7,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
    }
    *(int *)((int)pvVar2 + 0x24) = iVar6;
  }
LAB_0018cc80:
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar4 = FUN_0018cafc(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x2c) = uVar4;
  }
  if (*(int *)(param_1 + 4) == 5) {
    if ((param_2 == 0) || (*(int *)(param_1 + 0x20) != param_2)) {
      uVar4 = FUN_001a2628(param_2,*(undefined4 *)((int)pvVar2 + 8));
      *(undefined4 *)((int)pvVar2 + 0xc) = uVar4;
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)((int)pvVar2 + 0xc);
  }
  else if ((param_4 != 2) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar6 = FUN_0018cd2c(*(int *)(param_1 + 0xc),param_2,pvVar2);
    *(int *)((int)pvVar2 + 0xc) = iVar6;
    if (iVar6 != 0) {
      while (*(int *)(iVar6 + 0x18) != 0) {
        *(void **)(iVar6 + 0x14) = pvVar2;
        iVar6 = *(int *)(iVar6 + 0x18);
      }
      *(void **)(iVar6 + 0x14) = pvVar2;
    }
    *(int *)((int)pvVar2 + 0x10) = iVar6;
  }
LAB_0018cce4:
  if (param_3 != 0) {
    return pvVar2;
  }
  if (*(int *)(iVar8 + DAT_0018cd24 + 4) != 0) {
    if (**(code ***)(iVar8 + DAT_0018cd28) != (code *)0x0) {
      (***(code ***)(iVar8 + DAT_0018cd28))(pvVar2);
      return pvVar2;
    }
    return pvVar2;
  }
  return pvVar2;
}


