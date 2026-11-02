/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aca50  Symbol: FUN_001aca50 */

void FUN_001aca50(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *local_50;
  byte *local_4c;
  undefined *local_3c;
  undefined *local_38;
  byte *local_30;
  byte *local_2c;
  
  iVar8 = *(int *)(param_1 + 0x1d8);
  iVar12 = *(int *)(iVar8 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14c);
  iVar15 = *(int *)(iVar8 + 0x14);
  iVar10 = *(int *)(iVar8 + 0x18);
  iVar8 = *(int *)(iVar8 + 0x1c);
  local_2c = *(byte **)(param_3 * 8 + *param_2);
  local_30 = *(byte **)(param_3 * 8 + 4 + *param_2);
  local_4c = *(byte **)(param_2[1] + param_3 * 4);
  local_50 = *(byte **)(param_2[2] + param_3 * 4);
  local_38 = (undefined *)*param_4;
  local_3c = (undefined *)param_4[1];
  uVar6 = *(uint *)(param_1 + 0x70);
  uVar3 = uVar6 >> 1;
  if (uVar3 != 0) {
    uVar4 = 0;
    puVar5 = local_38;
    puVar7 = local_3c;
    pbVar18 = local_30;
    pbVar17 = local_2c;
    do {
      iVar16 = *(int *)(iVar12 + (uint)local_50[uVar4] * 4);
      iVar9 = *(int *)(iVar15 + (uint)local_4c[uVar4] * 4);
      uVar13 = (uint)*pbVar17;
      iVar11 = *(int *)(iVar8 + (uint)local_4c[uVar4] * 4) +
               *(int *)(iVar10 + (uint)local_50[uVar4] * 4) >> 0x10;
      *puVar5 = *(undefined *)(iVar16 + iVar2 + uVar13);
      uVar4 = uVar4 + 1;
      puVar5[1] = *(undefined *)(iVar2 + iVar11 + uVar13);
      puVar5[2] = *(undefined *)(iVar2 + iVar9 + uVar13);
      pbVar1 = pbVar17 + 1;
      pbVar17 = pbVar17 + 2;
      iVar14 = iVar2 + (uint)*pbVar1;
      puVar5[3] = *(undefined *)(iVar14 + iVar16);
      puVar5[4] = *(undefined *)(iVar14 + iVar11);
      puVar5[5] = *(undefined *)(iVar14 + iVar9);
      iVar14 = iVar2 + (uint)*pbVar18;
      *puVar7 = *(undefined *)(iVar14 + iVar16);
      puVar7[1] = *(undefined *)(iVar14 + iVar11);
      puVar7[2] = *(undefined *)(iVar14 + iVar9);
      pbVar1 = pbVar18 + 1;
      pbVar18 = pbVar18 + 2;
      iVar14 = iVar2 + (uint)*pbVar1;
      puVar7[3] = *(undefined *)(iVar14 + iVar16);
      puVar7[4] = *(undefined *)(iVar14 + iVar11);
      puVar7[5] = *(undefined *)(iVar14 + iVar9);
      puVar7 = puVar7 + 6;
      puVar5 = puVar5 + 6;
    } while (uVar3 != uVar4);
    local_4c = local_4c + uVar3;
    local_50 = local_50 + uVar3;
    local_2c = local_2c + (uVar6 & 0xfffffffe);
    local_30 = local_30 + (uVar6 & 0xfffffffe);
    local_38 = local_38 + uVar3 * 6;
    local_3c = local_3c + uVar3 * 6;
    uVar6 = *(uint *)(param_1 + 0x70);
  }
  if ((int)(uVar6 << 0x1f) < 0) {
    iVar14 = *(int *)(iVar12 + (uint)*local_50 * 4);
    iVar12 = *(int *)(iVar15 + (uint)*local_4c * 4);
    iVar8 = *(int *)(iVar10 + (uint)*local_50 * 4) + *(int *)(iVar8 + (uint)*local_4c * 4) >> 0x10;
    iVar10 = iVar2 + (uint)*local_2c;
    *local_38 = *(undefined *)(iVar10 + iVar14);
    local_38[1] = *(undefined *)(iVar10 + iVar8);
    local_38[2] = *(undefined *)(iVar10 + iVar12);
    iVar2 = iVar2 + (uint)*local_30;
    *local_3c = *(undefined *)(iVar2 + iVar14);
    local_3c[1] = *(undefined *)(iVar2 + iVar8);
    local_3c[2] = *(undefined *)(iVar2 + iVar12);
  }
  return;
}


