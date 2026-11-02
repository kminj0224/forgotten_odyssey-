/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fb5d8  Symbol: FUN_001fb5d8 */

int ** FUN_001fb5d8(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int *local_40;
  int *piStack_3c;
  int *local_38;
  int *local_34;
  undefined auStack_30 [4];
  uint local_2c [2];
  
  local_38 = param_3;
  local_34 = param_4;
  if ((*(uint *)(param_7 + 0xc) & 1) != 0) {
    iVar2 = FUN_001f6704(auStack_30,param_7 + 0x6c);
    bVar9 = true;
    uVar6 = 0;
    bVar8 = true;
    iVar1 = 1 - *(uint *)(iVar2 + 0x20);
    if (1 < *(uint *)(iVar2 + 0x20)) {
      iVar1 = 0;
    }
    uVar7 = 1 - *(uint *)(iVar2 + 0x18);
    if (1 < *(uint *)(iVar2 + 0x18)) {
      uVar7 = 0;
    }
joined_r0x001fb6dc:
    if ((iVar1 != 0) && (uVar7 != 0)) {
      uVar7 = 0;
LAB_001fb7e0:
      if (!bVar8) goto LAB_001fb848;
      uVar5 = uVar6;
      if (uVar6 != 0) {
        uVar5 = 1;
      }
      if (*(uint *)(iVar2 + 0x20) != uVar6) {
        uVar5 = 0;
      }
      if (uVar5 == 0) goto LAB_001fb848;
      *param_9 = 0;
      if ((bVar9) && (*(uint *)(iVar2 + 0x18) == uVar6)) {
        *param_8 = 4;
      }
      else {
        if (uVar7 != 0) {
          uVar7 = 2;
        }
        *param_8 = uVar7;
      }
      goto LAB_001fb690;
    }
    iVar3 = FUN_001f67d0(&local_38);
    iVar4 = FUN_001f67d0(&param_5);
    if (iVar3 == iVar4) {
      uVar7 = 1;
      goto LAB_001fb7e0;
    }
    iVar3 = FUN_001ef914(&local_38);
    if (iVar1 == 0) {
      bVar8 = iVar3 == *(int *)(*(int *)(iVar2 + 0x1c) + uVar6 * 4);
    }
    if (bVar8) {
      if (uVar7 == 0) goto LAB_001fb738;
    }
    else {
      if (uVar7 != 0) goto LAB_001fb844;
LAB_001fb738:
      bVar9 = iVar3 == *(int *)(*(int *)(iVar2 + 0x14) + uVar6 * 4);
    }
    if (!bVar9) {
      if (iVar1 != 0) {
        uVar7 = 0;
        goto LAB_001fb7e0;
      }
      if (!bVar8) goto LAB_001fb844;
    }
    uVar6 = uVar6 + 1;
    if (local_38 != (int *)0x0) {
      if ((uint)local_38[2] < (uint)local_38[3]) {
        local_38[2] = local_38[2] + 4;
      }
      else {
        (**(code **)(*local_38 + 0x28))();
      }
      local_34 = (int *)0xffffffff;
    }
    if (bVar8) {
      if (uVar6 < *(uint *)(iVar2 + 0x20)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 1;
    }
    if (bVar9) {
      uVar7 = (uint)(*(uint *)(iVar2 + 0x18) <= uVar6);
    }
    else {
      uVar7 = 1;
    }
    goto joined_r0x001fb6dc;
  }
  local_2c[0] = 0xffffffff;
  FUN_001faccc(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
  local_38 = local_40;
  local_34 = piStack_3c;
  if (local_2c[0] < 2) {
    *param_9 = (char)local_2c[0];
  }
  else {
    *param_9 = 1;
    *param_8 = 4;
    iVar1 = FUN_001f67d0(&local_38);
    iVar2 = FUN_001f67d0(&param_5);
    if (iVar1 == iVar2) {
      *param_8 = *param_8 | 2;
    }
  }
LAB_001fb690:
  *param_1 = local_38;
  param_1[1] = local_34;
  return param_1;
LAB_001fb844:
  uVar7 = 0;
LAB_001fb848:
  if (bVar9) {
    uVar5 = uVar6;
    if (uVar6 != 0) {
      uVar5 = 1;
    }
    if (*(uint *)(iVar2 + 0x18) != uVar6) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      *param_9 = 1;
      if (uVar7 != 0) {
        uVar7 = 2;
      }
      *param_8 = uVar7;
      goto LAB_001fb690;
    }
  }
  *param_9 = 0;
  *param_8 = 4;
  if (uVar7 != 0) {
    *param_8 = 6;
  }
  goto LAB_001fb690;
}


