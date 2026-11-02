/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001809a0  Symbol: FUN_001809a0 */

undefined4 FUN_001809a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  FUN_0017ff44();
  pcVar4 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (*pcVar4 != 's') {
    return 0xfffffffe;
  }
  if (pcVar4[1] != 't') {
    return 0xfffffffe;
  }
  if (pcVar4[2] != 'a') {
    return 0xfffffffe;
  }
  if (pcVar4[3] != 'n') {
    return 0xfffffffe;
  }
  if (pcVar4[4] != 'd') {
    return 0xfffffffe;
  }
  if (pcVar4[5] != 'a') {
    return 0xfffffffe;
  }
  if (pcVar4[6] != 'l') {
    return 0xfffffffe;
  }
  if (pcVar4[7] != 'o') {
    return 0xfffffffe;
  }
  if (pcVar4[8] != 'n') {
    return 0xfffffffe;
  }
  if (pcVar4[9] != 'e') {
    return 0xfffffffe;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 10;
  *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 10;
  *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 10;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
     (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
    FUN_0017c6c4(param_1);
  }
  FUN_0017ff44(param_1);
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '=') {
    uVar3 = 0x4b;
LAB_00180c26:
    FUN_0017b7fc(param_1,uVar3,0);
    return 0xfffffffe;
  }
  FUN_0017a4a4(param_1);
  FUN_0017ff44(param_1);
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 != '\'') {
    if (cVar1 != '\"') {
      uVar3 = 0x21;
      goto LAB_00180c26;
    }
    FUN_0017a4a4(param_1);
    iVar2 = *(int *)(param_1 + 0x24);
    pcVar4 = *(char **)(iVar2 + 0x10);
    if (*pcVar4 == 'n') {
      if (pcVar4[1] == 'o') {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 2;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
          FUN_0017c6c4(param_1);
        }
        uVar3 = 0;
      }
      else {
LAB_00180bee:
        FUN_0017b7fc(param_1,0x4e,0);
        uVar3 = 0xfffffffe;
      }
    }
    else {
      if (((*pcVar4 != 'y') || (pcVar4[1] != 'e')) || (pcVar4[2] != 's')) goto LAB_00180bee;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 3;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
        FUN_0017c6c4(param_1);
      }
      uVar3 = 1;
    }
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\"') goto LAB_00180c0e;
    goto LAB_00180c1a;
  }
  FUN_0017a4a4(param_1);
  iVar2 = *(int *)(param_1 + 0x24);
  pcVar4 = *(char **)(iVar2 + 0x10);
  if (*pcVar4 == 'n') {
    if (pcVar4[1] == 'o') {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
        FUN_0017c6c4(param_1);
      }
      uVar3 = 0;
    }
    else {
LAB_00180b1a:
      FUN_0017b7fc(param_1,0x4e,0);
      uVar3 = 0xfffffffe;
    }
  }
  else {
    if (((*pcVar4 != 'y') || (pcVar4[1] != 'e')) || (pcVar4[2] != 's')) goto LAB_00180b1a;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 3;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    uVar3 = 1;
  }
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\'') {
LAB_00180c0e:
    FUN_0017b7fc(param_1,0x22,0);
    return uVar3;
  }
LAB_00180c1a:
  FUN_0017a4a4(param_1);
  return uVar3;
}


