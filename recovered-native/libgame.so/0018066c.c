/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018066c  Symbol: FUN_0018066c */

void FUN_0018066c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  iVar5 = DAT_0018081c + 0x180682;
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  iVar4 = param_1[9];
  if ((**(char **)(iVar4 + 0x10) != '<') || ((*(char **)(iVar4 + 0x10))[1] != '/')) {
    FUN_0017b7fc(param_1,0x4a,0);
    return;
  }
  param_1[0x32] = param_1[0x32] + 2;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar4 = FUN_0017a2bc(param_1[9],0xfa), iVar4 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  if ((param_6 < 1) ||
     (iVar4 = FUN_0019ca64(*(undefined4 *)(param_1[9] + 0x10),param_1[0x2e],param_6), iVar4 != 0)) {
    if (param_2 == 0) {
      iVar4 = FUN_0017f910(param_1,param_1[0x2e]);
    }
    else {
      iVar4 = FUN_0017f984(param_1,param_1[0x2e],param_2);
    }
  }
  else {
    iVar4 = param_1[9];
    pcVar2 = (char *)(*(int *)(iVar4 + 0x10) + param_6);
    if (*pcVar2 == '>') {
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + param_6 + 1;
      goto LAB_001807de;
    }
    *(char **)(iVar4 + 0x10) = pcVar2;
    iVar4 = 1;
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  FUN_0017ff44(param_1);
  iVar3 = param_1[9];
  bVar1 = **(byte **)(iVar3 + 0x10);
  if (((((byte)(bVar1 - 9) < 2) || (bVar1 == 0xd)) || (0x1f < bVar1)) && (bVar1 == 0x3e)) {
    *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
    param_1[0x32] = param_1[0x32] + 1;
    if (**(char **)(param_1[9] + 0x10) == '\0') {
      FUN_0017a2bc(param_1[9],0xfa);
    }
  }
  else {
    FUN_0017b7fc(param_1,0x49,0);
  }
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      iVar4 = iVar5 + DAT_00180820;
    }
    FUN_0017bcb4(param_1,0x4c,iVar5 + DAT_00180824,param_1[0x2e],param_4,iVar4);
  }
LAB_001807de:
  if (((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x78), pcVar6 != (code *)0x0)) &&
     (param_1[0x35] == 0)) {
    (*pcVar6)(param_1[1],param_1[0x2e],param_2,param_3);
  }
  FUN_0017add8(param_1);
  if (param_5 != 0) {
    FUN_0017acd0(param_1,param_5);
  }
  return;
}


