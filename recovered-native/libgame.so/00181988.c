/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181988  Symbol: FUN_00181988 */

void FUN_00181988(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  int local_1c [2];
  
  iVar10 = param_1[9];
  iVar9 = DAT_00181c98 + 0x181996;
  if (**(char **)(iVar10 + 0x10) != '<') {
    return;
  }
  if ((*(char **)(iVar10 + 0x10))[1] != '?') {
    return;
  }
  iVar6 = param_1[0x2b];
  param_1[0x2b] = 2;
  param_1[0x32] = param_1[0x32] + 2;
  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 2;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar2 = FUN_0017a2bc(param_1[9],0xfa), iVar2 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  if (param_1[0x49] == 0) {
    iVar2 = param_1[9];
    if ((500 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) &&
       (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) <= DAT_00181c9c)) {
      FUN_0017cc50(param_1);
    }
  }
  iVar2 = FUN_0017fbcc(param_1);
  if (iVar2 == 0) {
    FUN_0017b7fc(param_1,0x2e,0);
  }
  else {
    pcVar5 = *(char **)(param_1[9] + 0x10);
    if ((*pcVar5 != '?') || (pcVar5[1] != '>')) {
      local_3c = (***(code ***)(iVar9 + DAT_00181ca4))(100);
      if (local_3c != 0) {
        uVar8 = (uint)**(byte **)(param_1[9] + 0x10);
        if (((1 < uVar8 - 9) && (uVar8 != 0x20)) && (uVar8 != 0xd)) {
          FUN_0017b798(param_1,0x41,iVar9 + DAT_00181ca8,iVar2);
        }
        FUN_0017ff44(param_1);
        iVar3 = FUN_0017a70c(param_1,local_1c);
        iVar1 = DAT_00181cac;
        local_34 = 0;
        local_28 = 100;
        local_38 = 0;
LAB_00181c2e:
        if (iVar3 < 0x100) {
          if ((((1 < iVar3 - 9U) && (iVar3 != 0xd)) && (iVar3 < 0x20)) ||
             ((iVar3 == 0x3f && (*(char *)(*(int *)(param_1[9] + 0x10) + 1) == '>')))) {
LAB_00181c7c:
            *(undefined *)(local_3c + local_38) = 0;
            if (iVar3 == 0x3f) {
              if (iVar10 != param_1[9]) {
                FUN_0017bae0(param_1,0x41,iVar9 + DAT_00181d60);
              }
              param_1[0x32] = param_1[0x32] + 2;
              *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 2;
              *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
              if (**(char **)(param_1[9] + 0x10) == '%') {
                FUN_0017dd5c(param_1);
              }
              if ((**(char **)(param_1[9] + 0x10) == '\0') &&
                 (iVar10 = FUN_0017a2bc(param_1[9],0xfa), iVar10 < 1)) {
                FUN_0017c6c4(param_1);
              }
              if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
                 (pcVar7 = *(code **)(*param_1 + 0x4c), pcVar7 != (code *)0x0)) {
                (*pcVar7)(param_1[1],iVar2,local_3c);
              }
            }
            else {
              FUN_0017b798(param_1,0x2f,iVar9 + DAT_00181cc8,iVar2);
            }
            (***(code ***)(iVar9 + DAT_00181d64))(local_3c);
            goto LAB_00181d56;
          }
        }
        else if (((DAT_00181cb8 < (uint)(iVar3 + DAT_00181cb4)) && (DAT_00181cbc < iVar3 - 0x100U))
                && (DAT_00181cc4 < (uint)(iVar3 + DAT_00181cc0))) goto LAB_00181c7c;
        iVar4 = local_3c;
        if (local_28 <= local_38 + 5) {
          local_28 = local_28 << 1;
          iVar4 = (***(code ***)(iVar9 + iVar1))(local_3c);
          if (iVar4 == 0) goto code_r0x00181b2c;
        }
        local_3c = iVar4;
        local_34 = local_34 + 1;
        if (0x32 < local_34) {
          if ((param_1[0x49] == 0) &&
             (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
            local_34 = 0;
          }
          else {
            local_34 = 0;
          }
        }
        if (local_1c[0] == 1) {
          *(char *)(local_3c + local_38) = (char)iVar3;
          local_38 = local_38 + 1;
        }
        else {
          iVar3 = FUN_0017ab20(local_3c + local_38,iVar3);
          local_38 = local_38 + iVar3;
        }
        iVar3 = param_1[9];
        if (**(char **)(iVar3 + 0x10) == '\n') {
          iVar4 = 1;
          *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
          iVar3 = param_1[9];
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x20) + 1;
        }
        *(int *)(iVar3 + 0x20) = iVar4;
        *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_1c[0];
        if (**(char **)(param_1[9] + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        iVar3 = FUN_0017a70c(param_1,local_1c);
        if (iVar3 == 0) {
          if (param_1[0x49] == 0) {
            iVar3 = param_1[9];
            if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
               (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_00181c9c)) {
              FUN_0017cc50(param_1);
            }
          }
          if ((param_1[0x49] == 0) &&
             (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
          }
          iVar3 = FUN_0017a70c(param_1,local_1c);
        }
        goto LAB_00181c2e;
      }
      FUN_00179430(param_1,0);
      goto LAB_00181b3e;
    }
    if (iVar10 != param_1[9]) {
      FUN_0017bae0(param_1,0x5a,iVar9 + DAT_00181ca0);
    }
    param_1[0x32] = param_1[0x32] + 2;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 2;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar9 = FUN_0017a2bc(param_1[9],0xfa), iVar9 < 1)) {
      FUN_0017c6c4(param_1);
    }
    if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
       (pcVar7 = *(code **)(*param_1 + 0x4c), pcVar7 != (code *)0x0)) {
      (*pcVar7)(param_1[1],iVar2);
    }
  }
LAB_00181d56:
  param_1[0x2b] = iVar6;
  return;
code_r0x00181b2c:
  FUN_00179430(param_1,0);
  (***(code ***)(iVar9 + DAT_00181cb0))(local_3c);
LAB_00181b3e:
  param_1[0x2b] = iVar6;
  return;
}


