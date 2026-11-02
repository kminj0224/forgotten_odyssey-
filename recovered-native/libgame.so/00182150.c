/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182150  Symbol: FUN_00182150 */

undefined4 FUN_00182150(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_1c [2];
  
  local_1c[0] = 0;
  iVar7 = param_1[9];
  pcVar5 = *(char **)(iVar7 + 0x10);
  iVar6 = DAT_00182408 + 0x182164;
  if (*pcVar5 != '<') {
    return 0xffffffff;
  }
  if (pcVar5[1] != '!') {
    return 0xffffffff;
  }
  if (pcVar5[2] != 'E') {
    return 0xffffffff;
  }
  if (pcVar5[3] != 'L') {
    return 0xffffffff;
  }
  if (pcVar5[4] != 'E') {
    return 0xffffffff;
  }
  if (pcVar5[5] != 'M') {
    return 0xffffffff;
  }
  if (pcVar5[6] != 'E') {
    return 0xffffffff;
  }
  if (pcVar5[7] != 'N') {
    return 0xffffffff;
  }
  if (pcVar5[8] != 'T') {
    return 0xffffffff;
  }
  param_1[0x32] = param_1[0x32] + 9;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 9;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 9;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar2 = FUN_0017a2bc(param_1[9],0xfa), iVar2 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  cVar1 = **(char **)(param_1[9] + 0x10);
  if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
    FUN_0017bae0(param_1,0x41,iVar6 + DAT_0018240c);
  }
  FUN_0017ff44(param_1);
  iVar2 = FUN_0017f6b8(param_1);
  if (iVar2 == 0) {
    uVar3 = 0x44;
    iVar6 = iVar6 + DAT_00182410;
    goto LAB_00182358;
  }
  while ((cVar1 = **(char **)(param_1[9] + 0x10), cVar1 == '\0' && (1 < param_1[10]))) {
    FUN_0017c6c4(param_1);
  }
  if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
    FUN_0017bae0(param_1,0x41,iVar6 + DAT_00182414);
  }
  FUN_0017ff44(param_1);
  iVar4 = param_1[9];
  pcVar5 = *(char **)(iVar4 + 0x10);
  cVar1 = *pcVar5;
  if (cVar1 == 'E') {
    if ((((pcVar5[1] != 'M') || (pcVar5[2] != 'P')) || (pcVar5[3] != 'T')) || (pcVar5[4] != 'Y'))
    goto LAB_00182350;
    param_1[0x32] = param_1[0x32] + 5;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 5;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 5;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar4 = FUN_0017a2bc(param_1[9],0xfa), iVar4 < 1)) {
      FUN_0017c6c4(param_1);
    }
    uVar3 = 1;
  }
  else if (cVar1 == 'A') {
    if ((pcVar5[1] != 'N') || (pcVar5[2] != 'Y')) {
LAB_00182350:
      uVar3 = 0x36;
      iVar6 = iVar6 + DAT_0018241c;
LAB_00182358:
      FUN_0017bae0(param_1,uVar3,iVar6);
      return 0xffffffff;
    }
    param_1[0x32] = param_1[0x32] + 3;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 3;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 3;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar4 = FUN_0017a2bc(param_1[9],0xfa), iVar4 < 1)) {
      FUN_0017c6c4(param_1);
    }
    uVar3 = 2;
  }
  else {
    if (cVar1 != '(') {
      if (((cVar1 == '%') && (param_1[0x18] == 0)) && (param_1[10] == 1)) {
        uVar3 = 0x15;
        iVar6 = iVar6 + DAT_00182418;
        goto LAB_00182358;
      }
      goto LAB_00182350;
    }
    uVar3 = FUN_00182098(param_1,iVar2,local_1c);
  }
  FUN_0017ff44(param_1);
  while ((**(char **)(param_1[9] + 0x10) == '\0' && (1 < param_1[10]))) {
    FUN_0017c6c4(param_1);
  }
  FUN_0017ff44(param_1);
  if (**(char **)(param_1[9] + 0x10) == '>') {
    if (iVar7 != param_1[9]) {
      FUN_0017bae0(param_1,0x5a,iVar6 + DAT_00182420);
    }
    FUN_0017a4a4(param_1);
    if (((*param_1 != 0) && (param_1[0x35] == 0)) && (*(int *)(*param_1 + 0x24) != 0)) {
      if (local_1c[0] != 0) {
        *(undefined4 *)(local_1c[0] + 0x14) = 0;
      }
      (**(code **)(*param_1 + 0x24))(param_1[1],iVar2,uVar3,local_1c[0]);
      if (local_1c[0] == 0) {
        return uVar3;
      }
      if (*(int *)(local_1c[0] + 0x14) != 0) {
        return uVar3;
      }
      goto LAB_001823f4;
    }
  }
  else {
    FUN_0017b7fc(param_1,0x49,0);
  }
  if (local_1c[0] == 0) {
    return uVar3;
  }
LAB_001823f4:
  FUN_0019541c(param_1[2]);
  return uVar3;
}


