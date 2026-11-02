/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4b74  Symbol: FUN_001a4b74 */

void FUN_001a4b74(int *param_1,int param_2,int param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_bc;
  undefined local_b4 [152];
  int local_1c;
  
  iVar5 = DAT_001a4e00 + 0x1a4b82;
  local_1c = **(int **)(iVar5 + DAT_001a4e04);
  if (param_1 == (int *)0x0) goto LAB_001a4dea;
  if (param_4 == (code *)0x0) {
    param_4 = **(code ***)(iVar5 + DAT_001a4e08);
    param_5 = **(undefined4 **)(iVar5 + DAT_001a4e0c);
  }
  iVar1 = param_1[5];
  iVar3 = *param_1;
  iVar2 = param_1[3];
  iVar4 = param_1[0xc];
  if (param_1[1] == 0) goto LAB_001a4dea;
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 1)) {
    local_bc = 0;
  }
  else {
    local_bc = *(int *)(iVar4 + 8);
  }
  if (param_2 == 0) {
    if (param_1[4] == 0) {
      if ((iVar3 != 1) || (iVar1 == 0)) {
        local_dc = 0;
        local_d8 = 0;
        goto LAB_001a4c84;
      }
      (*param_4)(param_5,iVar5 + DAT_001a4e14,iVar1);
    }
    else {
      (*param_4)(param_5,iVar5 + DAT_001a4e10,param_1[4],iVar1);
    }
    local_d8 = 0;
LAB_001a4c82:
    local_dc = 0;
  }
  else {
    local_dc = *(int *)(param_2 + 0x24);
    if (local_dc == 0) {
      local_d8 = 0;
    }
    else {
      if ((*(int *)(local_dc + 4) == 0) && (1 < *(int *)(param_2 + 0x28))) {
        local_d4 = *(int *)((*(int *)(param_2 + 0x28) + -2) * 4 + *(int *)(param_2 + 0x30));
        local_d8 = local_dc;
        if (local_d4 == 0) goto LAB_001a4c82;
      }
      else {
        local_d8 = 0;
        local_d4 = local_dc;
      }
      if (*(int *)(local_d4 + 4) == 0) {
        if ((iVar3 == 1) && (iVar1 != 0)) {
          (*param_4)(param_5,iVar5 + DAT_001a4e14,*(undefined4 *)(local_d4 + 0x1c));
          local_dc = local_d4;
        }
        else {
          local_dc = local_d4;
        }
      }
      else {
        (*param_4)(param_5,iVar5 + DAT_001a4e10,*(int *)(local_d4 + 4),
                   *(undefined4 *)(local_d4 + 0x1c));
        local_dc = local_d4;
      }
    }
  }
LAB_001a4c84:
  if (local_bc != 0) {
    (*param_4)(param_5,iVar5 + DAT_001a4e18,local_bc);
  }
  if (iVar3 - 1U < 0x1b) {
                    /* WARNING: Could not emulate address calculation at 0x001a4ca2 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar5 + DAT_001a4e1c + (iVar3 - 1U) * 4) + iVar5 + DAT_001a4e1c))();
    return;
  }
  iVar4 = DAT_001a4e70;
  if ((((iVar2 == 1) || (iVar4 = DAT_001a4e6c, iVar2 == 0)) || (iVar4 = DAT_001a4e74, iVar2 == 2))
     || (iVar2 == 3)) {
    (*param_4)(param_5,iVar5 + iVar4);
  }
  if (param_3 == 0) {
    param_3 = iVar5 + DAT_001a4e80;
    iVar2 = DAT_001a4e78;
  }
  else {
    iVar4 = FUN_0019c49c(param_3);
    if ((iVar4 < 1) || (iVar2 = DAT_001a4e78, *(char *)(param_3 + iVar4 + -1) == '\n')) {
      iVar2 = DAT_001a4e7c;
    }
  }
  (*param_4)(param_5,iVar5 + iVar2,param_3);
  if ((param_2 != 0) && (FUN_001a48cc(local_dc,param_4,param_5), local_d8 != 0)) {
    if (*(int *)(local_d8 + 4) == 0) {
      if ((iVar3 == 1) && (iVar1 != 0)) {
        (*param_4)(param_5,iVar5 + DAT_001a4e88,*(undefined4 *)(local_d8 + 0x1c));
      }
    }
    else {
      (*param_4)(param_5,iVar5 + DAT_001a4e84,*(int *)(local_d8 + 4),
                 *(undefined4 *)(local_d8 + 0x1c));
    }
    FUN_001a48cc(local_d8,param_4,param_5);
  }
  if ((((iVar3 == 0xc) && (param_1[6] != 0)) && (iVar1 = param_1[9], iVar1 < 100)) &&
     (iVar2 = FUN_0019c49c(), iVar1 < iVar2)) {
    (*param_4)(param_5,iVar5 + DAT_001a4e78,param_1[6]);
    for (iVar1 = 0; iVar1 < param_1[9]; iVar1 = iVar1 + 1) {
      local_b4[iVar1] = 0x20;
    }
    local_b4[iVar1] = 0x5e;
    local_b4[iVar1 + 1] = 0;
    (*param_4)(param_5,iVar5 + DAT_001a4e78);
  }
LAB_001a4dea:
  if (local_1c == **(int **)(iVar5 + DAT_001a4e04)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


