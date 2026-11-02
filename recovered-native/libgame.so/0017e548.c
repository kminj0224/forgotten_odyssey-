/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017e548  Symbol: FUN_0017e548 */

void FUN_0017e548(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar5 = *(int *)(param_1[9] + 0x38);
  iVar8 = DAT_0017e830 + 0x17e55e;
  local_44 = param_2;
  local_3c = param_3;
  local_34 = param_4;
  if (param_2 == 0) {
    local_44 = (***(code ***)(iVar8 + DAT_0017e834))(100);
    if (local_44 == 0) goto LAB_0017e71c;
    local_34 = 100;
    local_3c = 0;
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  uVar1 = FUN_0017a70c(param_1,local_1c);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0x100) {
      if ((uVar1 - 9 < 2) || (uVar1 == 0xd)) {
LAB_0017e5d6:
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(uVar1 < 0x20) - ((int)uVar1 >> 0x1f);
      }
    }
    else {
      if ((uVar1 + DAT_0017e838 <= DAT_0017e83c) || (uVar1 - 0x100 <= DAT_0017e840))
      goto LAB_0017e5d6;
      uVar2 = (uint)(DAT_0017e848 < uVar1 + DAT_0017e844);
    }
    iVar6 = DAT_0017e84c;
    if ((uVar2 & 0xff) != 0) {
LAB_0017e8f6:
      FUN_0017bd20(param_1,9,iVar8 + iVar6,uVar1);
      goto LAB_0017e944;
    }
    iVar6 = param_1[9];
    if (**(char **)(iVar6 + 0x10) == '\n') {
      iVar3 = 1;
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      iVar6 = param_1[9];
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x20) + 1;
    }
    *(int *)(iVar6 + 0x20) = iVar3;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_1c[0];
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    local_40 = FUN_0017a70c(param_1,&local_20);
    if (local_40 != 0) {
      if ((int)local_40 < 0x100) {
        if ((local_40 - 9 < 2) || (local_40 == 0xd)) {
LAB_0017e66c:
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(local_40 < 0x20) - ((int)local_40 >> 0x1f);
        }
      }
      else {
        if ((local_40 + DAT_0017e838 <= DAT_0017e83c) || (local_40 - 0x100 <= DAT_0017e840))
        goto LAB_0017e66c;
        uVar2 = (uint)(DAT_0017e848 < local_40 + DAT_0017e844);
      }
      iVar6 = DAT_0017e84c;
      if ((uVar2 & 0xff) != 0) goto LAB_0017e8f6;
      iVar6 = param_1[9];
      if (**(char **)(iVar6 + 0x10) == '\n') {
        iVar3 = 1;
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
        iVar6 = param_1[9];
      }
      else {
        iVar3 = *(int *)(iVar6 + 0x20) + 1;
      }
      *(int *)(iVar6 + 0x20) = iVar3;
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_20;
      if (**(char **)(param_1[9] + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      uVar2 = FUN_0017a70c(param_1,&local_24);
      iVar6 = DAT_0017e850;
      if (uVar2 != 0) {
        local_38 = 0;
        uVar9 = uVar1;
LAB_0017e81a:
        uVar1 = uVar2;
        if (0xff < (int)uVar1) {
          if (((uVar1 + DAT_0017e954 <= DAT_0017e958) || (uVar1 - 0x100 <= DAT_0017e95c)) ||
             (uVar1 + DAT_0017e960 <= DAT_0017e964)) goto LAB_0017e87a;
LAB_0017e88e:
          *(undefined *)(local_44 + local_3c) = 0;
          iVar6 = local_44;
          iVar3 = DAT_0017e968;
          if (uVar1 == 0) goto LAB_0017e940;
          if ((int)uVar1 < 0x100) {
            if ((uVar1 - 9 < 2) || (uVar1 == 0xd)) {
LAB_0017e8d4:
              uVar2 = 0;
            }
            else {
              uVar2 = (uint)(uVar1 < 0x20) - ((int)uVar1 >> 0x1f);
            }
          }
          else {
            if ((uVar1 + DAT_0017e954 <= DAT_0017e958) || (uVar1 - 0x100 <= DAT_0017e95c))
            goto LAB_0017e8d4;
            uVar2 = (uint)(DAT_0017e964 < uVar1 + DAT_0017e960);
          }
          iVar6 = DAT_0017e96c;
          if ((uVar2 & 0xff) != 0) goto LAB_0017e8f6;
          if (iVar5 != *(int *)(param_1[9] + 0x38)) {
            FUN_0017bae0(param_1,0x5a,iVar8 + DAT_0017e970);
          }
          FUN_0017a4a4(param_1);
          if (((*param_1 != 0) && (pcVar7 = *(code **)(*param_1 + 0x50), pcVar7 != (code *)0x0)) &&
             (param_1[0x35] == 0)) {
            (*pcVar7)(param_1[1],local_44);
          }
          goto LAB_0017e944;
        }
        if (((1 < uVar1 - 9) && (uVar1 != 0xd)) && ((int)uVar1 < 0x20)) goto LAB_0017e88e;
LAB_0017e87a:
        if ((local_40 == 0x2d) && (uVar1 == 0x3e)) {
          if (uVar9 == 0x2d) goto LAB_0017e88e;
        }
        else if ((uVar9 == 0x2d) && (local_40 == 0x2d)) {
          FUN_0017b7fc(param_1,0x50,0);
        }
        iVar3 = local_44;
        if (local_34 <= local_3c + 5) {
          local_34 = local_34 << 1;
          iVar3 = (***(code ***)(iVar8 + iVar6))(local_44);
          if (iVar3 == 0) goto code_r0x0017e712;
        }
        local_44 = iVar3;
        if (local_1c[0] == 1) {
          *(char *)(local_44 + local_3c) = (char)uVar9;
          local_3c = local_3c + 1;
        }
        else {
          iVar3 = FUN_0017ab20(local_44 + local_3c,uVar9);
          local_3c = local_3c + iVar3;
        }
        local_38 = local_38 + 1;
        local_1c[0] = local_20;
        local_20 = local_24;
        if (0x32 < local_38) {
          if ((param_1[0x49] == 0) &&
             (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
            local_38 = 0;
          }
          else {
            local_38 = 0;
          }
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
        *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_24;
        if (**(char **)(param_1[9] + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        uVar2 = FUN_0017a70c(param_1,&local_24);
        uVar9 = local_40;
        local_40 = uVar1;
        if (uVar2 == 0) {
          if (param_1[0x49] == 0) {
            iVar3 = param_1[9];
            if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
               (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_0017e858)) {
              FUN_0017cc50(param_1);
            }
          }
          if ((param_1[0x49] == 0) &&
             (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
          }
          uVar2 = FUN_0017a70c(param_1,&local_24);
        }
        goto LAB_0017e81a;
      }
    }
  }
  iVar6 = 0;
  iVar3 = DAT_0017e974;
LAB_0017e940:
  FUN_0017b798(param_1,0x2d,iVar8 + iVar3,iVar6);
LAB_0017e944:
  (***(code ***)(iVar8 + DAT_0017e978))(local_44);
  return;
code_r0x0017e712:
  (***(code ***)(iVar8 + DAT_0017e854))(local_44);
LAB_0017e71c:
  FUN_00179430(param_1,0);
  return;
}


