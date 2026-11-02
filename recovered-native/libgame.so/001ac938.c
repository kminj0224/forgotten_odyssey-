/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac938  Symbol: FUN_001ac938 */

void FUN_001ac938(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined *local_34;
  byte *local_2c;
  
  iVar9 = *(int *)(param_1 + 0x1d8);
  iVar15 = *(int *)(iVar9 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14c);
  param_3 = param_3 * 4;
  iVar18 = *(int *)(iVar9 + 0x14);
  iVar13 = *(int *)(iVar9 + 0x18);
  iVar9 = *(int *)(iVar9 + 0x1c);
  local_2c = *(byte **)(*param_2 + param_3);
  local_34 = (undefined *)*param_4;
  pbVar10 = *(byte **)(param_2[1] + param_3);
  pbVar4 = *(byte **)(param_2[2] + param_3);
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar19 = uVar7 >> 1;
  if (uVar19 != 0) {
    uVar6 = 0;
    puVar8 = local_34;
    pbVar11 = local_2c;
    do {
      pbVar1 = pbVar4 + uVar6;
      iVar16 = *(int *)(iVar15 + (uint)*pbVar1 * 4);
      pbVar2 = pbVar10 + uVar6;
      uVar6 = uVar6 + 1;
      iVar17 = *(int *)(iVar13 + (uint)*pbVar1 * 4) + *(int *)(iVar9 + (uint)*pbVar2 * 4) >> 0x10;
      iVar14 = *(int *)(iVar18 + (uint)*pbVar2 * 4);
      uVar5 = (uint)*pbVar11;
      *puVar8 = *(undefined *)(iVar16 + iVar3 + uVar5);
      puVar8[1] = *(undefined *)(iVar3 + iVar17 + uVar5);
      puVar8[2] = *(undefined *)(iVar3 + iVar14 + uVar5);
      iVar12 = iVar3 + (uint)pbVar11[1];
      puVar8[3] = *(undefined *)(iVar12 + iVar16);
      puVar8[4] = *(undefined *)(iVar12 + iVar17);
      puVar8[5] = *(undefined *)(iVar12 + iVar14);
      puVar8 = puVar8 + 6;
      pbVar11 = pbVar11 + 2;
    } while (uVar19 != uVar6);
    local_2c = local_2c + (uVar7 & 0xfffffffe);
    local_34 = local_34 + (uVar7 & 0xfffffffe) * 2 + (uVar7 & 0xfffffffe);
    uVar7 = *(uint *)(param_1 + 0x70);
    pbVar10 = pbVar10 + uVar19;
    pbVar4 = pbVar4 + uVar19;
  }
  if ((int)(uVar7 << 0x1f) < 0) {
    iVar12 = *(int *)(iVar9 + (uint)*pbVar10 * 4);
    iVar14 = *(int *)(iVar13 + (uint)*pbVar4 * 4);
    iVar13 = *(int *)(iVar18 + (uint)*pbVar10 * 4);
    iVar9 = iVar3 + (uint)*local_2c;
    *local_34 = *(undefined *)(iVar3 + *(int *)(iVar15 + (uint)*pbVar4 * 4) + (uint)*local_2c);
    local_34[1] = *(undefined *)(iVar9 + (iVar14 + iVar12 >> 0x10));
    local_34[2] = *(undefined *)(iVar9 + iVar13);
  }
  return;
}


