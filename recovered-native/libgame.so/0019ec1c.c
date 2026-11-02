/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ec1c  Symbol: FUN_0019ec1c */

void FUN_0019ec1c(int param_1,int param_2,char **param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char **ppcVar7;
  int iVar8;
  int local_1c [2];
  
  iVar4 = DAT_0019ee5c + 0x19ec28;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x34);
  if (((*(int *)(param_1 + 0x68) != 0) && (*(int *)(iVar5 + 0x30) == 0)) &&
     ((iVar5 = *(int *)(iVar5 + 0x2c), iVar5 == 0 ||
      ((((*(int *)(iVar5 + 0x24) == 0 && (*(int *)(iVar5 + 0x28) == 0)) &&
        (*(int *)(iVar5 + 0x2c) == 0)) && (*(int *)(iVar5 + 0x30) == 0)))))) {
    FUN_0019e068(param_1,0x5e,iVar4 + DAT_0019ee60,0,0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar1 = FUN_0017d590(param_1,param_2,local_1c);
  iVar5 = FUN_0018c828(*(undefined4 *)(param_1 + 8),0,uVar1,0);
  if (iVar5 == 0) {
    if (local_1c[0] != 0) {
      (***(code ***)(iVar4 + DAT_0019ee64))();
    }
    FUN_0019d7d4(param_1,iVar4 + DAT_0019ee68);
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar6 == 0) {
    FUN_0018c194(*(int *)(param_1 + 8),iVar5);
  }
  else if (iVar8 == 0) {
    iVar8 = iVar6;
  }
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
    if (DAT_0019ee6c < iVar6) {
      *(undefined2 *)(iVar5 + 0x38) = 0xffff;
    }
    else {
      *(short *)(iVar5 + 0x38) = (short)iVar6;
    }
  }
  FUN_0017becc(param_1,iVar5);
  if (iVar8 != 0) {
    if (*(int *)(iVar8 + 4) == 1) {
      FUN_0018c194(iVar8,iVar5);
    }
    else {
      FUN_0018c31c(iVar8,iVar5);
    }
  }
  if ((*(int *)(param_1 + 0x20) == 0) &&
     ((*(int *)(*(int *)(param_1 + 8) + 0x2c) != 0 || (*(int *)(*(int *)(param_1 + 8) + 0x30) != 0))
     )) {
    FUN_0019ea14(param_1,uVar1,local_1c[0],param_3);
  }
  if (param_3 != (char **)0x0) {
    pcVar2 = *param_3;
    pcVar3 = param_3[1];
    ppcVar7 = param_3;
    if (*(int *)(param_1 + 0x20) == 0) {
      while ((pcVar3 != (char *)0x0 && (pcVar2 != (char *)0x0))) {
        if (((*pcVar2 == 'x') && (((pcVar2[1] == 'm' && (pcVar2[2] == 'l')) && (pcVar2[3] == 'n'))))
           && (pcVar2[4] == 's')) {
          FUN_0019e5d4(param_1,pcVar2,pcVar3,local_1c[0]);
        }
        pcVar3 = ppcVar7[3];
        pcVar2 = ppcVar7[2];
        ppcVar7 = ppcVar7 + 2;
      }
    }
  }
  iVar6 = FUN_00189e8c(*(undefined4 *)(param_1 + 8),iVar5,local_1c[0]);
  if ((iVar6 == 0) && (iVar8 != 0)) {
    iVar6 = FUN_00189e8c(*(undefined4 *)(param_1 + 8),iVar8,local_1c[0]);
  }
  if (iVar6 == 0) {
    if (local_1c[0] == 0) goto LAB_0019edec;
    iVar6 = FUN_0018a4ec(iVar5,0);
    FUN_0019e100(param_1,0xc9,iVar4 + DAT_0019ee70,local_1c[0],0);
    if (iVar6 == 0) goto LAB_0019edec;
  }
  if ((*(char **)(iVar6 + 8) != (char *)0x0) &&
     ((**(char **)(iVar6 + 8) != '\0' || (*(int *)(iVar6 + 0xc) != 0)))) {
    FUN_0018950c(iVar5,iVar6);
  }
LAB_0019edec:
  if (param_3 != (char **)0x0) {
    pcVar2 = *param_3;
    pcVar3 = param_3[1];
    param_3 = param_3 + 2;
    if (*(int *)(param_1 + 0x20) == 0) {
      while ((pcVar3 != (char *)0x0 && (pcVar2 != (char *)0x0))) {
        if ((*pcVar2 != 'x') ||
           ((((pcVar2[1] != 'm' || (pcVar2[2] != 'l')) || (pcVar2[3] != 'n')) || (pcVar2[4] != 's'))
           )) {
          FUN_0019e5d4(param_1,pcVar2,pcVar3,0);
        }
        pcVar3 = param_3[1];
        pcVar2 = *param_3;
        param_3 = param_3 + 2;
      }
    }
    else {
      while (pcVar2 != (char *)0x0) {
        FUN_0019e5d4(param_1,pcVar2,pcVar3,0);
        pcVar3 = param_3[1];
        pcVar2 = *param_3;
        param_3 = param_3 + 2;
      }
    }
  }
  if (local_1c[0] != 0) {
    (***(code ***)(iVar4 + DAT_0019ee64))();
  }
  return;
}


