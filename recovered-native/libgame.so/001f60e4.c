/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f60e4  Symbol: FUN_001f60e4 */

int ** FUN_001f60e4(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined4 param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  int *piVar12;
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
  iVar2 = FUN_001c60f4(DAT_001f6378 + 0x1f6110);
  iVar8 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar6 = *(int *)(iVar8 + iVar2 * 4);
  if (iVar6 == 0) {
    piVar3 = (int *)operator_new(0x128);
    *piVar3 = DAT_001f637c + 0x1f629c;
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
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar3);
    iVar6 = *(int *)(iVar8 + iVar2 * 4);
  }
  uVar10 = *(uint *)(param_5 + 0xc);
  piVar12 = local_108;
  uVar9 = uVar10 & 0x4a;
  local_108[2] = (int)(uVar9 != 8 && uVar9 != 0x40);
  local_108[0] = iVar6 + 0x2c;
  local_108[1] = uVar10;
  local_48 = local_108[2];
  local_34 = FUN_001f5fd4(auStack_58,local_108[2],param_7,param_8);
  uVar1 = local_4c;
  iVar2 = 0x28 - local_34;
  puVar11 = auStack_f8 + iVar2 * 4;
  if (*(char *)(iVar6 + 0x10) != '\0') {
    iVar8 = -(local_34 * 8 + 0x10);
    piVar12 = (int *)((int)local_108 + iVar8);
    puVar11 = auStack_f0 + iVar8;
    uVar4 = *(undefined4 *)(iVar6 + 8);
    uVar5 = *(undefined4 *)(iVar6 + 0xc);
    *(int *)((int)local_108 + iVar8) = param_5;
    *(undefined **)((int)local_108 + iVar8 + 4) = puVar11;
    *(undefined **)((int)local_108 + iVar8 + 8) = auStack_f8 + iVar2 * 4;
    *(int **)((int)local_108 + iVar8 + 0xc) = &local_34;
    FUN_001f3bd0(uVar1,uVar4,uVar5);
  }
  if (((local_48 == 0) && ((uVar10 & 0x200) != 0)) && ((param_7 | param_8) != 0)) {
    if (uVar9 == 0x40) {
      *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(iVar6 + 0x3c);
      puVar11 = puVar11 + -4;
      local_34 = local_34 + 1;
    }
    else {
      if ((uVar10 & 0x4000) == 0) {
        iVar2 = 0x30;
      }
      else {
        iVar2 = 0x34;
      }
      *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(iVar6 + iVar2 + 4);
      *(undefined4 *)(puVar11 + -8) = *(undefined4 *)(iVar6 + 0x3c);
      puVar11 = puVar11 + -8;
      local_34 = local_34 + 2;
    }
  }
  iVar2 = *(int *)(param_5 + 8);
  puVar7 = puVar11;
  if (local_34 < iVar2) {
    iVar6 = -(iVar2 * 4 + 0xeU & 0xfffffff8);
    puVar7 = (undefined *)((int)piVar12 + iVar6 + 0x10);
    *(undefined **)((int)piVar12 + iVar6) = puVar7;
    *(undefined **)((int)piVar12 + iVar6 + 4) = puVar11;
    uVar1 = local_4c;
    *(int **)((int)piVar12 + iVar6 + 8) = &local_34;
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


