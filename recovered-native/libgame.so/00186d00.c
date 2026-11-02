/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00186d00  Symbol: FUN_00186d00 */

void FUN_00186d00(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  int local_2c;
  int local_20;
  int local_1c [2];
  
  local_1c[0] = 0;
  local_20 = 0;
  iVar7 = param_1[9];
  pcVar8 = *(char **)(iVar7 + 0x10);
  iVar10 = DAT_0018700c + 0x186d18;
  if (*pcVar8 != '<') {
    return;
  }
  if (pcVar8[1] != '!') {
    return;
  }
  if (pcVar8[2] != 'E') {
    return;
  }
  if (pcVar8[3] != 'N') {
    return;
  }
  if (pcVar8[4] != 'T') {
    return;
  }
  if (pcVar8[5] != 'I') {
    return;
  }
  if (pcVar8[6] != 'T') {
    return;
  }
  if (pcVar8[7] != 'Y') {
    return;
  }
  if (((param_1[0x49] == 0) && (500 < (int)pcVar8 - *(int *)(iVar7 + 0xc))) &&
     (*(int *)(iVar7 + 0x14) - (int)pcVar8 <= DAT_00187010)) {
    FUN_0017cc50(param_1);
  }
  param_1[0x32] = param_1[0x32] + 8;
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 8;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 8;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar3 = FUN_0017a2bc(param_1[9],0xfa), iVar3 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  iVar3 = FUN_0017ff44(param_1);
  if (iVar3 == 0) {
    FUN_0017bae0(param_1,0x41,iVar10 + DAT_00187014);
  }
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017a4a4(param_1);
    iVar3 = FUN_0017ff44(param_1);
    if (iVar3 == 0) {
      FUN_0017bae0(param_1,0x41,iVar10 + DAT_00187018);
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  iVar3 = FUN_0017f6b8(param_1);
  if (iVar3 == 0) {
    FUN_0017bae0(param_1,0x44,iVar10 + DAT_0018701c);
    return;
  }
  iVar4 = FUN_0019c42c(iVar3,0x3a);
  if (iVar4 != 0) {
    FUN_0017bc54(param_1,0xcd,iVar10 + DAT_00187020,iVar3,0,0);
  }
  iVar4 = FUN_0017ff44(param_1);
  if (iVar4 == 0) {
    FUN_0017bae0(param_1,0x41,iVar10 + DAT_00187024);
  }
  param_1[0x2b] = 10;
  if (bVar2) {
    cVar1 = **(char **)(param_1[9] + 0x10);
    if ((cVar1 == '\'') || (cVar1 == '\"')) {
      local_2c = FUN_00186a30(param_1,&local_20);
      if ((local_2c != 0) &&
         (((*param_1 != 0 && (param_1[0x35] == 0)) &&
          (pcVar9 = *(code **)(*param_1 + 0x18), pcVar9 != (code *)0x0)))) {
        (*pcVar9)(param_1[1],iVar3,4,0,0,local_2c);
      }
      goto LAB_001871d6;
    }
    iVar4 = FUN_00181464(param_1,local_1c,1);
    if (iVar4 == 0) {
      if (local_1c[0] == 0) {
        FUN_0017b7fc(param_1,0x54,0);
      }
LAB_001871d0:
      local_2c = 0;
    }
    else {
      iVar5 = FUN_00193d0c();
      if (iVar5 != 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
             (pcVar9 = *(code **)(*param_1 + 0x18), pcVar9 != (code *)0x0)) {
            (*pcVar9)(param_1[1],iVar3,5,local_1c[0],iVar4,0);
          }
        }
        else {
          FUN_0017b7fc(param_1,0x5c,0);
        }
        FUN_001919b8(iVar5);
        goto LAB_001871d0;
      }
      FUN_0017bf54(param_1,0x5b,iVar10 + DAT_00187028,iVar4);
      local_2c = 0;
    }
  }
  else {
    cVar1 = **(char **)(param_1[9] + 0x10);
    if ((cVar1 != '\'') && (cVar1 != '\"')) {
      iVar4 = FUN_00181464(param_1,local_1c,1);
      if (iVar4 == 0) {
        if (local_1c[0] == 0) {
          FUN_0017b7fc(param_1,0x54,0);
        }
      }
      else {
        iVar5 = FUN_00193d0c();
        if (iVar5 == 0) {
          FUN_0017bf54(param_1,0x5b,iVar10 + DAT_00187028,iVar4);
        }
        else {
          if (*(int *)(iVar5 + 0x20) != 0) {
            FUN_0017b7fc(param_1,0x5c,0);
          }
          FUN_001919b8(iVar5);
        }
      }
      cVar1 = **(char **)(param_1[9] + 0x10);
      if ((((cVar1 != '>') && (1 < (byte)(cVar1 - 9U))) && (cVar1 != ' ')) && (cVar1 != '\r')) {
        FUN_0017bae0(param_1,0x41,iVar10 + DAT_001872a8);
      }
      FUN_0017ff44(param_1);
      iVar5 = param_1[9];
      pcVar8 = *(char **)(iVar5 + 0x10);
      if (((*pcVar8 == 'N') && (pcVar8[1] == 'D')) &&
         ((pcVar8[2] == 'A' && ((pcVar8[3] == 'T' && (pcVar8[4] == 'A')))))) {
        param_1[0x32] = param_1[0x32] + 5;
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 5;
        *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 5;
        if (**(char **)(param_1[9] + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(param_1[9] + 0x10) == '\0') &&
           (iVar5 = FUN_0017a2bc(param_1[9],0xfa), iVar5 < 1)) {
          FUN_0017c6c4(param_1);
        }
        cVar1 = **(char **)(param_1[9] + 0x10);
        if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
          FUN_0017bae0(param_1,0x41,iVar10 + DAT_001872ac);
        }
        FUN_0017ff44(param_1);
        uVar6 = FUN_0017f6b8(param_1);
        if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
           (pcVar9 = *(code **)(*param_1 + 0x28), pcVar9 != (code *)0x0)) {
          (*pcVar9)(param_1[1],iVar3,local_1c[0],iVar4,uVar6);
LAB_001871ca:
          local_2c = 0;
          goto LAB_001871d8;
        }
      }
      else {
        if ((*param_1 != 0) &&
           ((param_1[0x35] == 0 && (pcVar9 = *(code **)(*param_1 + 0x18), pcVar9 != (code *)0x0))))
        {
          (*pcVar9)(param_1[1],iVar3,2,local_1c[0],iVar4,0);
        }
        if ((param_1[4] != 0) &&
           ((param_1[2] == 0 ||
            (iVar5 = FUN_0019c30c(*(undefined4 *)(param_1[2] + 0x38),iVar10 + DAT_001872b0),
            iVar5 != 0)))) {
          if (param_1[2] == 0) {
            iVar5 = FUN_0018a24c(iVar10 + DAT_001872b0);
            param_1[2] = iVar5;
            if (iVar5 == 0) goto LAB_0018718e;
            *(undefined4 *)(iVar5 + 0x5c) = 0x40;
          }
          iVar5 = param_1[2];
          if (*(int *)(iVar5 + 0x2c) == 0) {
            uVar6 = FUN_0018a448(iVar5,iVar10 + DAT_001872b8,0);
            *(undefined4 *)(iVar5 + 0x2c) = uVar6;
          }
          FUN_0019f4a4(param_1,iVar3,2,local_1c[0],iVar4,0);
          goto LAB_001871ca;
        }
      }
      goto LAB_001871d0;
    }
    local_2c = FUN_00186a30(param_1,&local_20);
    if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
       (pcVar9 = *(code **)(*param_1 + 0x18), pcVar9 != (code *)0x0)) {
      (*pcVar9)(param_1[1],iVar3,1,0,0,local_2c);
    }
    if ((param_1[2] == 0) ||
       (iVar4 = FUN_0019c30c(*(undefined4 *)(param_1[2] + 0x38),iVar10 + DAT_0018702c), iVar4 != 0))
    {
      if (param_1[2] == 0) {
        iVar4 = FUN_0018a24c(iVar10 + DAT_0018702c);
        param_1[2] = iVar4;
        if (iVar4 == 0) {
LAB_0018718e:
          FUN_00179430(param_1,iVar10 + DAT_001872b4);
          return;
        }
        *(undefined4 *)(iVar4 + 0x5c) = 0x40;
      }
      iVar4 = param_1[2];
      if (*(int *)(iVar4 + 0x2c) == 0) {
        uVar6 = FUN_0018a448(iVar4,iVar10 + DAT_00187030,0);
        *(undefined4 *)(iVar4 + 0x2c) = uVar6;
      }
      FUN_0019f4a4(param_1,iVar3,1,0,0,local_2c);
    }
LAB_001871d6:
    iVar4 = 0;
  }
LAB_001871d8:
  FUN_0017ff44(param_1);
  if (**(char **)(param_1[9] + 0x10) == '>') {
    if (iVar7 != param_1[9]) {
      FUN_0017bae0(param_1,0x5a,iVar10 + DAT_001872c0);
    }
    FUN_0017a4a4(param_1);
  }
  else {
    FUN_0017b798(param_1,0x25,iVar10 + DAT_001872bc,iVar3);
  }
  if (local_20 == 0) goto LAB_00187276;
  iVar7 = *param_1;
  if (bVar2) {
    if ((iVar7 != 0) && (*(code **)(iVar7 + 0x60) != (code *)0x0)) {
      iVar7 = (**(code **)(iVar7 + 0x60))(param_1[1],iVar3);
LAB_00187252:
      if (iVar7 != 0) goto LAB_00187256;
    }
LAB_0018726c:
    pcVar9 = **(code ***)(iVar10 + DAT_001872c4);
  }
  else {
    if (((iVar7 == 0) || (*(code **)(iVar7 + 0x14) == (code *)0x0)) ||
       (iVar7 = (**(code **)(iVar7 + 0x14))(param_1[1],iVar3), iVar7 == 0)) {
      if ((int *)param_1[1] == param_1) {
        iVar7 = FUN_0019f210(param_1,iVar3);
        goto LAB_00187252;
      }
      goto LAB_0018726c;
    }
LAB_00187256:
    if (*(int *)(iVar7 + 0x24) == 0) {
      *(int *)(iVar7 + 0x24) = local_20;
      goto LAB_00187276;
    }
    pcVar9 = **(code ***)(iVar10 + DAT_001872c4);
  }
  (*pcVar9)(local_20);
LAB_00187276:
  if (local_2c != 0) {
    (***(code ***)(iVar10 + DAT_001872c4))(local_2c);
  }
  if (iVar4 != 0) {
    (***(code ***)(iVar10 + DAT_001872c4))(iVar4);
  }
  if (local_1c[0] != 0) {
    (***(code ***)(iVar10 + DAT_001872c4))();
  }
  return;
}


