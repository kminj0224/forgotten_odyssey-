/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad884  Symbol: FUN_001ad884 */

void FUN_001ad884(int param_1,byte **param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint local_3c;
  int *local_38;
  byte **local_34;
  int local_30;
  
  iVar12 = *(int *)(param_1 + 0x1e0);
  piVar13 = *(int **)(iVar12 + 0x18);
  iVar16 = *piVar13;
  iVar18 = piVar13[1];
  iVar14 = piVar13[2];
  iVar4 = *(int *)(param_1 + 0x70);
  if (0 < param_4) {
    local_3c = *(uint *)(iVar12 + 0x30);
    local_30 = 0;
    local_38 = param_3;
    local_34 = param_2;
    do {
      iVar6 = *(int *)(iVar12 + 0x34);
      pbVar15 = *local_34;
      iVar10 = local_3c * 0x40;
      iVar7 = *(int *)(iVar12 + 0x38);
      iVar8 = *(int *)(iVar12 + 0x3c);
      iVar17 = *local_38;
      if (iVar4 != 0) {
        iVar11 = 0;
        uVar5 = 0;
        do {
          iVar9 = uVar5 * 4;
          bVar3 = *pbVar15;
          pbVar1 = pbVar15 + 1;
          pbVar2 = pbVar15 + 2;
          pbVar15 = pbVar15 + 3;
          *(char *)(iVar17 + iVar11) =
               *(char *)(iVar18 + *(int *)(iVar7 + iVar10 + iVar9) + (uint)*pbVar1) +
               *(char *)(iVar16 + *(int *)(iVar6 + iVar10 + iVar9) + (uint)bVar3) +
               *(char *)(iVar14 + *(int *)(iVar8 + iVar10 + iVar9) + (uint)*pbVar2);
          iVar11 = iVar11 + 1;
          uVar5 = uVar5 + 1 & 0xf;
        } while (iVar4 != iVar11);
      }
      local_3c = local_3c + 1 & 0xf;
      *(uint *)(iVar12 + 0x30) = local_3c;
      local_30 = local_30 + 1;
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_30 != param_4);
  }
  return;
}


