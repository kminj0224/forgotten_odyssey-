/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181dd8  Symbol: FUN_00181dd8 */

int FUN_00181dd8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_28;
  
  iVar5 = DAT_00182088 + 0x181de4;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar6 = *(int *)(param_1 + 0x24);
  pcVar7 = *(char **)(iVar6 + 0x10);
  if (((((*pcVar7 == '#') && (pcVar7[1] == 'P')) && (pcVar7[2] == 'C')) &&
      ((pcVar7[3] == 'D' && (pcVar7[4] == 'A')))) && ((pcVar7[5] == 'T' && (pcVar7[6] == 'A')))) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 7;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 7;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 7;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar6 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar6 < 1)) {
      FUN_0017c6c4(param_1);
    }
    FUN_0017ff44(param_1);
    if (*(int *)(param_1 + 0x124) == 0) {
      iVar6 = *(int *)(param_1 + 0x24);
      if ((500 < *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc)) &&
         (*(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) <= DAT_0018208c)) {
        FUN_0017cc50(param_1);
      }
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (cVar1 == ')') {
      if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != param_2))
      {
        FUN_0017bb40(param_1,0x5a,iVar5 + DAT_00182090,0,0);
      }
      FUN_0017a4a4(param_1);
      iVar5 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,1);
      if (iVar5 != 0) {
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '*') {
          *(undefined4 *)(iVar5 + 4) = 3;
          FUN_0017a4a4(param_1);
          return iVar5;
        }
        return iVar5;
      }
      return 0;
    }
    if ((cVar1 == '|') || (cVar1 == '(')) {
      iVar6 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,1);
      if (iVar6 == 0) {
        return 0;
      }
    }
    else {
      iVar6 = 0;
    }
    local_28 = 0;
    iVar8 = iVar6;
    while( true ) {
      pcVar7 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      cVar1 = *pcVar7;
      if (cVar1 != '|') break;
      FUN_0017a4a4(param_1);
      if (local_28 == 0) {
        iVar6 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,4);
        if (iVar6 == 0) {
          return 0;
        }
        *(int *)(iVar6 + 0xc) = iVar8;
        iVar3 = iVar6;
        if (iVar8 != 0) {
          *(int *)(iVar8 + 0x14) = iVar6;
        }
      }
      else {
        iVar3 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,4);
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),local_28,2);
        *(int *)(iVar3 + 0xc) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x14) = iVar3;
        }
        *(int *)(iVar8 + 0x10) = iVar3;
        *(int *)(iVar3 + 0x14) = iVar8;
      }
      FUN_0017ff44(param_1);
      local_28 = FUN_0017f6b8(param_1);
      if (local_28 == 0) {
        FUN_0017bae0(param_1,0x44,iVar5 + DAT_00182094);
        FUN_0019541c(*(undefined4 *)(param_1 + 8),iVar3);
        return 0;
      }
      FUN_0017ff44(param_1);
      iVar8 = iVar3;
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
    }
    if ((cVar1 == ')') && (pcVar7[1] == '*')) {
      if (local_28 != 0) {
        iVar3 = FUN_00194f6c(*(undefined4 *)(param_1 + 8),local_28,2);
        *(int *)(iVar8 + 0x10) = iVar3;
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x14) = iVar8;
        }
      }
      *(undefined4 *)(iVar6 + 4) = 3;
      if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != param_2))
      {
        FUN_0017bb40(param_1,0x5a,iVar5 + DAT_00182090,0,0);
      }
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') {
        iVar5 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa);
        if (iVar5 < 1) {
          FUN_0017c6c4(param_1);
          return iVar6;
        }
        return iVar6;
      }
      return iVar6;
    }
    FUN_0019541c(*(undefined4 *)(param_1 + 8),iVar6);
    uVar4 = 0x34;
  }
  else {
    uVar4 = 0x45;
  }
  FUN_0017b7fc(param_1,uVar4,0);
  return 0;
}


