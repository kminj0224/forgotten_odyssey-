/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e3d98  Symbol: FUN_001e3d98 */

int ** FUN_001e3d98(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int *local_40;
  int *piStack_3c;
  int *local_38;
  int *local_34;
  uint local_2c [2];
  
  iVar1 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  if ((*(uint *)(param_7 + 0xc) & 1) != 0) {
    iVar2 = FUN_001c60f4(DAT_001e415c + 0x1e3e70);
    iVar6 = *(int *)(*(int *)(iVar1 + 0x6c) + 0xc);
    iVar7 = *(int *)(iVar6 + iVar2 * 4);
    if (iVar7 == 0) {
      piVar4 = (int *)operator_new(0x68);
      *piVar4 = DAT_001e4160 + 0x1e40b4;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[3] = 0;
      *(undefined *)(piVar4 + 4) = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar4[8] = 0;
      *(undefined *)(piVar4 + 9) = 0;
      *(undefined *)((int)piVar4 + 0x25) = 0;
      *(undefined *)(piVar4 + 0x19) = 0;
      FUN_001da934(piVar4,iVar1 + 0x6c);
      FUN_001c5f50(*(undefined4 *)(iVar1 + 0x6c),piVar4,iVar2);
      iVar7 = *(int *)(iVar6 + iVar2 * 4);
    }
    iVar1 = 1 - *(uint *)(iVar7 + 0x20);
    bVar10 = true;
    if (1 < *(uint *)(iVar7 + 0x20)) {
      iVar1 = 0;
    }
    uVar8 = 1 - *(uint *)(iVar7 + 0x18);
    if (1 < *(uint *)(iVar7 + 0x18)) {
      uVar8 = 0;
    }
    uVar5 = 0;
    bVar9 = true;
joined_r0x001e3eb0:
    if ((iVar1 != 0) && (uVar8 != 0)) {
      uVar8 = 0;
LAB_001e3fb4:
      if (!bVar9) goto LAB_001e401c;
      uVar3 = uVar5;
      if (uVar5 != 0) {
        uVar3 = 1;
      }
      if (*(uint *)(iVar7 + 0x20) != uVar5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) goto LAB_001e401c;
      *param_9 = 0;
      if ((bVar10) && (*(uint *)(iVar7 + 0x18) == uVar5)) {
        *param_8 = 4;
      }
      else {
        if (uVar8 != 0) {
          uVar8 = 2;
        }
        *param_8 = uVar8;
      }
      goto LAB_001e3e50;
    }
    iVar2 = FUN_001df02c(&local_38);
    iVar6 = FUN_001df02c(&param_5);
    if (iVar2 == iVar6) {
      uVar8 = 1;
      goto LAB_001e3fb4;
    }
    uVar3 = FUN_001d8014(&local_38);
    if (iVar1 == 0) {
      bVar9 = *(byte *)(*(int *)(iVar7 + 0x1c) + uVar5) == uVar3;
    }
    if (bVar9) {
      if (uVar8 == 0) goto LAB_001e3f0c;
    }
    else {
      if (uVar8 != 0) goto LAB_001e4018;
LAB_001e3f0c:
      bVar10 = *(byte *)(*(int *)(iVar7 + 0x14) + uVar5) == uVar3;
    }
    if (!bVar10) {
      if (iVar1 != 0) {
        uVar8 = 0;
        goto LAB_001e3fb4;
      }
      if (!bVar9) goto LAB_001e4018;
    }
    uVar5 = uVar5 + 1;
    if (local_38 != (int *)0x0) {
      if ((uint)local_38[2] < (uint)local_38[3]) {
        local_38[2] = local_38[2] + 1;
      }
      else {
        (**(code **)(*local_38 + 0x28))();
      }
      local_34 = (int *)0xffffffff;
    }
    if (bVar9) {
      if (uVar5 < *(uint *)(iVar7 + 0x20)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 1;
    }
    if (bVar10) {
      uVar8 = (uint)(*(uint *)(iVar7 + 0x18) <= uVar5);
    }
    else {
      uVar8 = 1;
    }
    goto joined_r0x001e3eb0;
  }
  local_2c[0] = 0xffffffff;
  FUN_001e34f4(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
  local_38 = local_40;
  local_34 = piStack_3c;
  if (local_2c[0] < 2) {
    *param_9 = (char)local_2c[0];
  }
  else {
    *param_9 = 1;
    *param_8 = 4;
    iVar1 = FUN_001df02c(&local_38);
    iVar2 = FUN_001df02c(&param_5);
    if (iVar1 == iVar2) {
      *param_8 = *param_8 | 2;
    }
  }
LAB_001e3e50:
  *param_1 = local_38;
  param_1[1] = local_34;
  return param_1;
LAB_001e4018:
  uVar8 = 0;
LAB_001e401c:
  if (bVar10) {
    uVar3 = uVar5;
    if (uVar5 != 0) {
      uVar3 = 1;
    }
    if (*(uint *)(iVar7 + 0x18) != uVar5) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      if (uVar8 != 0) {
        uVar8 = 2;
      }
      *param_9 = 1;
      *param_8 = uVar8;
      goto LAB_001e3e50;
    }
  }
  *param_9 = 0;
  *param_8 = 4;
  if (uVar8 != 0) {
    *param_8 = 6;
  }
  goto LAB_001e3e50;
}


