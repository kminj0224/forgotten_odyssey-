/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017cdd4  Symbol: FUN_0017cdd4 */

int FUN_0017cdd4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  uVar5 = *(undefined4 *)(param_1 + 0xac);
  iVar9 = DAT_0017cf84 + 0x17cdec;
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar7 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0xc)) &&
       (*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) <= DAT_0017cf88)) {
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
  iVar7 = (***(code ***)(iVar9 + DAT_0017cf8c))(100);
  if (iVar7 == 0) {
    FUN_00179430(param_1,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = 0x10;
    iVar2 = DAT_0017cf94;
    local_38 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    iVar6 = *(int *)(iVar9 + DAT_0017cf90);
    local_34 = 0;
    local_30 = 0;
    local_2c = 100;
    while ((*(char *)(iVar6 + local_38) != '\0' && (local_38 != local_28))) {
      local_30 = local_30 + 1;
      iVar4 = iVar7;
      if (local_2c <= local_30) {
        local_2c = local_2c << 1;
        iVar4 = (***(code ***)(iVar9 + iVar2))(iVar7);
        iVar3 = DAT_0017cf98;
        if (iVar4 == 0) {
          FUN_00179430(param_1,0);
          (***(code ***)(iVar9 + iVar3))(iVar7);
          return 0;
        }
      }
      *(undefined *)(iVar4 + local_30 + -1) = (undefined)local_38;
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
      FUN_0017a4a4(param_1);
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      local_38 = (uint)*pbVar8;
      iVar7 = iVar4;
      if (local_38 == 0) {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pbVar8 < 0xfa)) {
          FUN_0017c738(param_1);
        }
        if (*(int *)(param_1 + 0x124) == 0) {
          iVar4 = *(int *)(param_1 + 0x24);
          if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
             (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_0017cf88)) {
            FUN_0017cc50(param_1);
          }
        }
        local_38 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      }
    }
    *(undefined *)(iVar7 + local_30) = 0;
    if (local_38 == local_28) {
      FUN_0017a4a4(param_1);
    }
    else {
      FUN_0017b7fc(param_1,0x2c,0);
    }
    *(undefined4 *)(param_1 + 0xac) = uVar5;
  }
  return iVar7;
}


