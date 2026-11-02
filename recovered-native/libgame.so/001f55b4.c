/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f55b4  Symbol: FUN_001f55b4 */

int ** FUN_001f55b4(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_b8 [3];
  int *piStack_ac;
  undefined auStack_a8 [8];
  undefined auStack_a0 [72];
  undefined auStack_58 [8];
  undefined *local_50;
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
  iVar2 = FUN_001c60f4(DAT_001f584c + 0x1f55e0);
  iVar9 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar6 = *(int *)(iVar9 + iVar2 * 4);
  if (iVar6 == 0) {
    piVar3 = (int *)operator_new(0x128);
    *piVar3 = DAT_001f5850 + 0x1f5770;
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
    iVar6 = *(int *)(iVar9 + iVar2 * 4);
  }
  uVar11 = *(uint *)(param_5 + 0xc);
  puVar12 = local_b8;
  uVar10 = uVar11 & 0x4a;
  local_b8[0] = (uint)(uVar10 != 8 && uVar10 != 0x40);
  local_48 = local_b8[0];
  local_34 = FUN_001f54f4(auStack_58,param_7,iVar6 + 0x2c,uVar11);
  iVar2 = 0x14 - local_34;
  puVar8 = auStack_a8 + iVar2 * 4;
  if (*(char *)(iVar6 + 0x10) != '\0') {
    iVar9 = -(local_34 * 8 + 0x10);
    puVar12 = (uint *)((int)local_b8 + iVar9);
    uVar4 = *(undefined4 *)(iVar6 + 8);
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    local_50 = auStack_a0 + iVar9;
    *(int *)((int)local_b8 + iVar9) = param_5;
    *(undefined **)((int)local_b8 + iVar9 + 4) = auStack_a0 + iVar9;
    uVar1 = local_4c;
    *(undefined **)((int)local_b8 + iVar9 + 8) = auStack_a8 + iVar2 * 4;
    *(int **)((int)local_b8 + iVar9 + 0xc) = &local_34;
    FUN_001f3bd0(uVar1,uVar4,uVar5);
    puVar8 = local_50;
  }
  if (((local_48 == 0) && ((uVar11 & 0x200) != 0)) && (param_7 != 0)) {
    if (uVar10 == 0x40) {
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(iVar6 + 0x3c);
      puVar8 = puVar8 + -4;
      local_34 = local_34 + 1;
    }
    else {
      if ((uVar11 & 0x4000) == 0) {
        iVar2 = 0x30;
      }
      else {
        iVar2 = 0x34;
      }
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(iVar6 + iVar2 + 4);
      *(undefined4 *)(puVar8 + -8) = *(undefined4 *)(iVar6 + 0x3c);
      puVar8 = puVar8 + -8;
      local_34 = local_34 + 2;
    }
  }
  uVar1 = local_4c;
  iVar2 = *(int *)(param_5 + 8);
  puVar7 = puVar8;
  if (local_34 < iVar2) {
    iVar6 = -(iVar2 * 4 + 0xeU & 0xfffffff8);
    puVar7 = (undefined *)((int)puVar12 + iVar6 + 0x10);
    *(undefined **)((int)puVar12 + iVar6) = puVar7;
    *(undefined **)((int)puVar12 + iVar6 + 4) = puVar8;
    *(int **)((int)puVar12 + iVar6 + 8) = &local_34;
    FUN_001f4db0(uVar1,param_6,iVar2,param_5);
  }
  iVar2 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar6 = (**(code **)(*local_40 + 0x30))(local_40,puVar7,local_34), iVar2 != iVar6)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


