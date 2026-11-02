/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dd690  Symbol: FUN_001dd690 */

int ** FUN_001dd690(int **param_1,undefined4 param_2,int *param_3,char param_4,int param_5,
                   undefined param_6,undefined param_7,undefined4 param_8,undefined4 param_9,
                   undefined4 param_10)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined4 uVar9;
  uint uVar10;
  byte *__src;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  byte *apbStack_78 [3];
  uint *puStack_6c;
  byte abStack_68 [4];
  undefined4 local_64;
  int *local_60;
  undefined4 local_5c;
  uint local_58;
  int **local_54;
  int *local_50;
  char local_4c;
  uint local_48;
  undefined4 local_44;
  int *local_40;
  int *piStack_3c;
  undefined auStack_38 [20];
  
  local_54 = &local_50;
  local_5c = param_2;
  local_50 = param_3;
  local_4c = param_4;
  iVar3 = FUN_001c60f4(DAT_001dda1c + 0x1dd6bc);
  iVar12 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar14 = *(int *)(iVar12 + iVar3 * 4);
  if (iVar14 == 0) {
    piVar5 = (int *)operator_new(0x68);
    *piVar5 = DAT_001dda20 + 0x1dd990;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    *(undefined *)(piVar5 + 4) = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[8] = 0;
    *(undefined *)(piVar5 + 9) = 0;
    *(undefined *)((int)piVar5 + 0x25) = 0;
    *(undefined *)(piVar5 + 0x19) = 0;
    FUN_001da934(piVar5,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar5,iVar3);
    iVar14 = *(int *)(iVar12 + iVar3 * 4);
  }
  iVar3 = *(int *)(param_5 + 4);
  FUN_00204b00(param_5,auStack_38,param_7);
  if (iVar3 < 0) {
    iVar3 = 6;
  }
  if ((*(uint *)(param_5 + 0xc) & 4) == 0) {
    iVar12 = iVar3 + 0x1e;
  }
  else {
    iVar12 = iVar3 + 0x138;
  }
  iVar12 = -(iVar12 + 0xeU & 0xfffffff8);
  uVar4 = FUN_001c5b90();
  *(int *)((int)apbStack_78 + iVar12) = iVar3;
  __src = abStack_68 + iVar12;
  *(undefined4 *)((int)apbStack_78 + iVar12 + 8) = param_9;
  *(undefined4 *)((int)&puStack_6c + iVar12) = param_10;
  local_44 = uVar4;
  local_48 = FUN_001d87ac(&local_44,__src,0,auStack_38);
  piVar5 = (int *)FUN_001da5b8(param_5 + 0x6c);
  uVar16 = local_48;
  iVar3 = -(local_48 + 0xe & 0xfffffff8);
  local_58 = (uint)((int)&local_64 + iVar3 + iVar12 + 3) >> 3;
  pbVar11 = abStack_68 + iVar3 + iVar12;
  pbVar8 = __src + local_48;
  if (*(char *)(piVar5 + 7) == '\x01') {
    memcpy(pbVar11,__src,(int)pbVar8 - (int)__src);
  }
  else {
    if (*(char *)(piVar5 + 7) == '\0') {
      local_64 = pbVar8;
      local_60 = piVar5;
      FUN_00204560();
      pbVar8 = local_64;
      piVar5 = local_60;
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5,__src,pbVar8);
    uVar16 = local_48;
  }
  uVar10 = uVar16;
  pbVar8 = (byte *)memchr(__src,0x2e,uVar16);
  bVar17 = pbVar8 != (byte *)0x0;
  if (bVar17) {
    pbVar8 = pbVar8 + -(int)__src;
    pbVar8[local_58 * 8] = *(byte *)(iVar14 + 0x24);
    uVar10 = local_58;
  }
  bVar7 = (byte)uVar10;
  if (bVar17) {
    pbVar8 = pbVar11 + (int)pbVar8;
  }
  pbVar13 = pbVar11;
  puVar15 = (undefined *)((int)apbStack_78 + iVar3 + iVar12);
  if (*(char *)(iVar14 + 0x10) != '\0') {
    uVar10 = (uint)((int)uVar16 < 3);
    if (pbVar8 != (byte *)0x0) {
      uVar10 = 1;
    }
    if ((uVar10 != 0) ||
       ((((uVar10 = (uint)abStack_68[iVar12 + 1],
          puVar15 = (undefined *)((int)apbStack_78 + iVar3 + iVar12), uVar10 < 0x3a &&
          (bVar7 = abStack_68[iVar12 + 2],
          puVar15 = (undefined *)((int)apbStack_78 + iVar3 + iVar12), bVar7 < 0x3a)) &&
         (puVar15 = (undefined *)((int)apbStack_78 + iVar3 + iVar12), 0x2f < uVar10)) &&
        (puVar15 = (undefined *)((int)apbStack_78 + iVar3 + iVar12), 0x2f < bVar7)))) {
      bVar18 = *__src == 0x2d;
      bVar17 = *__src == 0x2b;
      iVar2 = -(uVar16 * 2 + 0xe & 0xfffffff8);
      puVar15 = (undefined *)((int)apbStack_78 + iVar2 + iVar3 + iVar12);
      if (bVar18 || bVar17) {
        uVar10 = local_48;
      }
      uVar16 = (uint)(bVar18 || bVar17);
      pbVar13 = abStack_68 + iVar2 + iVar3 + iVar12;
      if (bVar18 || bVar17) {
        uVar16 = 1;
        bVar7 = *pbVar11;
        uVar10 = uVar10 - 1;
      }
      uVar4 = local_5c;
      if (bVar18 || bVar17) {
        *pbVar13 = bVar7;
        local_48 = uVar10;
        uVar4 = local_5c;
      }
      uVar6 = *(undefined4 *)(iVar14 + 8);
      uVar1 = *(undefined *)(iVar14 + 0x25);
      uVar9 = *(undefined4 *)(iVar14 + 0xc);
      local_5c = uVar4;
      *(byte **)((int)apbStack_78 + iVar2 + iVar3 + iVar12) = pbVar8;
      *(byte **)((int)apbStack_78 + iVar2 + iVar3 + iVar12 + 4) = pbVar13 + uVar16;
      *(byte **)((int)apbStack_78 + iVar2 + iVar3 + iVar12 + 8) = pbVar11 + uVar16;
      *(uint **)((int)&puStack_6c + iVar2 + iVar3 + iVar12) = &local_48;
      FUN_001dc534(uVar4,uVar6,uVar9,uVar1);
      uVar16 = uVar16 + local_48;
      local_48 = uVar16;
    }
  }
  uVar4 = local_5c;
  iVar3 = *(int *)(param_5 + 8);
  pbVar11 = pbVar13;
  if ((int)uVar16 < iVar3) {
    iVar12 = -(iVar3 + 0xeU & 0xfffffff8);
    pbVar11 = puVar15 + iVar12 + 0x10;
    *(byte **)(puVar15 + iVar12) = pbVar11;
    *(byte **)(puVar15 + iVar12 + 4) = pbVar13;
    *(uint **)(puVar15 + iVar12 + 8) = &local_48;
    FUN_001dd65c(uVar4,param_6,iVar3,param_5);
    uVar16 = local_48;
  }
  local_40 = *local_54;
  piStack_3c = local_54[1];
  *(undefined4 *)(param_5 + 8) = 0;
  if ((local_4c == '\0') &&
     (uVar10 = (**(code **)(*local_50 + 0x30))(local_50,pbVar11,uVar16), uVar16 != uVar10)) {
    local_4c = '\x01';
  }
  *param_1 = local_40;
  param_1[1] = piStack_3c;
  *param_1 = local_50;
  *(char *)(param_1 + 1) = local_4c;
  return param_1;
}


