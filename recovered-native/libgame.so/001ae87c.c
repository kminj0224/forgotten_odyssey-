/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ae87c  Symbol: FUN_001ae87c */

void FUN_001ae87c(int param_1,byte **param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  short *psVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short *psVar23;
  int iVar24;
  int iVar25;
  short *local_a8;
  short *local_a4;
  int local_a0;
  undefined *local_9c;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  short *local_54;
  undefined4 *local_48;
  byte **local_44;
  int local_40;
  
  iVar10 = *(int *)(param_1 + 0x1e0);
  iVar2 = *(int *)(iVar10 + 0x18);
  iVar11 = *(int *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x14c);
  iVar22 = *(int *)(iVar10 + 0x28);
  piVar13 = *(int **)(param_1 + 0x88);
  iVar3 = *piVar13;
  iVar20 = piVar13[1];
  iVar14 = piVar13[2];
  if (0 < param_4) {
    local_40 = 0;
    local_48 = param_3;
    local_44 = param_2;
    do {
      local_9c = (undefined *)*local_48;
      pbVar18 = *local_44;
      if (*(int *)(iVar10 + 0x24) == 0) {
        local_54 = *(short **)(iVar10 + 0x20);
        *(undefined4 *)(iVar10 + 0x24) = 1;
        local_74 = 3;
        local_70 = 1;
        if (iVar11 == 0) goto LAB_001aeb18;
LAB_001ae928:
        local_a8 = local_54 + local_74 + 2;
        local_a4 = local_54 + local_74 + 1;
        iVar4 = 0;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        iVar25 = 0;
        iVar24 = 0;
        psVar23 = local_54;
        local_a0 = iVar11;
        while( true ) {
          psVar19 = psVar23 + local_74;
          uVar6 = (uint)*(byte *)(iVar12 + *(int *)(iVar22 + (iVar25 + 8 + (int)*psVar19 >> 4) * 4)
                                 + (uint)*pbVar18);
          uVar8 = (uint)*(byte *)(iVar12 + *(int *)(iVar22 + (iVar4 + 8 + (int)*local_a4 >> 4) * 4)
                                 + (uint)pbVar18[1]);
          iVar4 = (int)uVar6 >> 3;
          uVar16 = (uint)*(byte *)(iVar12 + *(int *)(iVar22 + (iVar24 + 8 + (int)*local_a8 >> 4) * 4
                                                    ) + (uint)pbVar18[2]);
          iVar17 = *(int *)(iVar4 * 4 + iVar2);
          iVar21 = (int)uVar16 >> 3;
          iVar25 = (int)uVar8 >> 2;
          iVar24 = (iVar25 * 0x20 + iVar21) * 2;
          uVar5 = (uint)*(ushort *)(iVar24 + iVar17);
          if (uVar5 == 0) {
            FUN_001ae410(param_1,iVar4,iVar25,iVar21);
            uVar5 = (uint)*(ushort *)(iVar24 + iVar17);
          }
          iVar24 = uVar5 - 1;
          *local_9c = (char)iVar24;
          iVar21 = uVar6 - *(byte *)(iVar3 + iVar24);
          iVar17 = uVar8 - *(byte *)(iVar20 + iVar24);
          iVar15 = uVar16 - *(byte *)(iVar14 + iVar24);
          local_a0 = local_a0 + -1;
          *psVar23 = (short)local_84 + (short)iVar21 * 3;
          local_84 = local_78 + iVar21 * 5;
          psVar19[1 - local_74] = (short)local_88 + (short)iVar17 * 3;
          local_88 = local_7c + iVar17 * 5;
          psVar19[2 - local_74] = (short)local_8c + (short)iVar15 * 3;
          local_8c = local_80 + iVar15 * 5;
          local_a4 = local_a4 + local_74;
          local_a8 = local_a8 + local_74;
          if (local_a0 == 0) break;
          iVar24 = iVar15 * 7;
          pbVar18 = pbVar18 + local_74;
          local_9c = local_9c + local_70;
          iVar25 = iVar21 * 7;
          iVar4 = iVar17 * 7;
          psVar23 = psVar19;
          local_80 = iVar15;
          local_7c = iVar17;
          local_78 = iVar21;
        }
        local_54 = (short *)((int)local_54 + iVar11 * local_74 * 2);
        sVar1 = (short)local_84;
        sVar9 = (short)local_88;
        sVar7 = (short)local_8c;
      }
      else {
        local_9c = local_9c + iVar11 + -1;
        pbVar18 = pbVar18 + (iVar11 + -1) * 3;
        local_54 = (short *)(*(int *)(iVar10 + 0x20) + (iVar11 + 1) * 6);
        *(undefined4 *)(iVar10 + 0x24) = 0;
        local_74 = -3;
        local_70 = -1;
        if (iVar11 != 0) goto LAB_001ae928;
LAB_001aeb18:
        sVar7 = 0;
        sVar9 = 0;
        sVar1 = 0;
      }
      *local_54 = sVar1;
      local_54[1] = sVar9;
      local_54[2] = sVar7;
      local_40 = local_40 + 1;
      local_44 = local_44 + 1;
      local_48 = local_48 + 1;
    } while (local_40 < param_4);
  }
  return;
}


