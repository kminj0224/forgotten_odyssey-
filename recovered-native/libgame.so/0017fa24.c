/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017fa24  Symbol: FUN_0017fa24 */

int FUN_0017fa24(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_0017fbb0 + 0x17fa32;
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  if (**(char **)(param_1[9] + 0x10) != '&') {
    return 0;
  }
  FUN_0017a4a4(param_1);
  iVar1 = FUN_0017f6b8(param_1);
  if (iVar1 == 0) {
    FUN_0017bae0(param_1,0x44,iVar6 + DAT_0017fbb4);
    return 0;
  }
  if (**(char **)(param_1[9] + 0x10) != ';') {
    FUN_0017b7fc(param_1,0x17,0,*(char **)(param_1[9] + 0x10),param_4);
    return 0;
  }
  FUN_0017a4a4(param_1);
  if ((-1 < param_1[0x5a] << 0xb) && (iVar2 = FUN_001a256c(iVar1), iVar2 != 0)) {
    return iVar2;
  }
  param_1[0x6e] = param_1[0x6e] + 1;
  if ((*param_1 == 0) ||
     ((((pcVar4 = *(code **)(*param_1 + 0x14), pcVar4 == (code *)0x0 ||
        (iVar2 = (*pcVar4)(param_1[1],iVar1), iVar2 == 0)) &&
       ((param_1[3] != 1 ||
        ((-1 < param_1[0x5a] << 0xb || (iVar2 = FUN_001a256c(iVar1), iVar2 == 0)))))) &&
      ((param_1[3] != 1 ||
       (((int *)param_1[1] != param_1 || (iVar2 = FUN_0019f210(param_1,iVar1), iVar2 == 0)))))))) {
    if ((param_1[7] == 1) || ((param_1[0x16] == 0 && (param_1[0x17] == 0)))) {
      FUN_0017b798(param_1,0x1a,iVar6 + DAT_0017fbb8,iVar1);
    }
    else {
      FUN_0017bf54(param_1,0x1b,iVar6 + DAT_0017fbb8,iVar1);
      if (((param_1[0x36] == 0) && (*param_1 != 0)) &&
         (pcVar4 = *(code **)(*param_1 + 0x40), pcVar4 != (code *)0x0)) {
        (*pcVar4)(param_1[1],iVar1);
      }
    }
    param_1[0x19] = 0;
    return 0;
  }
  iVar5 = *(int *)(iVar2 + 0x30);
  if (iVar5 == 3) {
    uVar3 = 0x1c;
    iVar6 = iVar6 + DAT_0017fbbc;
    goto LAB_0017fba6;
  }
  if (param_1[0x2b] == 0xc) {
    if (iVar5 == 2) {
      uVar3 = 0x1d;
      iVar6 = iVar6 + DAT_0017fbc0;
      goto LAB_0017fba6;
    }
    if (((*(int *)(iVar2 + 0x28) != 0) && (iVar5 != 6)) &&
       (iVar5 = FUN_0019c42c(*(int *)(iVar2 + 0x28),0x3c), iVar5 != 0)) {
      uVar3 = 0x26;
      iVar6 = iVar6 + DAT_0017fbc4;
      goto LAB_0017fba6;
    }
  }
  if (1 < *(int *)(iVar2 + 0x30) - 4U) {
    return iVar2;
  }
  iVar6 = iVar6 + DAT_0017fbc8;
  uVar3 = 0x1e;
LAB_0017fba6:
  FUN_0017b798(param_1,uVar3,iVar6,iVar1);
  return iVar2;
}


