/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00185b64  Symbol: FUN_00185b64 */

undefined4 FUN_00185b64(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  iVar6 = DAT_00185cec + 0x185b70;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_1[9] == 0) {
    return 0xffffffff;
  }
  FUN_0019da48();
  FUN_0017c4fc(param_1);
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x2c), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1[1],*(undefined4 *)(iVar6 + DAT_00185cf0));
  }
  iVar4 = param_1[9];
  if (3 < *(int *)(iVar4 + 0x14) - (int)*(undefined **)(iVar4 + 0x10)) {
    local_14 = **(undefined **)(iVar4 + 0x10);
    local_13 = *(undefined *)(*(int *)(iVar4 + 0x10) + 1);
    local_12 = *(undefined *)(*(int *)(iVar4 + 0x10) + 2);
    local_11 = *(undefined *)(*(int *)(iVar4 + 0x10) + 3);
    iVar4 = FUN_001a2fd8(&local_14,4);
    if (iVar4 != 0) {
      FUN_00179fd4(param_1,iVar4);
    }
  }
  if (**(char **)(param_1[9] + 0x10) == '\0') {
    FUN_0017b7fc(param_1,4,0);
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  pcVar5 = *(char **)(param_1[9] + 0x10);
  if ((((*pcVar5 == '<') && (pcVar5[1] == '?')) && (pcVar5[2] == 'x')) &&
     (((pcVar5[3] == 'm' && (pcVar5[4] == 'l')) &&
      ((cVar1 = pcVar5[5], (byte)(cVar1 - 9U) < 2 || ((cVar1 == ' ' || (cVar1 == '\r')))))))) {
    FUN_00180f14(param_1);
    if (param_1[0x15] == 0x20) {
      return 0xffffffff;
    }
    FUN_0017ff44(param_1);
  }
  else {
    iVar6 = FUN_0019c870(iVar6 + DAT_00185cf4);
    param_1[5] = iVar6;
  }
  if (((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x30), pcVar3 != (code *)0x0)) &&
     (param_1[0x35] == 0)) {
    (*pcVar3)(param_1[1]);
  }
  param_1[0x45] = 0;
  param_1[0x3e] = 0;
  param_1[0x2b] = 7;
  param_1[0x1a] = 0;
  FUN_00184ed0(param_1);
  cVar1 = **(char **)(param_1[9] + 0x10);
  if (cVar1 == '<') {
    if ((*(char **)(param_1[9] + 0x10))[1] != '/') goto LAB_00185cc2;
    uVar2 = 0x55;
  }
  else {
    if (cVar1 == '\0') goto LAB_00185ccc;
LAB_00185cc2:
    uVar2 = 0x56;
  }
  FUN_0017b7fc(param_1,uVar2,0);
LAB_00185ccc:
  if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x34), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1[1]);
  }
  if (param_1[3] == 0) {
    return 0xffffffff;
  }
  return 0;
}


