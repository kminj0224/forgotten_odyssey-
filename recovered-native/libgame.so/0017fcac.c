/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017fcac  Symbol: FUN_0017fcac */

uint FUN_0017fcac(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_20;
  uint local_1c;
  
  iVar4 = *(int *)(param_1 + 0x24);
  pcVar2 = *(char **)(iVar4 + 0x10);
  iVar8 = DAT_0017ff24 + 0x17fcba;
  if ((*pcVar2 == '&') && (pcVar2[1] == '#')) {
    piVar3 = (int *)(param_1 + 200);
    if (pcVar2[2] == 'x') {
      *piVar3 = *piVar3 + 3;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 3;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar4 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar4 < 1)) {
        FUN_0017c6c4(param_1);
      }
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      local_1c = 0;
      iVar4 = 0;
      uVar6 = 0;
      while( true ) {
        pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
        if (*pcVar2 == ';') break;
        if (iVar4 < 0x15) {
          uVar7 = iVar4 + 1;
        }
        else {
          if ((*(int *)(param_1 + 0x124) == 0) &&
             (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pcVar2 < 0xfa)) {
            FUN_0017c738(param_1);
          }
          uVar7 = 0;
        }
        uVar5 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
        if (9 < (uVar5 - 0x30 & 0xff)) {
          if ((uint)(uVar7 < 0x14) != (int)uVar7 >> 0x1f) {
            if ((uVar5 - 0x61 & 0xff) < 6) {
              iVar4 = -0x57;
            }
            else {
              if (5 < (uVar5 - 0x41 & 0xff)) goto LAB_0017fdac;
              iVar4 = -0x37;
            }
            uVar6 = uVar5 + iVar4 + uVar6 * 0x10;
            goto LAB_0017fdb2;
          }
LAB_0017fdac:
          uVar1 = 6;
LAB_0017fe80:
          FUN_0017b7fc(param_1,uVar1,0);
          uVar6 = 0;
          break;
        }
        uVar6 = (uVar5 - 0x30) + uVar6 * 0x10;
LAB_0017fdb2:
        if (DAT_0017ff28 < uVar6) {
          local_1c = uVar6;
        }
        FUN_0017a4a4(param_1);
        iVar4 = uVar7 + 1;
      }
    }
    else {
      *piVar3 = *piVar3 + 2;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 2;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar4 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar4 < 1)) {
        FUN_0017c6c4(param_1);
      }
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      local_20 = 0;
      local_1c = 0;
      uVar6 = 0;
      while( true ) {
        pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
        if (*pcVar2 == ';') break;
        if (local_20 < 0x15) {
          local_20 = local_20 + 1;
        }
        else if ((*(int *)(param_1 + 0x124) == 0) &&
                (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pcVar2 < 0xfa)) {
          FUN_0017c738(param_1);
          local_20 = 0;
        }
        else {
          local_20 = 0;
        }
        uVar7 = **(byte **)(*(int *)(param_1 + 0x24) + 0x10) - 0x30;
        if (9 < (uVar7 & 0xff)) {
          uVar1 = 7;
          goto LAB_0017fe80;
        }
        uVar6 = uVar7 + uVar6 * 10;
        uVar7 = uVar6;
        if (uVar6 <= DAT_0017ff28) {
          uVar7 = local_1c;
        }
        local_1c = uVar7;
        FUN_0017a4a4(param_1);
        local_20 = local_20 + 1;
      }
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar4 + 0x10) == ';') {
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 1;
    }
    if (uVar6 < 0x100) {
      if (((1 < uVar6 - 9) && (uVar6 != 0xd)) && (uVar6 < 0x20)) goto LAB_0017ff0e;
    }
    else if (((DAT_0017ff30 < uVar6 + DAT_0017ff2c) && (DAT_0017ff34 < uVar6 - 0x100)) &&
            (DAT_0017ff3c < uVar6 + DAT_0017ff38)) goto LAB_0017ff0e;
    if (local_1c == 0) {
      return uVar6;
    }
  }
  else {
    FUN_0017b7fc(param_1,8,0);
    uVar6 = 0;
  }
LAB_0017ff0e:
  FUN_0017bd20(param_1,9,iVar8 + DAT_0017ff40,uVar6);
  return 0;
}


