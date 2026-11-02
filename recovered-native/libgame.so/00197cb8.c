/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197cb8  Symbol: FUN_00197cb8 */

void FUN_00197cb8(int *param_1)

{
  int iVar1;
  code **ppcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_30;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar11 = DAT_00197fb8 + 0x197cc8;
  if (param_1[0x2c] != 0) {
    return;
  }
  iVar1 = param_1[9];
  pcVar7 = *(char **)(iVar1 + 0x10);
  if (*pcVar7 != '<') {
    return;
  }
  if (pcVar7[1] != '!') {
    return;
  }
  if (pcVar7[2] != '-') {
    return;
  }
  if (pcVar7[3] != '-') {
    return;
  }
  iVar8 = param_1[0x2b];
  param_1[0x2b] = 5;
  if ((500 < *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) &&
     (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) <= DAT_00197fbc)) {
    FUN_0017a1c0();
  }
  param_1[0x32] = param_1[0x32] + 4;
  iVar1 = DAT_00197fc0;
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 4;
  ppcVar2 = *(code ***)(iVar11 + iVar1);
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 4;
  iVar3 = (**ppcVar2)(100);
  iVar1 = DAT_00197fc4;
  if (iVar3 != 0) {
    local_3c = FUN_001978a4(param_1,local_1c);
    iVar1 = param_1[9];
    if (**(char **)(iVar1 + 0x10) == '\n') {
      iVar5 = 1;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar1 = param_1[9];
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x20) + 1;
    }
    *(int *)(iVar1 + 0x20) = iVar5;
    param_1[0x2c] = 0;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_1c[0];
    param_1[0x32] = param_1[0x32] + 1;
    local_30 = FUN_001978a4(param_1,&local_20);
    iVar1 = param_1[9];
    if (**(char **)(iVar1 + 0x10) == '\n') {
      iVar5 = 1;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      iVar1 = param_1[9];
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x20) + 1;
    }
    *(int *)(iVar1 + 0x20) = iVar5;
    param_1[0x2c] = 0;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_20;
    param_1[0x32] = param_1[0x32] + 1;
    uVar4 = FUN_001978a4(param_1,&local_24);
    iVar1 = DAT_00197fc8;
    local_38 = 100;
    local_40 = 0;
    do {
      uVar10 = uVar4;
      if (0xff < (int)uVar10) {
        if (((uVar10 + DAT_00197fd4 <= DAT_00197fd8) || (uVar10 - 0x100 <= DAT_00197fdc)) ||
           (uVar10 + DAT_00197fe0 <= DAT_00197fe4)) goto LAB_00197f08;
LAB_00197f1e:
        *(undefined *)(iVar3 + local_40) = 0;
        if ((int)uVar10 < 0x100) {
          if ((uVar10 - 9 < 2) || (uVar10 == 0xd)) {
LAB_00197f54:
            uVar4 = 0;
          }
          else {
            uVar4 = (uint)(uVar10 < 0x20) - ((int)uVar10 >> 0x1f);
          }
        }
        else {
          if ((uVar10 + DAT_00197fd4 <= DAT_00197fd8) || (uVar10 - 0x100 <= DAT_00197fdc))
          goto LAB_00197f54;
          uVar4 = (uint)(DAT_00197fe4 < uVar10 + DAT_00197fe0);
        }
        if ((uVar4 & 0xff) == 0) {
          FUN_0017a4a4(param_1);
          if (((*param_1 != 0) && (pcVar9 = *(code **)(*param_1 + 0x50), pcVar9 != (code *)0x0)) &&
             (param_1[0x35] == 0)) {
            (*pcVar9)(param_1[1],iVar3);
          }
        }
        else {
          FUN_00195ba4(param_1,0x2d,iVar11 + DAT_00197fe8,iVar3,0);
        }
        (***(code ***)(iVar11 + DAT_00197fcc))(iVar3);
        goto LAB_00197fac;
      }
      if (((1 < uVar10 - 9) && (uVar10 != 0xd)) && ((int)uVar10 < 0x20)) goto LAB_00197f1e;
LAB_00197f08:
      if (((local_30 == 0x2d) && (uVar10 == 0x3e)) && (local_3c == 0x2d)) goto LAB_00197f1e;
      iVar5 = iVar3;
      if (local_38 <= local_40 + 5) {
        local_38 = local_38 << 1;
        iVar5 = (***(code ***)(iVar11 + iVar1))(iVar3,local_38);
        if (iVar5 == 0) goto code_r0x00197e00;
      }
      if (local_1c[0] == 1) {
        *(undefined *)(iVar5 + local_40) = (undefined)local_3c;
        local_40 = local_40 + 1;
      }
      else {
        iVar3 = FUN_0017abb4(local_1c[0],iVar5 + local_40,local_3c);
        local_40 = local_40 + iVar3;
      }
      local_1c[0] = local_20;
      local_20 = local_24;
      iVar3 = param_1[9];
      if (**(char **)(iVar3 + 0x10) == '\n') {
        iVar6 = 1;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
        iVar3 = param_1[9];
      }
      else {
        iVar6 = *(int *)(iVar3 + 0x20) + 1;
      }
      *(int *)(iVar3 + 0x20) = iVar6;
      param_1[0x2c] = 0;
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + local_24;
      param_1[0x32] = param_1[0x32] + 1;
      uVar4 = FUN_001978a4(param_1,&local_24);
      if (uVar4 == 0) {
        iVar3 = param_1[9];
        if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
           (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_00197fbc)) {
          FUN_0017a1c0();
        }
        if ((param_1[0x49] == 0) &&
           (iVar3 = param_1[9], *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) < 0xfa)) {
          FUN_0017a2bc(iVar3,0xfa);
        }
        uVar4 = FUN_001978a4(param_1,&local_24);
      }
      local_3c = local_30;
      iVar3 = iVar5;
      local_30 = uVar10;
    } while( true );
  }
LAB_00197e0c:
  FUN_00195c00(param_1,iVar11 + iVar1);
LAB_00197fac:
  param_1[0x2b] = iVar8;
  return;
code_r0x00197e00:
  (***(code ***)(iVar11 + DAT_00197fcc))(iVar3);
  iVar1 = DAT_00197fd0;
  goto LAB_00197e0c;
}


