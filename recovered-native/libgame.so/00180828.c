/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180828  Symbol: FUN_00180828 */

void FUN_00180828(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  
  iVar5 = DAT_00180984 + 0x180838;
  if (param_1[0x49] == 0) {
    if (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa) {
      FUN_0017c738(param_1);
    }
  }
  iVar3 = param_1[9];
  if ((**(char **)(iVar3 + 0x10) == '<') && ((*(char **)(iVar3 + 0x10))[1] == '/')) {
    param_1[0x32] = param_1[0x32] + 2;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 2;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar3 = FUN_0017a2bc(param_1[9],0xfa), iVar3 < 1)) {
      FUN_0017c6c4(param_1);
    }
    iVar3 = FUN_0017f910(param_1,param_1[0x2e]);
    if (param_1[0x49] == 0) {
      if (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa) {
        FUN_0017c738(param_1);
      }
    }
    FUN_0017ff44(param_1);
    iVar2 = param_1[9];
    bVar1 = **(byte **)(iVar2 + 0x10);
    if (((((byte)(bVar1 - 9) < 2) || (bVar1 == 0xd)) || (0x1f < bVar1)) && (bVar1 == 0x3e)) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
      param_1[0x32] = param_1[0x32] + 1;
      if (**(char **)(param_1[9] + 0x10) == '\0') {
        FUN_0017a2bc(param_1[9],0xfa);
      }
    }
    else {
      FUN_0017b7fc(param_1,0x49,0);
    }
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        iVar3 = iVar5 + DAT_0018098c;
      }
      FUN_0017bcb4(param_1,0x4c,iVar5 + DAT_00180990,param_1[0x2e],param_2,iVar3);
    }
    if (((*param_1 != 0) && (pcVar4 = *(code **)(*param_1 + 0x3c), pcVar4 != (code *)0x0)) &&
       (param_1[0x35] == 0)) {
      (*pcVar4)(param_1[1],param_1[0x2e]);
    }
    FUN_0017ad98(param_1);
    FUN_0017add8(param_1);
  }
  else {
    FUN_0017bae0(param_1,0x4a,iVar5 + DAT_00180988);
  }
  return;
}


