/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181798  Symbol: FUN_00181798 */

void FUN_00181798(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int local_1c [2];
  
  iVar5 = param_1[9];
  pcVar4 = *(char **)(iVar5 + 0x10);
  iVar7 = DAT_0018196c + 0x1817a6;
  if (*pcVar4 != '<') {
    return;
  }
  if (pcVar4[1] != '!') {
    return;
  }
  if (pcVar4[2] != 'N') {
    return;
  }
  if (pcVar4[3] != 'O') {
    return;
  }
  if (pcVar4[4] != 'T') {
    return;
  }
  if (pcVar4[5] != 'A') {
    return;
  }
  if (pcVar4[6] != 'T') {
    return;
  }
  if (pcVar4[7] == 'I') {
    if (pcVar4[8] != 'O') {
      return;
    }
    if (pcVar4[9] != 'N') {
      return;
    }
    if (((param_1[0x49] == 0) && (500 < (int)pcVar4 - *(int *)(iVar5 + 0xc))) &&
       (*(int *)(iVar5 + 0x14) - (int)pcVar4 <= DAT_00181970)) {
      FUN_0017cc50(param_1);
    }
    param_1[0x32] = param_1[0x32] + 10;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 10;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 10;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(param_1[9],0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    cVar1 = **(char **)(param_1[9] + 0x10);
    if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (iVar2 = DAT_00181974, cVar1 == '\r')) {
      FUN_0017ff44(param_1);
      iVar3 = FUN_0017f6b8(param_1);
      if (iVar3 == 0) {
        FUN_0017b7fc(param_1,0x30,0);
        return;
      }
      cVar1 = **(char **)(param_1[9] + 0x10);
      if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (iVar2 = DAT_00181978, cVar1 == '\r')) {
        iVar2 = FUN_0019c42c(iVar3,0x3a);
        if (iVar2 != 0) {
          FUN_0017bc54(param_1,0xcd,iVar7 + DAT_0018197c,iVar3,0,0);
        }
        FUN_0017ff44(param_1);
        iVar2 = FUN_00181464(param_1,local_1c,0);
        FUN_0017ff44(param_1);
        if (**(char **)(param_1[9] + 0x10) == '>') {
          if (iVar5 != param_1[9]) {
            FUN_0017bae0(param_1,0x41,iVar7 + DAT_00181980);
          }
          FUN_0017a4a4(param_1);
          if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
             (pcVar6 = *(code **)(*param_1 + 0x1c), pcVar6 != (code *)0x0)) {
            (*pcVar6)(param_1[1],iVar3,local_1c[0],iVar2);
          }
        }
        else {
          FUN_0017b7fc(param_1,0x31,0);
        }
        if (iVar2 != 0) {
          (***(code ***)(iVar7 + DAT_00181984))(iVar2);
        }
        if (local_1c[0] == 0) {
          return;
        }
        (***(code ***)(iVar7 + DAT_00181984))();
        return;
      }
    }
    FUN_0017bae0(param_1,0x41,iVar7 + iVar2);
    return;
  }
  return;
}


