/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181464  Symbol: FUN_00181464 */

/* WARNING: Type propagation algorithm not settling */

int FUN_00181464(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = DAT_00181690 + 0x181474;
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) &&
       (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) <= DAT_00181694)) {
      FUN_0017cc50(param_1);
    }
  }
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  pcVar3 = *(char **)(iVar2 + 0x10);
  if (*pcVar3 == 'S') {
    if (pcVar3[1] != 'Y') {
      return 0;
    }
    if (pcVar3[2] != 'S') {
      return 0;
    }
    if (pcVar3[3] != 'T') {
      return 0;
    }
    if (pcVar3[4] != 'E') {
      return 0;
    }
    if (pcVar3[5] != 'M') {
      return 0;
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 6;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    iVar2 = DAT_00181698;
  }
  else {
    if (*pcVar3 != 'P') {
      return 0;
    }
    if (pcVar3[1] != 'U') {
      return 0;
    }
    if (pcVar3[2] != 'B') {
      return 0;
    }
    if (pcVar3[3] != 'L') {
      return 0;
    }
    if (pcVar3[4] != 'I') {
      return 0;
    }
    if (pcVar3[5] != 'C') {
      return 0;
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 6;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
      FUN_0017bae0(param_1,0x41,iVar4 + DAT_0018169c,cVar1,param_4);
    }
    FUN_0017ff44(param_1);
    iVar2 = FUN_0017cdd4(param_1);
    *param_2 = iVar2;
    if (iVar2 == 0) {
      FUN_0017b7fc(param_1,0x47,0);
    }
    if (param_3 == 0) {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      cVar1 = *pcVar3;
      if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
        return 0;
      }
      for (; ((cVar1 = *pcVar3, (byte)(cVar1 - 9U) < 2 || (cVar1 == ' ')) || (cVar1 == '\r'));
          pcVar3 = pcVar3 + 1) {
      }
      if ((cVar1 != '\"') && (cVar1 != '\'')) {
        return 0;
      }
      goto LAB_0018166a;
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    iVar2 = DAT_001816a0;
  }
  if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
    FUN_0017bae0(param_1,0x41,iVar4 + iVar2,cVar1,param_4);
  }
LAB_0018166a:
  FUN_0017ff44(param_1);
  iVar4 = FUN_0017ed28(param_1);
  if (iVar4 == 0) {
    FUN_0017b7fc(param_1,0x46,0);
    return 0;
  }
  return iVar4;
}


