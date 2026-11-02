/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198434  Symbol: FUN_00198434 */

void FUN_00198434(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int local_38;
  int local_30;
  int local_28;
  int local_1c [2];
  
  iVar9 = DAT_0019872c + 0x198444;
  if (param_1[0x2c] != 0) {
    return;
  }
  iVar5 = param_1[9];
  if (**(char **)(iVar5 + 0x10) != '<') {
    return;
  }
  if ((*(char **)(iVar5 + 0x10))[1] != '?') {
    return;
  }
  iVar4 = param_1[0x2b];
  param_1[0x2b] = 2;
  param_1[0x32] = param_1[0x32] + 2;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 2;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
  iVar5 = param_1[9];
  if ((500 < *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) &&
     (*(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) <= DAT_00198730)) {
    FUN_0017a1c0();
  }
  iVar5 = FUN_001981f8(param_1);
  if (iVar5 == 0) {
    FUN_00195ba4(param_1,0x2e,iVar9 + DAT_0019875c,0,0);
LAB_00198720:
    param_1[0x2b] = iVar4;
    return;
  }
  if ((param_1[0x2c] == 0) && (iVar6 = param_1[9], **(char **)(iVar6 + 0x10) == '>')) {
    param_1[0x32] = param_1[0x32] + 1;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
    if ((*param_1 != 0) &&
       ((param_1[0x35] == 0 && (pcVar7 = *(code **)(*param_1 + 0x4c), pcVar7 != (code *)0x0)))) {
      (*pcVar7)(param_1[1],iVar5);
    }
    param_1[0x2b] = iVar4;
    return;
  }
  iVar6 = (***(code ***)(iVar9 + DAT_00198734))(100);
  if (iVar6 != 0) {
    uVar8 = (uint)**(byte **)(param_1[9] + 0x10);
    if (((1 < uVar8 - 9) && (uVar8 != 0x20)) && (uVar8 != 0xd)) {
      FUN_00195ba4(param_1,0x41,iVar9 + DAT_00198738,iVar5,0);
    }
    FUN_00196588(param_1);
    iVar2 = FUN_001978a4(param_1,local_1c);
    iVar1 = DAT_0019873c;
    local_30 = 0;
    local_28 = 100;
    local_38 = 0;
LAB_0019866e:
    if (iVar2 < 0x100) {
      if ((((1 < iVar2 - 9U) && (iVar2 != 0xd)) && (iVar2 < 0x20)) || (iVar2 == 0x3e))
      goto LAB_001986ae;
    }
    else if (((DAT_00198748 < (uint)(iVar2 + DAT_00198744)) && (DAT_0019874c < iVar2 - 0x100U)) &&
            (DAT_00198754 < (uint)(iVar2 + DAT_00198750))) {
LAB_001986ae:
      *(undefined *)(iVar6 + local_38) = 0;
      if (iVar2 == 0x3e) {
        param_1[0x32] = param_1[0x32] + 1;
        *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
        *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
        if (((*param_1 != 0) && (param_1[0x35] == 0)) &&
           (pcVar7 = *(code **)(*param_1 + 0x4c), pcVar7 != (code *)0x0)) {
          (*pcVar7)(param_1[1],iVar5,iVar6);
        }
      }
      else {
        FUN_00195ba4(param_1,0x2f,iVar9 + DAT_00198758,iVar5,0);
      }
      (***(code ***)(iVar9 + DAT_00198740))(iVar6);
      goto LAB_00198720;
    }
    iVar3 = iVar6;
    if (local_28 <= local_38 + 5) {
      local_28 = local_28 << 1;
      iVar3 = (***(code ***)(iVar9 + iVar1))(iVar6);
      if (iVar3 == 0) goto code_r0x00198578;
    }
    local_30 = local_30 + 1;
    if (0x32 < local_30) {
      if ((param_1[0x49] == 0) &&
         (iVar6 = param_1[9], *(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) < 0xfa)) {
        FUN_0017a2bc(iVar6,0xfa);
        local_30 = 0;
      }
      else {
        local_30 = 0;
      }
    }
    if (local_1c[0] == 1) {
      *(char *)(iVar3 + local_38) = (char)iVar2;
      local_38 = local_38 + 1;
    }
    else {
      iVar6 = FUN_0017abb4(local_1c[0],iVar3 + local_38,iVar2);
      local_38 = local_38 + iVar6;
    }
    iVar6 = param_1[9];
    if (**(char **)(iVar6 + 0x10) == '\n') {
      iVar2 = 1;
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      iVar6 = param_1[9];
    }
    else {
      iVar2 = *(int *)(iVar6 + 0x20) + 1;
    }
    *(int *)(iVar6 + 0x20) = iVar2;
    param_1[0x2c] = 0;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_1c[0];
    param_1[0x32] = param_1[0x32] + 1;
    iVar2 = FUN_001978a4(param_1,local_1c);
    iVar6 = iVar3;
    if (iVar2 == 0) {
      iVar2 = param_1[9];
      if ((500 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) &&
         (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) <= DAT_00198730)) {
        FUN_0017a1c0();
      }
      if ((param_1[0x49] == 0) &&
         (iVar2 = param_1[9], *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) < 0xfa)) {
        FUN_0017a2bc(iVar2,0xfa);
      }
      iVar2 = FUN_001978a4(param_1,local_1c);
    }
    goto LAB_0019866e;
  }
  FUN_00195c00(param_1,0);
LAB_0019858a:
  param_1[0x2b] = iVar4;
  return;
code_r0x00198578:
  FUN_00195c00(param_1,0);
  (***(code ***)(iVar9 + DAT_00198740))(iVar6);
  goto LAB_0019858a;
}


