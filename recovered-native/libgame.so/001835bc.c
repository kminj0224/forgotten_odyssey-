/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001835bc  Symbol: FUN_001835bc */

int FUN_001835bc(int param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined uVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *local_4c;
  char *local_44;
  undefined *local_40;
  int local_1c [2];
  
  iVar11 = DAT_001838f8 + 0x1835c8;
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    *(undefined4 *)(param_1 + 0xac) = 0xc;
    FUN_0017a4a4(param_1);
    cVar1 = '\"';
  }
  else {
    if (cVar1 != '\'') {
      FUN_0017b7fc(param_1,0x27,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0xc;
    FUN_0017a4a4(param_1);
    cVar1 = '\'';
  }
  iVar4 = (***(code ***)(iVar11 + DAT_001838fc))(100);
  if (iVar4 == 0) {
LAB_00183aa6:
    local_4c = (char *)0x0;
LAB_00183aaa:
    FUN_00179430(param_1,0);
    if (iVar4 != 0) {
      (***(code ***)(iVar11 + DAT_00183afc))(iVar4);
    }
    if (local_4c != (char *)0x0) {
      (***(code ***)(iVar11 + DAT_00183afc))(local_4c);
    }
    return 0;
  }
  iVar5 = FUN_0017a70c(param_1,local_1c);
  bVar3 = false;
  iVar12 = 0;
  iVar13 = 100;
  while (pcVar10 = *(char **)(*(int *)(param_1 + 0x24) + 0x10), *pcVar10 != cVar1) {
    if (iVar5 < 0x100) {
      if ((((1 < iVar5 - 9U) && (iVar5 != 0xd)) && (iVar5 < 0x20)) ||
         ((iVar5 == 0x3c || (iVar5 == 0)))) break;
    }
    else if (((DAT_00183ae4 < (uint)(iVar5 + DAT_00183ae0)) && (DAT_00183ae8 < iVar5 - 0x100U)) &&
            (DAT_00183af0 < (uint)(iVar5 + DAT_00183aec))) break;
    if (iVar5 == 0x26) {
      if (pcVar10[1] == '#') {
        iVar5 = FUN_0017fcac(param_1);
        if (iVar5 == 0x26) {
          if (*(int *)(param_1 + 0x10) != 0) {
            iVar5 = iVar4;
            if (iVar13 + -9 <= iVar12) {
              iVar13 = iVar13 * 2 + 10;
              iVar5 = (***(code ***)(iVar11 + DAT_00183900))(iVar4,iVar13);
              if (iVar5 == 0) goto LAB_00183aa6;
            }
            uVar8 = 0x26;
            iVar4 = iVar5;
LAB_00183778:
            *(undefined *)(iVar4 + iVar12) = uVar8;
            iVar12 = iVar12 + 1;
            bVar3 = false;
            goto LAB_00183994;
          }
          iVar5 = iVar4;
          if (iVar13 + -9 <= iVar12) {
            iVar13 = iVar13 * 2 + 10;
            iVar5 = (***(code ***)(iVar11 + DAT_00183900))(iVar4,iVar13);
            if (iVar5 == 0) goto LAB_00183aa6;
          }
          *(undefined *)(iVar5 + iVar12) = 0x26;
          *(undefined *)(iVar5 + iVar12 + 1) = 0x23;
          *(undefined *)(iVar5 + iVar12 + 2) = 0x33;
          *(undefined *)(iVar5 + iVar12 + 3) = 0x38;
          *(undefined *)(iVar5 + iVar12 + 4) = 0x3b;
          iVar12 = iVar12 + 5;
          iVar4 = iVar5;
        }
        else if (iVar5 != 0) {
          iVar7 = iVar4;
          if (iVar13 + -9 <= iVar12) {
            iVar13 = iVar13 * 2 + 10;
            iVar7 = (***(code ***)(iVar11 + DAT_00183900))(iVar4,iVar13);
            if (iVar7 == 0) goto LAB_00183aa6;
          }
          iVar4 = iVar7;
          iVar5 = FUN_0017abb4(0,iVar4 + iVar12,iVar5);
          iVar12 = iVar12 + iVar5;
          goto LAB_001837ec;
        }
      }
      else {
        iVar5 = FUN_0017fa24(param_1);
        iVar7 = *(int *)(param_1 + 0x1b8) + 1;
        *(int *)(param_1 + 0x1b8) = iVar7;
        if (iVar5 != 0) {
          *(int *)(param_1 + 0x1b8) = *(int *)(iVar5 + 0x44) + iVar7;
          if (*(int *)(iVar5 + 0x30) == 6) {
            iVar7 = iVar4;
            if (iVar13 + -9 <= iVar12) {
              iVar13 = iVar13 * 2 + 10;
              iVar7 = (***(code ***)(iVar11 + DAT_00183900))(iVar4,iVar13);
              if (iVar7 == 0) goto LAB_00183aa6;
            }
            iVar4 = iVar7;
            if ((*(int *)(param_1 + 0x10) != 0) || (**(char **)(iVar5 + 0x28) != '&')) {
              uVar8 = **(undefined **)(iVar5 + 0x28);
              goto LAB_00183778;
            }
            *(undefined *)(iVar4 + iVar12) = 0x26;
            *(undefined *)(iVar4 + iVar12 + 1) = 0x23;
            *(undefined *)(iVar4 + iVar12 + 2) = 0x33;
            *(undefined *)(iVar4 + iVar12 + 3) = 0x38;
            *(undefined *)(iVar4 + iVar12 + 4) = 0x3b;
            iVar12 = iVar12 + 5;
          }
          else if (*(int *)(param_1 + 0x10) == 0) {
            local_44 = (char *)FUN_0019c49c(*(undefined4 *)(iVar5 + 8));
            local_40 = *(undefined **)(iVar5 + 8);
            if (((*(int *)(iVar5 + 0x30) != 6) && (*(int *)(iVar5 + 0x28) != 0)) &&
               (iVar5 = FUN_0018357c(param_1,*(int *)(iVar5 + 0x28),1,0,0,0), iVar5 != 0)) {
              (***(code ***)(iVar11 + DAT_00183904))();
            }
            *(undefined *)(iVar4 + iVar12) = 0x26;
            iVar5 = DAT_00183900;
            iVar7 = iVar4;
            while (iVar4 = iVar7, (-9 - (int)local_44) + iVar13 <= iVar12 + 1) {
              iVar13 = (int)local_44 + 10 + iVar13 * 2;
              iVar7 = (***(code ***)(iVar11 + iVar5))(iVar4,iVar13);
              if (iVar7 == 0) goto LAB_00183aa6;
            }
            puVar9 = (undefined *)(iVar4 + iVar12);
            local_4c = (char *)(iVar12 + 1);
            while( true ) {
              puVar9 = puVar9 + 1;
              iVar12 = (int)local_4c + 1;
              if ((int)local_44 < 1) break;
              uVar8 = *local_40;
              local_40 = local_40 + 1;
              *puVar9 = uVar8;
              local_44 = (char *)((int)local_44 + -1);
              local_4c = (char *)iVar12;
            }
            *(undefined *)(iVar4 + (int)local_4c) = 0x3b;
          }
          else {
            local_4c = (char *)FUN_0018357c(param_1,*(undefined4 *)(iVar5 + 0x28),1,0,0,0);
            iVar5 = DAT_00183900;
            local_44 = local_4c;
            if (local_4c == (char *)0x0) goto LAB_00183990;
            for (; *local_44 != '\0'; local_44 = local_44 + 1) {
              *(char *)(iVar4 + iVar12) = *local_44;
              iVar12 = iVar12 + 1;
              iVar7 = iVar4;
              if (iVar13 + -9 <= iVar12) {
                iVar13 = iVar13 * 2 + 10;
                iVar7 = (***(code ***)(iVar11 + iVar5))(iVar4,iVar13);
                if (iVar7 == 0) goto LAB_00183aaa;
              }
              iVar4 = iVar7;
            }
            (***(code ***)(iVar11 + DAT_00183904))(local_4c);
          }
LAB_001837ec:
          bVar3 = false;
          goto LAB_00183994;
        }
      }
LAB_00183990:
      bVar3 = false;
    }
    else {
      if (((iVar5 == 0xd) || (iVar5 == 0x20)) || ((iVar5 == 9 || (iVar5 == 10)))) {
        if ((iVar12 != 0) || (param_3 == 0)) {
          if ((!bVar3) || (param_3 == 0)) {
            iVar5 = iVar4;
            if (local_1c[0] == 1) {
              *(undefined *)(iVar4 + iVar12) = 0x20;
              iVar12 = iVar12 + 1;
              iVar7 = DAT_00183adc;
            }
            else {
              iVar4 = FUN_0017ab20(iVar4 + iVar12,0x20);
              iVar12 = iVar12 + iVar4;
              iVar7 = DAT_00183adc;
            }
            while (iVar4 = iVar5, iVar13 + -9 <= iVar12) {
              iVar13 = iVar13 * 2 + 10;
              iVar5 = (***(code ***)(iVar11 + iVar7))(iVar4,iVar13);
              if (iVar5 == 0) goto LAB_00183aa6;
            }
          }
          bVar3 = true;
        }
      }
      else {
        if (local_1c[0] == 1) {
          *(char *)(iVar4 + iVar12) = (char)iVar5;
          iVar12 = iVar12 + 1;
        }
        else {
          iVar5 = FUN_0017ab20(iVar4 + iVar12);
          iVar12 = iVar12 + iVar5;
        }
        bVar3 = false;
        if (iVar13 + -9 <= iVar12) {
          iVar13 = iVar13 * 2 + 10;
          iVar5 = (***(code ***)(iVar11 + DAT_00183adc))(iVar4,iVar13);
          if (iVar5 == 0) goto LAB_00183aa6;
          bVar3 = false;
          iVar4 = iVar5;
        }
      }
      iVar5 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar5 + 0x10) == '\n') {
        *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
        iVar5 = *(int *)(param_1 + 0x24);
        iVar7 = 1;
      }
      else {
        iVar7 = *(int *)(iVar5 + 0x20) + 1;
      }
      *(int *)(iVar5 + 0x20) = iVar7;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
    }
LAB_00183994:
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    iVar5 = FUN_0017a70c(param_1,local_1c);
  }
  if ((bVar3) && (param_3 != 0)) {
    pcVar10 = (char *)(iVar4 + iVar12 + -1);
    while (cVar2 = *pcVar10, pcVar10 = pcVar10 + -1, cVar2 == ' ') {
      iVar12 = iVar12 + -1;
    }
  }
  *(undefined *)(iVar4 + iVar12) = 0;
  cVar2 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar2 == '<') {
    FUN_0017b7fc(param_1,0x26,0);
    goto LAB_00183a9c;
  }
  if (cVar2 == cVar1) {
    FUN_0017a4a4(param_1);
    goto LAB_00183a9c;
  }
  if (iVar5 == 0) {
LAB_00183a86:
    uVar6 = 0x28;
    iVar5 = DAT_00183af8;
  }
  else {
    if (iVar5 < 0x100) {
      if (((iVar5 - 9U < 2) || (iVar5 == 0xd)) || (0x1f < iVar5)) goto LAB_00183a86;
    }
    else if ((((uint)(iVar5 + DAT_00183ae0) <= DAT_00183ae4) || (iVar5 - 0x100U <= DAT_00183ae8)) ||
            ((uint)(iVar5 + DAT_00183aec) <= DAT_00183af0)) goto LAB_00183a86;
    uVar6 = 9;
    iVar5 = DAT_00183af4;
  }
  FUN_0017bae0(param_1,uVar6,iVar11 + iVar5);
LAB_00183a9c:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar12;
    return iVar4;
  }
  return iVar4;
}


