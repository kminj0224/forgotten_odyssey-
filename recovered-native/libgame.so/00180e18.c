/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180e18  Symbol: FUN_00180e18 */

undefined4 FUN_00180e18(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  pcVar4 = *(char **)(iVar3 + 0x10);
  if (((((*pcVar4 == 'v') && (pcVar4[1] == 'e')) && (pcVar4[2] == 'r')) &&
      ((pcVar4[3] == 's' && (pcVar4[4] == 'i')))) && ((pcVar4[5] == 'o' && (pcVar4[6] == 'n')))) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 7;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 7;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 7;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
      FUN_0017c6c4(param_1);
    }
    FUN_0017ff44(param_1);
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '=') {
      FUN_0017a4a4(param_1);
      FUN_0017ff44(param_1);
      cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if (cVar1 == '\"') {
        FUN_0017a4a4(param_1);
        uVar2 = FUN_0017cb6c(param_1);
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\"') {
LAB_00180eee:
          FUN_0017b7fc(param_1,0x22,0);
          return uVar2;
        }
LAB_00180efa:
        FUN_0017a4a4(param_1);
        return uVar2;
      }
      if (cVar1 == '\'') {
        FUN_0017a4a4(param_1);
        uVar2 = FUN_0017cb6c(param_1);
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\'') goto LAB_00180eee;
        goto LAB_00180efa;
      }
      uVar2 = 0x21;
    }
    else {
      uVar2 = 0x4b;
    }
    FUN_0017b7fc(param_1,uVar2,0);
  }
  return 0;
}


