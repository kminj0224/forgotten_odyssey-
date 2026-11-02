/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182890  Symbol: FUN_00182890 */

void FUN_00182890(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int local_160;
  int local_154;
  undefined local_150 [308];
  int local_1c;
  
  iVar7 = DAT_00182b74 + 0x18289c;
  local_1c = **(int **)(iVar7 + DAT_00182b78);
  if (param_1[0x49] == 0) {
    iVar4 = param_1[9];
    if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
       (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_00182b7c)) {
      FUN_0017cc50(param_1);
    }
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  uVar1 = FUN_0017a70c(param_1,&local_154);
  local_160 = 0;
  iVar4 = 0;
  while ((uVar1 != 0x26 && (uVar1 != 0x3c))) {
    if ((int)uVar1 < 0x100) {
      if (((1 < uVar1 - 9) && (uVar1 != 0xd)) && ((int)uVar1 < 0x20)) break;
      if (((uVar1 == 0x5d) && (*(char *)(*(int *)(param_1[9] + 0x10) + 1) == ']')) &&
         (*(char *)(*(int *)(param_1[9] + 0x10) + 2) == '>')) {
        if (param_2 != 0) break;
        FUN_0017b7fc(param_1,0x3e);
      }
    }
    else if (((DAT_00182b88 < uVar1 + DAT_00182b84) && (DAT_00182b8c < uVar1 - 0x100)) &&
            (DAT_00182b94 < uVar1 + DAT_00182b90)) break;
    if (local_154 == 1) {
      local_150[iVar4] = (char)uVar1;
      iVar4 = iVar4 + 1;
    }
    else {
      iVar2 = FUN_0017ab20(local_150 + iVar4,uVar1);
      iVar4 = iVar4 + iVar2;
    }
    if (DAT_00182b80 < iVar4) {
      local_150[iVar4] = 0;
      if ((*param_1 != 0) && (param_1[0x35] == 0)) {
        iVar2 = FUN_0017dbe4(param_1,local_150,iVar4);
        if (iVar2 == 0) {
          pcVar5 = *(code **)(*param_1 + 0x44);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(param_1[1],local_150,iVar4);
          }
          if ((*(int *)(*param_1 + 0x44) != *(int *)(*param_1 + 0x48)) &&
             (*(int *)param_1[0x3a] == -1)) {
            *(int *)param_1[0x3a] = -2;
          }
        }
        else {
          pcVar5 = *(code **)(*param_1 + 0x48);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(param_1[1],local_150,iVar4);
          }
        }
      }
      if (param_1[0x2b] != 7) goto LAB_00182b60;
      iVar4 = 0;
    }
    local_160 = local_160 + 1;
    if (0x32 < local_160) {
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_0017c738(param_1);
        local_160 = 0;
      }
      else {
        local_160 = 0;
      }
    }
    iVar2 = param_1[9];
    if (**(char **)(iVar2 + 0x10) == '\n') {
      iVar3 = 1;
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
      iVar2 = param_1[9];
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x20) + 1;
    }
    *(int *)(iVar2 + 0x20) = iVar3;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_154;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    uVar1 = FUN_0017a70c(param_1,&local_154);
  }
  if (iVar4 != 0) {
    local_150[iVar4] = 0;
    if ((*param_1 != 0) && (param_1[0x35] == 0)) {
      iVar2 = FUN_0017dbe4(param_1,local_150,iVar4);
      if (iVar2 == 0) {
        pcVar5 = *(code **)(*param_1 + 0x44);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1[1],local_150,iVar4);
        }
        if ((*(int *)(*param_1 + 0x44) != *(int *)(*param_1 + 0x48)) &&
           (*(int *)param_1[0x3a] == -1)) {
          *(int *)param_1[0x3a] = -2;
        }
      }
      else {
        pcVar5 = *(code **)(*param_1 + 0x48);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1[1],local_150,iVar4);
        }
      }
    }
  }
  if (uVar1 == 0) goto LAB_00182b60;
  if ((int)uVar1 < 0x100) {
    if ((uVar1 - 9 < 2) || (uVar1 == 0xd)) {
LAB_00182b04:
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(uVar1 < 0x20) - ((int)uVar1 >> 0x1f);
    }
  }
  else {
    if ((uVar1 + DAT_00182b84 <= DAT_00182b88) || (uVar1 - 0x100 <= DAT_00182b8c))
    goto LAB_00182b04;
    uVar6 = (uint)(DAT_00182b94 < uVar1 + DAT_00182b90);
  }
  if ((uVar6 & 0xff) != 0) {
    FUN_0017bd20(param_1,9,iVar7 + DAT_00182b98,uVar1);
    iVar4 = param_1[9];
    if (**(char **)(iVar4 + 0x10) == '\n') {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
      iVar4 = param_1[9];
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x20) + 1;
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_154;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
  }
LAB_00182b60:
  if (local_1c == **(int **)(iVar7 + DAT_00182b78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


