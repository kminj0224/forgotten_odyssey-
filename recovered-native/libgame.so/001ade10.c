/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ade10  Symbol: FUN_001ade10 */

void FUN_001ade10(int param_1,int *param_2,char **param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_6c;
  int local_60;
  short *local_5c;
  int local_54;
  char **local_48;
  int *local_44;
  int local_40;
  
  iVar8 = *(int *)(param_1 + 0x1e0);
  iVar9 = *(int *)(param_1 + 0x78);
  iVar12 = *(int *)(param_1 + 0x70);
  iVar10 = *(int *)(param_1 + 0x14c);
  if (0 < param_4) {
    local_40 = 0;
    local_48 = param_3;
    local_44 = param_2;
    do {
      jzero_far(*local_48,iVar12);
      if (0 < iVar9) {
        local_60 = 0;
        local_54 = iVar8;
        do {
          pbVar2 = (byte *)(*local_44 + local_60);
          pcVar11 = *local_48;
          if (*(int *)(iVar8 + 0x54) == 0) {
            iVar15 = 1;
            local_5c = *(short **)(local_54 + 0x44);
            local_6c = iVar9;
          }
          else {
            pbVar2 = pbVar2 + iVar9 * (iVar12 + -1);
            pcVar11 = pcVar11 + iVar12 + -1;
            local_5c = (short *)(*(int *)(local_54 + 0x44) + (iVar12 + 1) * 2);
            iVar15 = -1;
            local_6c = -iVar9;
          }
          iVar3 = *(int *)(*(int *)(iVar8 + 0x18) + local_60 * 4);
          iVar4 = *(int *)(*(int *)(iVar8 + 0x10) + local_60 * 4);
          sVar5 = 0;
          if (iVar12 != 0) {
            iVar18 = 0;
            iVar16 = 0;
            psVar13 = local_5c;
            iVar14 = iVar12;
            iVar17 = 0;
            do {
              uVar6 = (uint)*(byte *)(iVar10 + (iVar16 + 8 + (int)psVar13[iVar15] >> 4) +
                                     (uint)*pbVar2);
              bVar1 = *(byte *)(iVar3 + uVar6);
              iVar14 = iVar14 + -1;
              *pcVar11 = bVar1 + *pcVar11;
              pcVar11 = pcVar11 + iVar15;
              iVar7 = uVar6 - *(byte *)(iVar4 + (uint)bVar1);
              *psVar13 = (short)iVar18 + (short)iVar7 * 3;
              iVar18 = iVar7 * 5 + iVar17;
              iVar16 = iVar7 * 7;
              pbVar2 = pbVar2 + local_6c;
              psVar13 = psVar13 + iVar15;
              iVar17 = iVar7;
            } while (iVar14 != 0);
            local_5c = (short *)((int)local_5c + iVar12 * iVar15 * 2);
            sVar5 = (short)iVar18;
          }
          *local_5c = sVar5;
          local_60 = local_60 + 1;
          local_54 = local_54 + 4;
        } while (local_60 != iVar9);
      }
      *(uint *)(iVar8 + 0x54) = (uint)(*(int *)(iVar8 + 0x54) == 0);
      local_40 = local_40 + 1;
      local_48 = local_48 + 1;
      local_44 = local_44 + 1;
    } while (local_40 < param_4);
  }
  return;
}


