/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018113c  Symbol: FUN_0018113c */

void FUN_0018113c(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  iVar4 = DAT_001812ec + 0x18114a;
  if (((((*pcVar3 != '<') || (pcVar3[1] != '?')) || (pcVar3[2] != 'x')) ||
      ((pcVar3[3] != 'm' || (pcVar3[4] != 'l')))) ||
     ((cVar1 = pcVar3[5], 1 < (byte)(cVar1 - 9U) && ((cVar1 != ' ' && (cVar1 != '\r')))))) {
    FUN_0017b7fc(param_1,0x38,0);
    return;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 5;
  *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 5;
  *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 5;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
     (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
    FUN_0017c6c4(param_1);
  }
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
    FUN_0017bae0(param_1,0x41,iVar4 + DAT_001812f0);
  }
  FUN_0017ff44(param_1);
  iVar2 = FUN_00180e18(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_0019c870(iVar4 + DAT_001812f4);
  }
  else {
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
      FUN_0017bae0(param_1,0x41,iVar4 + DAT_001812f8);
    }
  }
  *(int *)(*(int *)(param_1 + 0x24) + 0x30) = iVar2;
  iVar2 = FUN_00180c34(param_1);
  if (*(int *)(param_1 + 0x54) == 0x20) {
    return;
  }
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x54) == 0)) {
    FUN_0017bae0(param_1,0x65,iVar4 + DAT_001812fc);
  }
  FUN_0017ff44(param_1);
  iVar4 = *(int *)(param_1 + 0x24);
  cVar1 = **(char **)(iVar4 + 0x10);
  if (cVar1 == '?') {
    if ((*(char **)(iVar4 + 0x10))[1] == '>') {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\0') {
        return;
      }
      iVar4 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa);
      if (0 < iVar4) {
        return;
      }
      FUN_0017c6c4(param_1);
      return;
    }
  }
  else if (cVar1 == '>') {
    FUN_0017b7fc(param_1,0x39,0);
    goto LAB_001812e4;
  }
  FUN_0017b7fc(param_1,0x39,0);
  while( true ) {
    pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    cVar1 = *pcVar3;
    if ((cVar1 == '>') || (cVar1 == '\0')) break;
    *(char **)(*(int *)(param_1 + 0x24) + 0x10) = pcVar3 + 1;
  }
LAB_001812e4:
  FUN_0017a4a4(param_1);
  return;
}


