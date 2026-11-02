/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f5908  Symbol: FUN_001f5908 */

int ** FUN_001f5908(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  uint *puVar13;
  uint local_b8 [3];
  int *piStack_ac;
  undefined auStack_a8 [8];
  undefined auStack_a0 [72];
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
  iVar2 = FUN_001c60f4(DAT_001f5bfc + 0x1f5934);
  iVar10 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar7 = *(int *)(iVar10 + iVar2 * 4);
  if (iVar7 == 0) {
    piVar3 = (int *)operator_new(0x128);
    *piVar3 = DAT_001f5c00 + 0x1f5b1c;
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
    iVar7 = *(int *)(iVar10 + iVar2 * 4);
  }
  uVar9 = *(uint *)(param_5 + 0xc);
  local_48 = uVar9 & 0x4a;
  puVar13 = local_b8;
  uVar11 = (uint)(local_48 != 8 && local_48 != 0x40);
  iVar2 = param_7;
  if ((param_7 < 1) && (uVar11 != 0)) {
    iVar2 = -param_7;
  }
  local_b8[0] = uVar11;
  local_34 = FUN_001f54f4(auStack_58,iVar2,iVar7 + 0x2c,uVar9);
  uVar1 = local_4c;
  iVar2 = 0x14 - local_34;
  puVar12 = auStack_a8 + iVar2 * 4;
  if (*(char *)(iVar7 + 0x10) != '\0') {
    iVar10 = -(local_34 * 8 + 0x10);
    puVar13 = (uint *)((int)local_b8 + iVar10);
    puVar12 = auStack_a0 + iVar10;
    uVar4 = *(undefined4 *)(iVar7 + 8);
    uVar5 = *(undefined4 *)(iVar7 + 0xc);
    uVar6 = *(undefined4 *)(iVar7 + 0x28);
    *(int *)((int)local_b8 + iVar10) = param_5;
    *(undefined **)((int)local_b8 + iVar10 + 4) = puVar12;
    *(undefined **)((int)local_b8 + iVar10 + 8) = auStack_a8 + iVar2 * 4;
    *(int **)((int)local_b8 + iVar10 + 0xc) = &local_34;
    FUN_001f3bd0(uVar1,uVar4,uVar5,uVar6);
  }
  if (uVar11 == 0) {
    if (((uVar9 & 0x200) != 0) && (param_7 != 0)) {
      if (local_48 == 0x40) {
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + 0x3c);
        puVar12 = puVar12 + -4;
        local_34 = local_34 + 1;
      }
      else {
        if ((uVar9 & 0x4000) == 0) {
          iVar2 = 0x30;
        }
        else {
          iVar2 = 0x34;
        }
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + iVar2 + 4);
        *(undefined4 *)(puVar12 + -8) = *(undefined4 *)(iVar7 + 0x3c);
        puVar12 = puVar12 + -8;
        local_34 = local_34 + 2;
      }
    }
  }
  else if (param_7 < 0) {
    *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + 0x2c);
    puVar12 = puVar12 + -4;
    local_34 = local_34 + 1;
  }
  else if ((uVar9 & 0x800) != 0) {
    *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + 0x30);
    puVar12 = puVar12 + -4;
    local_34 = local_34 + 1;
  }
  iVar2 = *(int *)(param_5 + 8);
  puVar8 = puVar12;
  if (local_34 < iVar2) {
    iVar7 = -(iVar2 * 4 + 0xeU & 0xfffffff8);
    puVar8 = (undefined *)((int)puVar13 + iVar7 + 0x10);
    *(undefined **)((int)puVar13 + iVar7) = puVar8;
    *(undefined **)((int)puVar13 + iVar7 + 4) = puVar12;
    uVar1 = local_4c;
    *(int **)((int)puVar13 + iVar7 + 8) = &local_34;
    FUN_001f4db0(uVar1,param_6,iVar2,param_5);
  }
  iVar2 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar7 = (**(code **)(*local_40 + 0x30))(local_40,puVar8,local_34), iVar7 != iVar2)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


