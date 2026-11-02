/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017e97c  Symbol: FUN_0017e97c */

void FUN_0017e97c(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *local_30;
  int local_2c;
  int local_28;
  
  iVar4 = param_1[9];
  pcVar3 = *(char **)(iVar4 + 0x10);
  iVar10 = DAT_0017eca4 + 0x17e98a;
  if ((((*pcVar3 == '<') && (pcVar3[1] == '!')) && (pcVar3[2] == '-')) && (pcVar3[3] == '-')) {
    iVar8 = param_1[0x2b];
    param_1[0x2b] = 5;
    iVar2 = *(int *)(iVar4 + 0x38);
    param_1[0x32] = param_1[0x32] + 4;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 4;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 4;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar4 = FUN_0017a2bc(param_1[9],0xfa), iVar4 < 1)) {
      FUN_0017c6c4(param_1);
    }
    if (param_1[0x49] == 0) {
      iVar4 = param_1[9];
      if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
         (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_0017eca8)) {
        FUN_0017cc50(param_1);
      }
    }
    if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa))
    {
      FUN_0017c738(param_1);
    }
    iVar4 = DAT_0017ecac;
    local_30 = *(char **)(param_1[9] + 0x10);
    local_28 = 0;
    local_2c = 100;
    iVar9 = 0;
    do {
      for (; iVar5 = iVar9, *local_30 == '\n'; local_30 = local_30 + 1) {
        *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
        *(undefined4 *)(param_1[9] + 0x20) = 1;
      }
      while( true ) {
        while( true ) {
          iVar9 = *(int *)(param_1[9] + 0x20);
          for (; ((cVar1 = *local_30, (byte)(cVar1 - 0x20U) < 0xd || ((byte)(cVar1 - 0x2eU) < 0x52))
                 || (cVar1 == '\t')); local_30 = local_30 + 1) {
            iVar9 = iVar9 + 1;
          }
          *(int *)(param_1[9] + 0x20) = iVar9;
          if (*local_30 != '\n') break;
          do {
            local_30 = local_30 + 1;
            *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
            *(undefined4 *)(param_1[9] + 0x20) = 1;
          } while (*local_30 == '\n');
        }
        __n = (int)local_30 - *(int *)(param_1[9] + 0x10);
        iVar9 = iVar5;
        if (((0 < (int)__n) && (*param_1 != 0)) && (*(int *)(*param_1 + 0x50) != 0)) {
          if (iVar5 == 0) {
            if ((*local_30 == '-') && (local_30[1] == '-')) {
              local_2c = __n + 1;
            }
            else {
              local_2c = __n + 100;
            }
            iVar9 = (***(code ***)(iVar10 + DAT_0017ecb0))(local_2c);
            if (iVar9 == 0) {
              FUN_00179430(param_1,0);
              goto LAB_0017ed18;
            }
            local_28 = 0;
          }
          else if (local_2c <= (int)(__n + local_28 + 1)) {
            local_2c = local_2c + 100 + __n + local_28;
            iVar9 = (***(code ***)(iVar10 + DAT_0017ecb4))(iVar5,local_2c);
            if (iVar9 == 0) {
              (***(code ***)(iVar10 + DAT_0017ecb8))(iVar5);
              FUN_00179430(param_1,0);
              param_1[0x2b] = iVar8;
              return;
            }
          }
          memcpy((void *)(iVar9 + local_28),*(void **)(param_1[9] + 0x10),__n);
          local_28 = local_28 + __n;
          *(undefined *)(iVar9 + local_28) = 0;
        }
        *(char **)(param_1[9] + 0x10) = local_30;
        if (*local_30 == '\n') {
          local_30 = local_30 + 1;
          *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
          *(undefined4 *)(param_1[9] + 0x20) = 1;
        }
        if ((*local_30 == '\r') && (local_30[1] == '\n')) break;
        if (param_1[0x49] == 0) {
          iVar5 = param_1[9];
          if ((500 < *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) &&
             (*(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) <= DAT_0017eca8)) {
            FUN_0017cc50(param_1);
          }
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        local_30 = *(char **)(param_1[9] + 0x10);
        if (*local_30 != '-') goto LAB_0017ecf6;
        if (local_30[1] == '-') {
          if (local_30[2] == '>') {
            if (*(int *)(param_1[9] + 0x38) != iVar2) {
              FUN_0017bae0(param_1,0x5a,iVar10 + DAT_0017ecbc);
            }
            param_1[0x32] = param_1[0x32] + 3;
            *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 3;
            *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 3;
            if (**(char **)(param_1[9] + 0x10) == '%') {
              FUN_0017dd5c(param_1);
            }
            if ((**(char **)(param_1[9] + 0x10) == '\0') &&
               (iVar4 = FUN_0017a2bc(param_1[9],0xfa), iVar4 < 1)) {
              FUN_0017c6c4(param_1);
            }
            if (((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x50), pcVar6 != (code *)0x0))
               && (param_1[0x35] == 0)) {
              if (iVar9 == 0) {
                (*pcVar6)(param_1[1],iVar10 + DAT_0017ecc0);
                goto LAB_0017ec9a;
              }
              (*pcVar6)(param_1[1],iVar9);
            }
            if (iVar9 != 0) {
              (***(code ***)(iVar10 + DAT_0017ecb8))(iVar9);
            }
LAB_0017ec9a:
            param_1[0x2b] = iVar8;
            return;
          }
          iVar7 = iVar9;
          iVar5 = DAT_0017ed24;
          if (iVar9 == 0) {
            iVar7 = 0;
            iVar5 = iVar4;
          }
          FUN_0017b798(param_1,0x2d,iVar10 + iVar5,iVar7);
          *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
          local_30 = local_30 + 1;
        }
        local_30 = local_30 + 1;
        *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
        iVar5 = iVar9;
      }
      *(char **)(param_1[9] + 0x10) = local_30 + 1;
      local_30 = local_30 + 2;
      *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
      *(undefined4 *)(param_1[9] + 0x20) = 1;
LAB_0017ecf6:
    } while (((byte)(*local_30 - 0x20U) < 0x60) || (*local_30 == '\t'));
    FUN_0017e548(param_1,iVar9,local_28,local_2c);
LAB_0017ed18:
    param_1[0x2b] = iVar8;
  }
  return;
}


