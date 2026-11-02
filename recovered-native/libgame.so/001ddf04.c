/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ddf04  Symbol: FUN_001ddf04 */

int ** FUN_001ddf04(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined param_6,int param_7)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_80 [3];
  int *piStack_74;
  undefined auStack_6e [18];
  undefined auStack_5c [12];
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
  iVar3 = FUN_001c60f4(DAT_001de194 + 0x1ddf30);
  iVar10 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar7 = *(int *)(iVar10 + iVar3 * 4);
  if (iVar7 == 0) {
    piVar4 = (int *)operator_new(0x68);
    *piVar4 = DAT_001de198 + 0x1de0c0;
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
    iVar7 = *(int *)(iVar10 + iVar3 * 4);
  }
  uVar12 = *(uint *)(param_5 + 0xc);
  puVar13 = local_80;
  uVar11 = uVar12 & 0x4a;
  local_80[0] = (uint)(uVar11 != 8 && uVar11 != 0x40);
  local_48 = local_80[0];
  local_34 = FUN_001dde48(auStack_5c,param_7,iVar7 + 0x26,uVar12);
  iVar3 = -local_34;
  puVar9 = auStack_5c + iVar3;
  if (*(char *)(iVar7 + 0x10) != '\0') {
    iVar10 = -(local_34 * 2 + 0x10U & 0xfffffff8);
    puVar13 = (uint *)((int)local_80 + iVar10);
    uVar5 = *(undefined4 *)(iVar7 + 8);
    uVar6 = *(undefined4 *)(iVar7 + 0xc);
    uVar1 = *(undefined *)(iVar7 + 0x25);
    local_50 = auStack_6e + iVar10;
    *(int *)((int)local_80 + iVar10) = param_5;
    *(undefined **)((int)local_80 + iVar10 + 4) = auStack_6e + iVar10;
    uVar2 = local_4c;
    *(undefined **)((int)local_80 + iVar10 + 8) = auStack_5c + iVar3;
    *(int **)((int)local_80 + iVar10 + 0xc) = &local_34;
    FUN_001dc4e8(uVar2,uVar5,uVar6,uVar1);
    puVar9 = local_50;
  }
  if (((local_48 == 0) && ((uVar12 & 0x200) != 0)) && (param_7 != 0)) {
    if (uVar11 == 0x40) {
      puVar9[-1] = *(undefined *)(iVar7 + 0x2a);
      puVar9 = puVar9 + -1;
      local_34 = local_34 + 1;
    }
    else {
      puVar9[-1] = *(undefined *)((iVar7 - ((int)(uVar12 << 0x11) >> 0x1f)) + 0x28);
      puVar9[-2] = *(undefined *)(iVar7 + 0x2a);
      puVar9 = puVar9 + -2;
      local_34 = local_34 + 2;
    }
  }
  uVar2 = local_4c;
  iVar3 = *(int *)(param_5 + 8);
  puVar8 = puVar9;
  if (local_34 < iVar3) {
    iVar7 = -(iVar3 + 0xeU & 0xfffffff8);
    puVar8 = (undefined *)((int)puVar13 + iVar7 + 0x10);
    *(undefined **)((int)puVar13 + iVar7) = puVar8;
    *(undefined **)((int)puVar13 + iVar7 + 4) = puVar9;
    *(int **)((int)puVar13 + iVar7 + 8) = &local_34;
    FUN_001dd65c(uVar2,param_6,iVar3,param_5);
  }
  iVar3 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar7 = (**(code **)(*local_40 + 0x30))(local_40,puVar8,local_34), iVar3 != iVar7)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


