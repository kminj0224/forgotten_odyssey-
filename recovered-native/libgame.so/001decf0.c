/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001decf0  Symbol: FUN_001decf0 */

int ** FUN_001decf0(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined param_6,uint param_7,uint param_8)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  int *piVar15;
  int local_90 [3];
  int *piStack_84;
  undefined auStack_7e [38];
  undefined auStack_58 [12];
  undefined4 local_4c;
  uint local_48;
  int **local_44;
  int *local_40;
  char local_3c;
  int local_34;
  int *local_30;
  int *piStack_2c;
  
  local_44 = &local_40;
  local_4c = param_2;
  local_40 = param_3;
  local_3c = param_4;
  iVar3 = FUN_001c60f4(DAT_001defe4 + 0x1ded1c);
  iVar11 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar9 = *(int *)(iVar11 + iVar3 * 4);
  if (iVar9 == 0) {
    piVar4 = (int *)operator_new(0x68);
    *piVar4 = DAT_001defe8 + 0x1def0c;
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
    FUN_001da934(piVar4,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar4,iVar3);
    iVar9 = *(int *)(iVar11 + iVar3 * 4);
  }
  uVar12 = *(uint *)(param_5 + 0xc);
  local_48 = uVar12 & 0x4a;
  piVar15 = local_90;
  uVar13 = (uint)(local_48 != 8 && local_48 != 0x40);
  local_90[0] = iVar9 + 0x26;
  uVar6 = param_7;
  uVar8 = param_8;
  if (((int)(param_8 - (param_7 == 0)) < 0 != (SBORROW4(param_8,(uint)(param_7 == 0)) != false)) &&
     (uVar13 != 0)) {
    uVar6 = -param_7;
    uVar8 = -(param_8 + (param_7 != 0));
  }
  local_90[1] = uVar12;
  local_90[2] = uVar13;
  local_34 = FUN_001de910(auStack_58,local_90[0],uVar6,uVar8);
  uVar2 = local_4c;
  iVar3 = -local_34;
  puVar14 = auStack_58 + iVar3;
  if (*(char *)(iVar9 + 0x10) != '\0') {
    iVar11 = -(local_34 * 2 + 0x10U & 0xfffffff8);
    piVar15 = (int *)((int)local_90 + iVar11);
    puVar14 = auStack_7e + iVar11;
    uVar5 = *(undefined4 *)(iVar9 + 8);
    uVar7 = *(undefined4 *)(iVar9 + 0xc);
    uVar1 = *(undefined *)(iVar9 + 0x25);
    *(int *)((int)local_90 + iVar11) = param_5;
    *(undefined **)((int)local_90 + iVar11 + 4) = puVar14;
    *(undefined **)((int)local_90 + iVar11 + 8) = auStack_58 + iVar3;
    *(int **)((int)local_90 + iVar11 + 0xc) = &local_34;
    FUN_001dc4e8(uVar2,uVar5,uVar7,uVar1);
  }
  if (uVar13 == 0) {
    if (((uVar12 & 0x200) != 0) && ((param_7 | param_8) != 0)) {
      if (local_48 == 0x40) {
        puVar14[-1] = *(undefined *)(iVar9 + 0x2a);
        puVar14 = puVar14 + -1;
        local_34 = local_34 + 1;
      }
      else {
        puVar14[-1] = *(undefined *)((iVar9 - ((int)(uVar12 << 0x11) >> 0x1f)) + 0x28);
        puVar14[-2] = *(undefined *)(iVar9 + 0x2a);
        puVar14 = puVar14 + -2;
        local_34 = local_34 + 2;
      }
    }
  }
  else if ((int)param_8 < 0) {
    puVar14[-1] = *(undefined *)(iVar9 + 0x26);
    puVar14 = puVar14 + -1;
    local_34 = local_34 + 1;
  }
  else if ((uVar12 & 0x800) != 0) {
    puVar14[-1] = *(undefined *)(iVar9 + 0x27);
    puVar14 = puVar14 + -1;
    local_34 = local_34 + 1;
  }
  iVar3 = *(int *)(param_5 + 8);
  puVar10 = puVar14;
  if (local_34 < iVar3) {
    iVar9 = -(iVar3 + 0xeU & 0xfffffff8);
    puVar10 = (undefined *)((int)piVar15 + iVar9 + 0x10);
    *(undefined **)((int)piVar15 + iVar9) = puVar10;
    *(undefined **)((int)piVar15 + iVar9 + 4) = puVar14;
    uVar2 = local_4c;
    *(int **)((int)piVar15 + iVar9 + 8) = &local_34;
    FUN_001dd65c(uVar2,param_6,iVar3,param_5);
  }
  iVar3 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar9 = (**(code **)(*local_40 + 0x30))(local_40,puVar10,local_34), iVar9 != iVar3)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


