/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8f70  Symbol: FUN_001a8f70 */

void FUN_001a8f70(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte **local_48;
  byte *local_44;
  undefined *local_40;
  undefined4 *local_38;
  int local_34;
  
  iVar16 = *(int *)(param_1 + 0x1c);
  iVar10 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar17 = iVar10 - iVar16;
  iVar4 = *(int *)(param_1 + 0x110);
  if ((0 < iVar17) && (iVar4 + 1 < 0 == SCARRY4(iVar4,1))) {
    piVar13 = (int *)(param_3 + -4);
    iVar12 = 0;
    do {
      puVar5 = (undefined *)(*piVar13 + iVar16);
      uVar1 = puVar5[-1];
      puVar3 = puVar5 + iVar17;
      do {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar3);
      iVar12 = iVar12 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar12 != iVar4 + 2);
    iVar4 = *(int *)(param_1 + 0x110);
  }
  iVar17 = (0x80 - *(int *)(param_1 + 0xe4)) * 0x200;
  iVar16 = *(int *)(param_1 + 0xe4) * 0x40;
  if (0 < iVar4) {
    iVar10 = iVar10 + -2;
    local_48 = (byte **)(param_3 + -4);
    local_34 = 0;
    local_38 = param_4;
    do {
      puVar3 = (undefined *)*local_38;
      pbVar11 = *local_48;
      pbVar14 = local_48[2];
      pbVar7 = local_48[1];
      local_44 = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      iVar12 = (uint)*pbVar14 + (uint)*pbVar11 + uVar8;
      iVar4 = (uint)pbVar14[1] + (uint)pbVar11[1] + (uint)pbVar7[1];
      *puVar3 = (char)(uVar8 * iVar17 + 0x8000 + iVar16 * ((iVar12 * 2 - uVar8) + iVar4) >> 0x10);
      local_40 = puVar3 + 1;
      if (iVar10 != 0) {
        iVar9 = 0;
        iVar6 = iVar10;
        pbVar7 = local_44;
        iVar15 = iVar12;
        do {
          iVar12 = iVar4;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar6 = iVar6 + -1;
          iVar4 = (uint)pbVar11[iVar9 + 2] + (uint)pbVar14[iVar9 + 2] + (uint)*pbVar7;
          puVar3[iVar9 + 1] =
               (char)(iVar16 * ((iVar4 - (uint)bVar2) + iVar15 + iVar12) +
                      (uint)bVar2 * iVar17 + 0x8000 >> 0x10);
          iVar9 = iVar9 + 1;
          iVar15 = iVar12;
        } while (iVar6 != 0);
        local_44 = local_44 + iVar10;
        local_40 = local_40 + iVar10;
      }
      *local_40 = (char)((uint)*local_44 * iVar17 + 0x8000 +
                         iVar16 * ((iVar4 * 2 + iVar12) - (uint)*local_44) >> 0x10);
      local_48 = local_48 + 1;
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_34 < *(int *)(param_1 + 0x110));
  }
  return;
}


