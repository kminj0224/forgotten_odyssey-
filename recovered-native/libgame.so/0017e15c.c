/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017e15c  Symbol: FUN_0017e15c */

void FUN_0017e15c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  code **ppcVar10;
  code *pcVar11;
  uint local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar2 = DAT_0017e438 + 0x17e168;
  iVar3 = param_1[9];
  pcVar7 = *(char **)(iVar3 + 0x10);
  if (*pcVar7 != '<') {
    return;
  }
  if (pcVar7[1] != '!') {
    return;
  }
  if (pcVar7[2] != '[') {
    return;
  }
  if (pcVar7[3] != 'C') {
    return;
  }
  if (pcVar7[4] != 'D') {
    return;
  }
  if (pcVar7[5] != 'A') {
    return;
  }
  if (pcVar7[6] != 'T') {
    return;
  }
  if (pcVar7[7] != 'A') {
    return;
  }
  if (pcVar7[8] != '[') {
    return;
  }
  param_1[0x32] = param_1[0x32] + 9;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 9;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 9;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar3 = FUN_0017a2bc(param_1[9],0xfa), iVar3 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  param_1[0x2b] = 8;
  uVar1 = FUN_0017a70c(param_1,local_1c);
  if ((int)uVar1 < 0x100) {
    if ((uVar1 - 9 < 2) || (uVar1 == 0xd)) {
LAB_0017e238:
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)(uVar1 < 0x20) - ((int)uVar1 >> 0x1f);
    }
  }
  else {
    if ((uVar1 + DAT_0017e43c <= DAT_0017e440) || (uVar1 - 0x100 <= DAT_0017e444))
    goto LAB_0017e238;
    uVar8 = (uint)(DAT_0017e44c < uVar1 + DAT_0017e448);
  }
  if ((uVar8 & 0xff) != 0) goto LAB_0017e2d6;
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
  uVar8 = FUN_0017a70c(param_1,&local_20);
  if ((int)uVar8 < 0x100) {
    if ((uVar8 - 9 < 2) || (uVar8 == 0xd)) {
LAB_0017e2be:
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(uVar8 < 0x20) - ((int)uVar8 >> 0x1f);
    }
  }
  else {
    if ((uVar8 + DAT_0017e43c <= DAT_0017e440) || (uVar8 - 0x100 <= DAT_0017e444))
    goto LAB_0017e2be;
    uVar9 = (uint)(DAT_0017e44c < uVar8 + DAT_0017e448);
  }
  if ((uVar9 & 0xff) == 0) {
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
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_20;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    local_40 = FUN_0017a70c(param_1,&local_24);
    iVar4 = (***(code ***)(iVar2 + DAT_0017e450))(100);
    iVar3 = DAT_0017e454;
    if (iVar4 != 0) {
      local_34 = 0;
      local_30 = 100;
      local_3c = 0;
      do {
        if ((int)local_40 < 0x100) {
          if (((1 < local_40 - 9) && (local_40 != 0xd)) && ((int)local_40 < 0x20))
          goto LAB_0017e494;
        }
        else if (((DAT_0017e530 < local_40 + DAT_0017e52c) && (DAT_0017e534 < local_40 - 0x100)) &&
                (DAT_0017e53c < local_40 + DAT_0017e538)) goto LAB_0017e494;
        if (((uVar8 == 0x5d) && (uVar1 == 0x5d)) && (local_40 == 0x3e)) {
LAB_0017e494:
          *(undefined *)(iVar4 + local_3c) = 0;
          param_1[0x2b] = 7;
          if (local_40 == 0x3e) {
            iVar3 = param_1[9];
            if (**(char **)(iVar3 + 0x10) == '\n') {
              *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
              iVar3 = param_1[9];
              iVar6 = 1;
            }
            else {
              iVar6 = *(int *)(iVar3 + 0x20) + 1;
            }
            *(int *)(iVar3 + 0x20) = iVar6;
            *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_24;
            if (**(char **)(param_1[9] + 0x10) == '%') {
              FUN_0017dd5c(param_1);
            }
            iVar3 = *param_1;
            if (((iVar3 != 0) && (param_1[0x35] == 0)) &&
               ((pcVar11 = *(code **)(iVar3 + 100), pcVar11 != (code *)0x0 ||
                (pcVar11 = *(code **)(iVar3 + 0x44), pcVar11 != (code *)0x0)))) {
              (*pcVar11)(param_1[1],iVar4,local_3c);
            }
            ppcVar10 = *(code ***)(iVar2 + DAT_0017e544);
          }
          else {
            FUN_0017b798(param_1,0x3f,iVar2 + DAT_0017e540,iVar4);
            ppcVar10 = *(code ***)(iVar2 + DAT_0017e544);
          }
          (**ppcVar10)(iVar4);
          return;
        }
        iVar6 = iVar4;
        if (local_30 <= local_3c + 5) {
          local_30 = local_30 << 1;
          iVar6 = (***(code ***)(iVar2 + iVar3))(iVar4,local_30);
          if (iVar6 == 0) goto code_r0x0017e36a;
        }
        if (local_1c[0] == 1) {
          *(char *)(iVar6 + local_3c) = (char)uVar1;
          local_3c = local_3c + 1;
        }
        else {
          iVar4 = FUN_0017ab20(iVar6 + local_3c,uVar1);
          local_3c = local_3c + iVar4;
        }
        local_34 = local_34 + 1;
        local_1c[0] = local_20;
        local_20 = local_24;
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
        iVar4 = param_1[9];
        if (**(char **)(iVar4 + 0x10) == '\n') {
          iVar5 = 1;
          *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
          iVar4 = param_1[9];
        }
        else {
          iVar5 = *(int *)(iVar4 + 0x20) + 1;
        }
        *(int *)(iVar4 + 0x20) = iVar5;
        *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_24;
        if (**(char **)(param_1[9] + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        uVar9 = FUN_0017a70c(param_1,&local_24);
        uVar1 = uVar8;
        iVar4 = iVar6;
        uVar8 = local_40;
        local_40 = uVar9;
      } while( true );
    }
LAB_0017e376:
    FUN_00179430(param_1,0);
    return;
  }
LAB_0017e2d6:
  FUN_0017b7fc(param_1,0x3f,0);
  param_1[0x2b] = 7;
  return;
code_r0x0017e36a:
  (***(code ***)(iVar2 + DAT_0017e458))(iVar4);
  goto LAB_0017e376;
}


