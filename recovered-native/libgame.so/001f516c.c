/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f516c  Symbol: FUN_001f516c */

int ** FUN_001f516c(int **param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,undefined param_7,undefined4 param_8,undefined4 param_9,
                   undefined4 param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  size_t sVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  char *__s;
  size_t sVar17;
  int iVar18;
  undefined *puVar19;
  bool bVar20;
  bool bVar21;
  int *piStack_70;
  int aiStack_6c [2];
  size_t *psStack_64;
  undefined4 uStack_60;
  int **local_5c;
  undefined4 local_58;
  int **local_54;
  int *local_50;
  undefined4 local_4c;
  size_t local_48;
  undefined4 local_44;
  int *local_40;
  int *piStack_3c;
  undefined auStack_38 [20];
  
  local_54 = &local_50;
  local_5c = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_4c = param_4;
  iVar6 = FUN_001c60f4(DAT_001f54a4 + 0x1f5190);
  iVar16 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar18 = *(int *)(iVar16 + iVar6 * 4);
  if (iVar18 == 0) {
    piVar8 = (int *)operator_new(0x128);
    *piVar8 = DAT_001f54a8 + 0x1f542c;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    *(undefined *)(piVar8 + 4) = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    piVar8[10] = 0;
    *(undefined *)(piVar8 + 0x49) = 0;
    FUN_001f20dc(piVar8,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar8,iVar6);
    iVar18 = *(int *)(iVar16 + iVar6 * 4);
  }
  iVar6 = *(int *)(param_5 + 4);
  FUN_00204b00(param_5,auStack_38,param_7);
  if (iVar6 < 0) {
    iVar6 = 6;
  }
  if ((*(uint *)(param_5 + 0xc) & 4) == 0) {
    iVar16 = iVar6 + 0x1e;
  }
  else {
    iVar16 = iVar6 + 0x138;
  }
  iVar16 = -(iVar16 + 0xeU & 0xfffffff8);
  uVar7 = FUN_001c5b90();
  __s = (char *)((int)&uStack_60 + iVar16);
  *(int *)((int)&piStack_70 + iVar16) = iVar6;
  *(undefined4 *)((int)aiStack_6c + iVar16 + 4) = param_9;
  *(undefined4 *)((int)aiStack_6c + iVar16 + 8) = param_10;
  local_44 = uVar7;
  local_48 = FUN_001d87ac(&local_44,__s,0,auStack_38);
  piVar8 = (int *)FUN_001f1db0(param_5 + 0x6c);
  iVar6 = -(local_48 * 4 + 0xe & 0xfffffff8);
  piVar13 = (int *)((int)&uStack_60 + iVar6 + iVar16);
  (**(code **)(*piVar8 + 0x2c))(piVar8,__s,__s + local_48);
  sVar17 = local_48;
  piVar8 = (int *)memchr(__s,0x2e,local_48);
  bVar20 = piVar8 != (int *)0x0;
  if (bVar20) {
    piVar8 = (int *)((int)piVar8 - (int)__s);
    piVar13[(int)piVar8] = *(int *)(iVar18 + 0x24);
  }
  if (bVar20) {
    piVar8 = piVar13 + (int)piVar8;
  }
  piVar14 = piVar13;
  puVar19 = (undefined *)((int)&piStack_70 + iVar6 + iVar16);
  if ((*(char *)(iVar18 + 0x10) != '\0') &&
     ((piVar8 != (int *)0x0 || (int)sVar17 < 3 ||
      ((((bVar1 = *(byte *)((int)&uStack_60 + iVar16 + 1),
         puVar19 = (undefined *)((int)&piStack_70 + iVar6 + iVar16), bVar1 < 0x3a &&
         (bVar2 = *(byte *)((int)&uStack_60 + iVar16 + 2),
         puVar19 = (undefined *)((int)&piStack_70 + iVar6 + iVar16), bVar2 < 0x3a)) &&
        (puVar19 = (undefined *)((int)&piStack_70 + iVar6 + iVar16), 0x2f < bVar1)) &&
       (puVar19 = (undefined *)((int)&piStack_70 + iVar6 + iVar16), 0x2f < bVar2)))))) {
    iVar11 = sVar17 * 8 + 8;
    bVar21 = *__s == '-';
    bVar20 = *__s == '+';
    iVar3 = -iVar11;
    puVar19 = (undefined *)((int)&piStack_70 + iVar3 + iVar6 + iVar16);
    sVar9 = (size_t)(bVar21 || bVar20);
    piVar14 = (int *)((int)&uStack_60 + iVar3 + iVar6 + iVar16);
    uVar4 = sVar9;
    if (bVar21 || bVar20) {
      iVar11 = *piVar13;
      sVar9 = sVar17;
      uVar4 = 4;
    }
    if (bVar21 || bVar20) {
      *piVar14 = iVar11;
    }
    uVar7 = *(undefined4 *)(iVar18 + 8);
    uVar12 = *(undefined4 *)(iVar18 + 0x28);
    uVar10 = *(undefined4 *)(iVar18 + 0xc);
    if (bVar21 || bVar20) {
      sVar17 = sVar17 - 1;
    }
    *(int **)((int)&piStack_70 + iVar3 + iVar6 + iVar16) = piVar8;
    *(uint *)((int)aiStack_6c + iVar3 + iVar6 + iVar16) = (int)piVar14 + uVar4;
    uVar5 = local_58;
    if (bVar21 || bVar20) {
      sVar9 = 1;
    }
    *(uint *)((int)aiStack_6c + iVar3 + iVar6 + iVar16 + 4) = (int)piVar13 + uVar4;
    if (bVar21 || bVar20) {
      local_48 = sVar17;
    }
    *(size_t **)((int)aiStack_6c + iVar3 + iVar6 + iVar16 + 8) = &local_48;
    FUN_001f3c20(uVar5,uVar7,uVar10,uVar12);
    sVar17 = sVar9 + local_48;
    local_48 = sVar17;
  }
  uVar7 = local_58;
  iVar6 = *(int *)(param_5 + 8);
  piVar8 = piVar14;
  if ((int)sVar17 < iVar6) {
    iVar16 = -(iVar6 * 4 + 0xeU & 0xfffffff8);
    piVar8 = (int *)(puVar19 + iVar16 + 0x10);
    *(int **)(puVar19 + iVar16 + 4) = piVar14;
    *(int **)(puVar19 + iVar16) = piVar8;
    *(size_t **)(puVar19 + iVar16 + 8) = &local_48;
    FUN_001f4db0(uVar7,param_6,iVar6,param_5);
    sVar17 = local_48;
  }
  piVar13 = local_50;
  cVar15 = (char)local_4c;
  local_40 = *local_54;
  piStack_3c = local_54[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if (((char)local_4c == '\0') &&
     (sVar9 = (**(code **)(*local_50 + 0x30))(local_50,piVar8,sVar17), sVar17 != sVar9)) {
    cVar15 = '\x01';
  }
  *local_5c = local_40;
  local_5c[1] = piStack_3c;
  *local_5c = piVar13;
  *(char *)(local_5c + 1) = cVar15;
  return local_5c;
}


