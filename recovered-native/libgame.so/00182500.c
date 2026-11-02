/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182500  Symbol: FUN_00182500 */

undefined4 FUN_00182500(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
       (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_00182804)) {
      FUN_0017cc50(param_1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x24);
  pcVar4 = *(char **)(iVar3 + 0x10);
  cVar1 = *pcVar4;
  if (cVar1 == 'C') {
    if ((((pcVar4[1] == 'D') && (pcVar4[2] == 'A')) && (pcVar4[3] == 'T')) && (pcVar4[4] == 'A')) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 5;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 5;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 5;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
        FUN_0017c6c4(param_1);
      }
      return 1;
    }
  }
  else if (cVar1 == 'I') {
    if (pcVar4[1] == 'D') {
      if (pcVar4[2] == 'R') {
        if (((pcVar4[3] == 'E') && (pcVar4[4] == 'F')) && (pcVar4[5] == 'S')) {
          *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 6;
          *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
          if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
            FUN_0017dd5c(param_1);
          }
          if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
             (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
            FUN_0017c6c4(param_1);
          }
          return 4;
        }
        if ((pcVar4[3] == 'E') && (pcVar4[4] == 'F')) {
          *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 5;
          *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 5;
          *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 5;
          if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
            FUN_0017dd5c(param_1);
          }
          if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
             (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
            FUN_0017c6c4(param_1);
          }
          return 3;
        }
      }
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
        FUN_0017c6c4(param_1);
      }
      return 2;
    }
  }
  else if (cVar1 == 'E') {
    if ((pcVar4[1] == 'N') && (pcVar4[2] == 'T')) {
      if ((pcVar4[3] == 'I') && ((pcVar4[4] == 'T' && (pcVar4[5] == 'Y')))) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 6;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
          FUN_0017c6c4(param_1);
        }
        return 5;
      }
      if ((((pcVar4[3] == 'I') && (pcVar4[4] == 'T')) && (pcVar4[5] == 'I')) &&
         ((pcVar4[6] == 'E' && (pcVar4[7] == 'S')))) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
        *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 8;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
          FUN_0017c6c4(param_1);
        }
        return 6;
      }
    }
  }
  else if (((cVar1 == 'N') && (pcVar4[1] == 'M')) && (pcVar4[2] == 'T')) {
    if (((pcVar4[3] == 'O') && (pcVar4[4] == 'K')) &&
       ((pcVar4[5] == 'E' && ((pcVar4[6] == 'N' && (pcVar4[7] == 'S')))))) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 8;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
        FUN_0017c6c4(param_1);
      }
      return 8;
    }
    if ((((pcVar4[3] == 'O') && (pcVar4[4] == 'K')) && (pcVar4[5] == 'E')) && (pcVar4[6] == 'N')) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 7;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 7;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 7;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
        FUN_0017c6c4(param_1);
      }
      return 7;
    }
  }
  uVar2 = FUN_00182424(param_1,param_2);
  return uVar2;
}


