/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180f14  Symbol: FUN_00180f14 */

void FUN_00180f14(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x34) = 0xfffffffe;
  iVar5 = DAT_00181124;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 5;
  iVar5 = iVar5 + 0x180f34;
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
    FUN_0017bae0(param_1,0x41,iVar5 + DAT_00181128);
  }
  FUN_0017ff44(param_1);
  pcVar3 = (char *)FUN_00180e18(param_1);
  if (pcVar3 == (char *)0x0) {
    FUN_0017b7fc(param_1,0x60,0);
  }
  else {
    iVar2 = FUN_0019c30c(pcVar3,iVar5 + DAT_0018112c);
    if (iVar2 == 0) {
      if (((*(int *)(param_1 + 0x168) << 0xe < 0) || (*pcVar3 != '1')) || (pcVar3[1] != '.')) {
        FUN_0017b798(param_1,0x6c,iVar5 + DAT_00181130,pcVar3);
      }
      else {
        FUN_0017dcec(param_1,0x61,iVar5 + DAT_00181130,pcVar3);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      (***(code ***)(iVar5 + DAT_00181134))();
    }
    *(char **)(param_1 + 0x14) = pcVar3;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  cVar1 = **(char **)(iVar2 + 0x10);
  if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
    if ((cVar1 == '?') && ((*(char **)(iVar2 + 0x10))[1] == '>')) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 2;
      goto LAB_001810b8;
    }
    FUN_0017bae0(param_1,0x41,iVar5 + DAT_00181138);
  }
  FUN_00180c34(param_1);
  if (*(int *)(param_1 + 0x54) == 0x20) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    cVar1 = **(char **)(iVar2 + 0x10);
    if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (cVar1 == '\r')) goto LAB_00181082;
    if ((cVar1 != '?') || ((*(char **)(iVar2 + 0x10))[1] != '>')) {
      FUN_0017bae0(param_1,0x41,iVar5 + DAT_00181138);
      goto LAB_00181082;
    }
LAB_001810a8:
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 2;
LAB_001810b8:
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar5 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar5 < 1)) {
      FUN_0017c6c4(param_1);
    }
    return;
  }
LAB_00181082:
  FUN_0017ff44(param_1);
  iVar5 = *(int *)(param_1 + 0x24);
  uVar4 = FUN_001809a0(param_1);
  *(undefined4 *)(iVar5 + 0x34) = uVar4;
  FUN_0017ff44(param_1);
  iVar2 = *(int *)(param_1 + 0x24);
  cVar1 = **(char **)(iVar2 + 0x10);
  if (cVar1 == '?') {
    if ((*(char **)(iVar2 + 0x10))[1] == '>') goto LAB_001810a8;
  }
  else if (cVar1 == '>') {
    FUN_0017b7fc(param_1,0x39,0);
    goto LAB_0018111a;
  }
  FUN_0017b7fc(param_1,0x39,0);
  while( true ) {
    pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    cVar1 = *pcVar3;
    if ((cVar1 == '>') || (cVar1 == '\0')) break;
    *(char **)(*(int *)(param_1 + 0x24) + 0x10) = pcVar3 + 1;
  }
LAB_0018111a:
  FUN_0017a4a4(param_1);
  return;
}


