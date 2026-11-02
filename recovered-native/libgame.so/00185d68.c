/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00185d68  Symbol: FUN_00185d68 */

int FUN_00185d68(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar9 = DAT_00185fe8 + 0x185d74;
  if ((0x28 < (int)param_1[0x3e]) &&
     ((-1 < (int)(param_1[0x5a] << 0xc) || (0x400 < (int)param_1[0x3e])))) {
    return 0x59;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_0019c49c(param_2);
  puVar3 = (undefined4 *)FUN_0017c008(param_2,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x1b;
  }
  if (param_3 == 0) {
    puVar3[1] = puVar3;
  }
  else {
    puVar3[1] = param_3;
  }
  if (puVar3[0x4a] != 0) {
    FUN_0019d610();
  }
  uVar2 = param_1[0x4a];
  puVar3[0x4a] = uVar2;
  uVar2 = FUN_0019d178(uVar2,iVar9 + DAT_00185fec,3);
  puVar3[0x4e] = uVar2;
  uVar2 = FUN_0019d178(puVar3[0x4a],iVar9 + DAT_00185ff0,5);
  puVar3[0x4f] = uVar2;
  uVar2 = FUN_0019d178(puVar3[0x4a],iVar9 + DAT_00185ff4,0x24);
  uVar5 = *puVar3;
  puVar3[0x50] = uVar2;
  *puVar3 = *param_1;
  FUN_0017c4fc(puVar3);
  uVar4 = param_1[4];
  uVar2 = param_1[0x5a];
  puVar3[0x44] = param_1[0x44];
  iVar6 = param_1[2];
  puVar3[4] = uVar4;
  puVar3[0x5a] = uVar2;
  if (iVar6 == 0) {
    iVar6 = FUN_0018a24c(iVar9 + DAT_00185ff8);
    if (iVar6 == 0) {
      puVar3[0x4a] = 0;
      *puVar3 = uVar5;
      FUN_00179908(puVar3);
      return 1;
    }
    *(undefined4 *)(iVar6 + 0x5c) = 0x40;
    *(undefined4 *)(iVar6 + 0x50) = puVar3[0x4a];
    FUN_0019d6dc();
    puVar3[2] = iVar6;
    local_20 = 0;
    local_1c = 0;
  }
  else {
    puVar3[2] = iVar6;
    local_1c = *(undefined4 *)(iVar6 + 0xc);
    local_20 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = 0;
  }
  iVar9 = FUN_0018c898(puVar3[2],0,iVar9 + DAT_00185ffc,0);
  if (iVar9 == 0) {
    puVar3[0x4a] = 0;
    *puVar3 = uVar5;
    FUN_00179908(puVar3);
    if (iVar6 == 0) {
      return 1;
    }
    FUN_0018ba54(iVar6);
    return 1;
  }
  *(undefined4 *)(puVar3[2] + 0xc) = 0;
  *(undefined4 *)(puVar3[2] + 0x10) = 0;
  FUN_0018c194(puVar3[2],iVar9);
  FUN_0017becc(puVar3,*(undefined4 *)(puVar3[2] + 0xc));
  iVar9 = param_1[0x3e];
  puVar3[0x2b] = 7;
  puVar3[0x3e] = iVar9 + 1;
  uVar7 = param_1[0x45];
  puVar3[0x1a] = 0;
  puVar3[0x45] = uVar7;
  if ((param_1[0x1a] != 0) || (param_1[4] != 0)) {
    puVar3[0x45] = uVar7 | 8;
  }
  uVar4 = param_1[0x58];
  uVar2 = param_1[0x57];
  puVar3[0x5b] = param_1[0x5b];
  puVar3[0x58] = uVar4;
  puVar3[0x57] = uVar2;
  FUN_00184ed0(puVar3);
  cVar1 = **(char **)(puVar3[9] + 0x10);
  if (cVar1 == '<') {
    if ((*(char **)(puVar3[9] + 0x10))[1] != '/') goto LAB_00185f2a;
    uVar2 = 0x55;
  }
  else {
    if (cVar1 == '\0') goto LAB_00185f34;
LAB_00185f2a:
    uVar2 = 0x56;
  }
  FUN_0017b7fc(puVar3,uVar2,0);
LAB_00185f34:
  if (puVar3[0xd] != *(int *)(puVar3[2] + 0xc)) {
    FUN_0017b7fc(puVar3,0x55,0);
  }
  if (puVar3[3] == 0) {
    iVar9 = puVar3[0x15];
    if (iVar9 == 0) {
      iVar9 = 1;
    }
  }
  else {
    iVar9 = 0;
    if (param_4 != (int *)0x0) {
      iVar8 = *(int *)(*(int *)(puVar3[2] + 0xc) + 0xc);
      *param_4 = iVar8;
      for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x18)) {
        *(undefined4 *)(iVar8 + 0x14) = 0;
      }
      *(undefined4 *)(*(int *)(puVar3[2] + 0xc) + 0xc) = 0;
    }
  }
  if (puVar3[2] != 0) {
    FUN_0018bf48(*(undefined4 *)(puVar3[2] + 0xc));
    *(undefined4 *)(puVar3[2] + 0xc) = local_1c;
    *(undefined4 *)(puVar3[2] + 0x10) = local_20;
  }
  param_1[0x6e] = puVar3[0x6e] + param_1[0x6e];
  if (puVar3[0x61] != 0) {
    FUN_001a4a00(puVar3 + 0x60,param_1 + 0x60);
  }
  *puVar3 = uVar5;
  puVar3[0x4a] = 0;
  puVar3[0x57] = 0;
  puVar3[0x58] = 0;
  FUN_00179908(puVar3);
  if (iVar6 != 0) {
    FUN_0018ba54(iVar6);
    return iVar9;
  }
  return iVar9;
}


