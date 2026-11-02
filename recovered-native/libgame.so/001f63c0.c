/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f63c0  Symbol: FUN_001f63c0 */

int ** FUN_001f63c0(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined4 param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int *piVar14;
  int local_108 [3];
  int *piStack_fc;
  undefined auStack_f8 [8];
  undefined auStack_f0 [152];
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
  iVar2 = FUN_001c60f4(DAT_001f66bc + 0x1f63ec);
  iVar10 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar8 = *(int *)(iVar10 + iVar2 * 4);
  if (iVar8 == 0) {
    piVar3 = (int *)operator_new(0x128);
    *piVar3 = DAT_001f66c0 + 0x1f65dc;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    *(undefined *)(piVar3 + 4) = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    *(undefined *)(piVar3 + 0x49) = 0;
    FUN_001f20dc(piVar3,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar3,iVar2);
    iVar8 = *(int *)(iVar10 + iVar2 * 4);
  }
  uVar11 = *(uint *)(param_5 + 0xc);
  local_48 = uVar11 & 0x4a;
  piVar14 = local_108;
  uVar12 = (uint)(local_48 != 8 && local_48 != 0x40);
  local_108[0] = iVar8 + 0x2c;
  uVar5 = param_7;
  uVar7 = param_8;
  if (((int)(param_8 - (param_7 == 0)) < 0 != (SBORROW4(param_8,(uint)(param_7 == 0)) != false)) &&
     (uVar12 != 0)) {
    uVar5 = -param_7;
    uVar7 = -(param_8 + (param_7 != 0));
  }
  local_108[1] = uVar11;
  local_108[2] = uVar12;
  local_34 = FUN_001f5fd4(auStack_58,local_108[0],uVar5,uVar7);
  uVar1 = local_4c;
  iVar2 = 0x28 - local_34;
  puVar13 = auStack_f8 + iVar2 * 4;
  if (*(char *)(iVar8 + 0x10) != '\0') {
    iVar10 = -(local_34 * 8 + 0x10);
    piVar14 = (int *)((int)local_108 + iVar10);
    puVar13 = auStack_f0 + iVar10;
    uVar4 = *(undefined4 *)(iVar8 + 8);
    uVar6 = *(undefined4 *)(iVar8 + 0xc);
    *(int *)((int)local_108 + iVar10) = param_5;
    *(undefined **)((int)local_108 + iVar10 + 4) = puVar13;
    *(undefined **)((int)local_108 + iVar10 + 8) = auStack_f8 + iVar2 * 4;
    *(int **)((int)local_108 + iVar10 + 0xc) = &local_34;
    FUN_001f3bd0(uVar1,uVar4,uVar6);
  }
  if (uVar12 == 0) {
    if (((uVar11 & 0x200) != 0) && ((param_7 | param_8) != 0)) {
      if (local_48 == 0x40) {
        *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(iVar8 + 0x3c);
        puVar13 = puVar13 + -4;
        local_34 = local_34 + 1;
      }
      else {
        if ((uVar11 & 0x4000) == 0) {
          iVar2 = 0x30;
        }
        else {
          iVar2 = 0x34;
        }
        *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(iVar8 + iVar2 + 4);
        *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(iVar8 + 0x3c);
        puVar13 = puVar13 + -8;
        local_34 = local_34 + 2;
      }
    }
  }
  else if ((int)param_8 < 0) {
    *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(iVar8 + 0x2c);
    puVar13 = puVar13 + -4;
    local_34 = local_34 + 1;
  }
  else if ((uVar11 & 0x800) != 0) {
    *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(iVar8 + 0x30);
    puVar13 = puVar13 + -4;
    local_34 = local_34 + 1;
  }
  iVar2 = *(int *)(param_5 + 8);
  puVar9 = puVar13;
  if (local_34 < iVar2) {
    iVar8 = -(iVar2 * 4 + 0xeU & 0xfffffff8);
    puVar9 = (undefined *)((int)piVar14 + iVar8 + 0x10);
    *(undefined **)((int)piVar14 + iVar8) = puVar9;
    *(undefined **)((int)piVar14 + iVar8 + 4) = puVar13;
    uVar1 = local_4c;
    *(int **)((int)piVar14 + iVar8 + 8) = &local_34;
    FUN_001f4db0(uVar1,param_6,iVar2,param_5);
  }
  iVar2 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar8 = (**(code **)(*local_40 + 0x30))(local_40,puVar9,local_34), iVar8 != iVar2)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


