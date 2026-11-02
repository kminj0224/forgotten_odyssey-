/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ed28  Symbol: FUN_0017ed28 */

int FUN_0017ed28(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int local_30;
  uint local_28;
  int local_1c [2];
  
  iVar8 = DAT_0017ef94 + 0x17ed34;
  uVar5 = *(undefined4 *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar7 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0xc)) &&
       (*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) <= DAT_0017ef98)) {
      FUN_0017cc50(param_1);
    }
  }
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_0017a4a4(param_1);
    local_28 = 0x22;
  }
  else {
    if (cVar1 != '\'') {
      FUN_0017b7fc(param_1,0x2b,0);
      return 0;
    }
    FUN_0017a4a4(param_1);
    local_28 = 0x27;
  }
  iVar7 = (***(code ***)(iVar8 + DAT_0017ef9c))(100);
  if (iVar7 == 0) {
    FUN_00179430(param_1,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0xd;
  uVar3 = FUN_0017a70c(param_1,local_1c);
  iVar2 = DAT_0017efa0;
  local_30 = 100;
  local_34 = 0;
  iVar9 = 0;
  while ((int)uVar3 < 0x100) {
    if (((1 < uVar3 - 9) && (uVar3 != 0xd)) && ((int)uVar3 < 0x20)) goto LAB_0017ef28;
LAB_0017ef20:
    if (uVar3 == local_28) goto LAB_0017ef28;
    iVar4 = iVar7;
    if (local_30 <= iVar9 + 5) {
      local_30 = local_30 << 1;
      iVar4 = (***(code ***)(iVar8 + iVar2))(iVar7,local_30);
      if (iVar4 == 0) {
        (***(code ***)(iVar8 + DAT_0017efa4))(iVar7);
        FUN_00179430(param_1,0);
        *(undefined4 *)(param_1 + 0xac) = uVar5;
        return 0;
      }
    }
    local_34 = local_34 + 1;
    if (0x32 < local_34) {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
        local_34 = 0;
      }
      else {
        local_34 = 0;
      }
    }
    if (local_1c[0] == 1) {
      *(char *)(iVar4 + iVar9) = (char)uVar3;
      iVar9 = iVar9 + 1;
    }
    else {
      iVar7 = FUN_0017ab20(iVar4 + iVar9,uVar3);
      iVar9 = iVar9 + iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar7 + 0x10) == '\n') {
      iVar6 = 1;
      *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
      iVar7 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar6 = *(int *)(iVar7 + 0x20) + 1;
    }
    *(int *)(iVar7 + 0x20) = iVar6;
    *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
         *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    uVar3 = FUN_0017a70c(param_1,local_1c);
    iVar7 = iVar4;
    if (uVar3 == 0) {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      if (*(int *)(param_1 + 0x124) == 0) {
        iVar4 = *(int *)(param_1 + 0x24);
        if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
           (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_0017ef98)) {
          FUN_0017cc50(param_1);
        }
      }
      uVar3 = FUN_0017a70c(param_1,local_1c);
    }
  }
  if (((uVar3 + DAT_0017efa8 <= DAT_0017efac) || (uVar3 - 0x100 <= DAT_0017efb0)) ||
     (uVar3 + DAT_0017efb4 <= DAT_0017efb8)) goto LAB_0017ef20;
LAB_0017ef28:
  *(undefined *)(iVar7 + iVar9) = 0;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  if ((int)uVar3 < 0x100) {
    if ((1 < uVar3 - 9) && (uVar3 != 0xd)) {
      uVar3 = (uint)(uVar3 < 0x20) - ((int)uVar3 >> 0x1f);
      goto LAB_0017ef74;
    }
  }
  else if ((DAT_0017efac < uVar3 + DAT_0017efa8) && (DAT_0017efb0 < uVar3 - 0x100)) {
    uVar3 = (uint)(DAT_0017efb8 < uVar3 + DAT_0017efb4);
    goto LAB_0017ef74;
  }
  uVar3 = 0;
LAB_0017ef74:
  if ((uVar3 & 0xff) == 0) {
    FUN_0017a4a4(param_1);
    return iVar7;
  }
  FUN_0017b7fc(param_1,0x2c,0);
  return iVar7;
}


