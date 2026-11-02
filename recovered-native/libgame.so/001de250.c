/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001de250  Symbol: FUN_001de250 */

int ** FUN_001de250(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
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
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  uint *puVar13;
  uint local_80 [3];
  int *piStack_74;
  undefined auStack_6e [18];
  undefined auStack_5c [16];
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
  iVar3 = FUN_001c60f4(DAT_001de53c + 0x1de27c);
  iVar10 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar7 = *(int *)(iVar10 + iVar3 * 4);
  if (iVar7 == 0) {
    piVar4 = (int *)operator_new(0x68);
    *piVar4 = DAT_001de540 + 0x1de464;
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
  uVar9 = *(uint *)(param_5 + 0xc);
  local_48 = uVar9 & 0x4a;
  puVar13 = local_80;
  uVar11 = (uint)(local_48 != 8 && local_48 != 0x40);
  iVar3 = param_7;
  if ((param_7 < 1) && (uVar11 != 0)) {
    iVar3 = -param_7;
  }
  local_80[0] = uVar11;
  local_34 = FUN_001dde48(auStack_5c,iVar3,iVar7 + 0x26,uVar9);
  uVar2 = local_4c;
  iVar3 = -local_34;
  puVar12 = auStack_5c + iVar3;
  if (*(char *)(iVar7 + 0x10) != '\0') {
    iVar10 = -(local_34 * 2 + 0x10U & 0xfffffff8);
    puVar13 = (uint *)((int)local_80 + iVar10);
    puVar12 = auStack_6e + iVar10;
    uVar5 = *(undefined4 *)(iVar7 + 8);
    uVar6 = *(undefined4 *)(iVar7 + 0xc);
    uVar1 = *(undefined *)(iVar7 + 0x25);
    *(int *)((int)local_80 + iVar10) = param_5;
    *(undefined **)((int)local_80 + iVar10 + 4) = puVar12;
    *(undefined **)((int)local_80 + iVar10 + 8) = auStack_5c + iVar3;
    *(int **)((int)local_80 + iVar10 + 0xc) = &local_34;
    FUN_001dc4e8(uVar2,uVar5,uVar6,uVar1);
  }
  if (uVar11 == 0) {
    if (((uVar9 & 0x200) != 0) && (param_7 != 0)) {
      if (local_48 == 0x40) {
        puVar12[-1] = *(undefined *)(iVar7 + 0x2a);
        puVar12 = puVar12 + -1;
        local_34 = local_34 + 1;
      }
      else {
        puVar12[-1] = *(undefined *)((iVar7 - ((int)(uVar9 << 0x11) >> 0x1f)) + 0x28);
        puVar12[-2] = *(undefined *)(iVar7 + 0x2a);
        puVar12 = puVar12 + -2;
        local_34 = local_34 + 2;
      }
    }
  }
  else if (param_7 < 0) {
    puVar12[-1] = *(undefined *)(iVar7 + 0x26);
    puVar12 = puVar12 + -1;
    local_34 = local_34 + 1;
  }
  else if ((uVar9 & 0x800) != 0) {
    puVar12[-1] = *(undefined *)(iVar7 + 0x27);
    puVar12 = puVar12 + -1;
    local_34 = local_34 + 1;
  }
  iVar3 = *(int *)(param_5 + 8);
  puVar8 = puVar12;
  if (local_34 < iVar3) {
    iVar7 = -(iVar3 + 0xeU & 0xfffffff8);
    puVar8 = (undefined *)((int)puVar13 + iVar7 + 0x10);
    *(undefined **)((int)puVar13 + iVar7) = puVar8;
    *(undefined **)((int)puVar13 + iVar7 + 4) = puVar12;
    uVar2 = local_4c;
    *(int **)((int)puVar13 + iVar7 + 8) = &local_34;
    FUN_001dd65c(uVar2,param_6,iVar3,param_5);
  }
  iVar3 = local_34;
  local_30 = *local_44;
  piStack_2c = local_44[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_3c == '\0') &&
     (iVar7 = (**(code **)(*local_40 + 0x30))(local_40,puVar8,local_34), iVar7 != iVar3)) {
    local_3c = '\x01';
  }
  *param_1 = local_30;
  param_1[1] = piStack_2c;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = local_3c;
  return param_1;
}


