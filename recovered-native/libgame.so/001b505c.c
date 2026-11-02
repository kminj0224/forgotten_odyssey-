/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b505c  Symbol: FUN_001b505c */

int FUN_001b505c(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int extraout_r1;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  short *psVar30;
  bool bVar31;
  int local_14c;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_108;
  short **local_104;
  int local_d4;
  int local_cc;
  int local_c0;
  undefined4 *local_bc;
  int *local_b8;
  undefined auStack_a8 [2];
  short local_a6;
  short local_a4;
  short local_98;
  short local_96;
  short local_88;
  
  iVar17 = *(int *)(param_1 + 0x1c0);
  iVar18 = *(int *)(param_1 + 0x148);
  while( true ) {
    if (((*(int *)(param_1 + 0x98) < *(int *)(param_1 + 0x90)) ||
        ((*(code ***)(param_1 + 0x1c8))[5] != (code *)0x0)) ||
       ((*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x98) &&
        ((uint)(*(int *)(param_1 + 0x198) == 0) + *(int *)(param_1 + 0x9c) <
         *(uint *)(param_1 + 0x94))))) break;
    iVar5 = (***(code ***)(param_1 + 0x1c8))(param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  iVar27 = *(int *)(param_1 + 0xd8);
  iVar5 = *(int *)(param_1 + 0x24);
  if (0 < iVar5) {
    local_bc = (undefined4 *)(iVar17 + 0x48);
    local_c0 = 0;
    local_cc = 0;
    local_b8 = param_2;
    do {
      if (*(int *)(iVar27 + 0x34) != 0) {
        uVar16 = *(uint *)(param_1 + 0x9c);
        if (uVar16 < iVar18 - 1U) {
          iVar6 = *(int *)(iVar27 + 0xc);
          bVar1 = false;
          iVar5 = iVar6 << 1;
          local_d4 = iVar6;
LAB_001b5124:
          if (uVar16 != 0) goto LAB_001b512a;
LAB_001b5512:
          iVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x20))(param_1,*local_bc,0,iVar5,uVar16);
          bVar31 = true;
        }
        else {
          iVar5 = *(int *)(iVar27 + 0xc);
          __aeabi_uidivmod(*(undefined4 *)(iVar27 + 0x20),iVar5);
          iVar6 = iVar5;
          if (extraout_r1 != 0) {
            bVar1 = true;
            iVar5 = extraout_r1;
            local_d4 = extraout_r1;
            goto LAB_001b5124;
          }
          bVar1 = true;
          local_d4 = iVar5;
          if (uVar16 == 0) goto LAB_001b5512;
LAB_001b512a:
          iVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                            (param_1,*local_bc,iVar6 * (uVar16 - 1),iVar5 + iVar6,0);
          bVar31 = false;
          iVar5 = iVar5 + *(int *)(iVar27 + 0xc) * 4;
        }
        puVar9 = *(ushort **)(iVar27 + 0x50);
        uVar16 = (uint)*puVar9;
        pcVar10 = *(code **)(local_cc * 4 + *(int *)(param_1 + 0x1d4) + 4);
        local_130 = *local_b8;
        if (local_d4 < 1) {
          iVar5 = *(int *)(param_1 + 0x24);
        }
        else {
          iVar11 = *(int *)(iVar17 + 0x70) + local_c0;
          iVar24 = (uint)puVar9[1] * 0x80;
          iVar19 = (uint)puVar9[1] << 8;
          iVar28 = (uint)puVar9[8] * 0x80;
          iVar6 = (uint)puVar9[8] << 8;
          iVar14 = (uint)puVar9[9] * 0x80;
          iVar7 = (uint)puVar9[0x10] * 0x80;
          iVar12 = (uint)puVar9[0x10] << 8;
          iVar20 = (uint)puVar9[9] << 8;
          iVar25 = (uint)puVar9[2] * 0x80;
          iVar29 = (uint)puVar9[2] << 8;
          local_104 = (short **)(iVar5 + -4);
          local_108 = 0;
          while( true ) {
            psVar30 = local_104[1];
            if ((local_108 != 0) || (psVar21 = psVar30, !bVar31)) {
              psVar21 = *local_104;
            }
            if ((!bVar1) || (psVar13 = psVar30, local_d4 + -1 != local_108)) {
              psVar13 = local_104[2];
            }
            local_140 = (int)*psVar21;
            local_14c = (int)*psVar30;
            local_144 = (int)*psVar13;
            uVar15 = *(int *)(iVar27 + 0x1c) - 1;
            iVar5 = 0;
            uVar26 = 0;
            local_13c = local_14c;
            local_138 = local_144;
            local_134 = local_140;
            while( true ) {
              iVar4 = local_140;
              iVar3 = local_144;
              iVar2 = local_14c;
              psVar13 = psVar13 + 0x40;
              psVar21 = psVar21 + 0x40;
              jcopy_block_row(psVar30,auStack_a8,1);
              if (uVar26 < uVar15) {
                local_140 = (int)*psVar21;
                local_14c = (int)psVar30[0x40];
                local_144 = (int)*psVar13;
              }
              uVar22 = *(uint *)(iVar11 + 4);
              if ((uVar22 != 0) && (local_a6 == 0)) {
                iVar8 = uVar16 * 0x24 * (local_13c - local_14c);
                if (iVar8 < 0) {
                  iVar8 = __divsi3(iVar24 - iVar8,iVar19);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                  iVar8 = -iVar8;
                }
                else {
                  iVar8 = __divsi3(iVar8 + iVar24,iVar19);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                }
                local_a6 = (short)iVar8;
              }
              uVar22 = *(uint *)(iVar11 + 8);
              if ((uVar22 != 0) && (local_98 == 0)) {
                iVar8 = uVar16 * 0x24 * (iVar4 - iVar3);
                if (iVar8 < 0) {
                  iVar8 = __divsi3(iVar28 - iVar8,iVar6);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                  iVar8 = -iVar8;
                }
                else {
                  iVar8 = __divsi3(iVar8 + iVar28,iVar6);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                }
                local_98 = (short)iVar8;
              }
              uVar22 = *(uint *)(iVar11 + 0xc);
              if ((uVar22 != 0) && (local_88 == 0)) {
                iVar8 = uVar16 * 9 * (iVar4 + iVar3 + iVar2 * -2);
                if (iVar8 < 0) {
                  iVar8 = __divsi3(iVar7 - iVar8,iVar12);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                  iVar8 = -iVar8;
                }
                else {
                  iVar8 = __divsi3(iVar8 + iVar7,iVar12);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                }
                local_88 = (short)iVar8;
              }
              uVar22 = *(uint *)(iVar11 + 0x10);
              if ((uVar22 != 0) && (local_96 == 0)) {
                iVar8 = uVar16 * 5 * (((local_134 - local_138) + local_144) - local_140);
                if (iVar8 < 0) {
                  iVar8 = __divsi3(iVar14 - iVar8,iVar20);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                  iVar8 = -iVar8;
                }
                else {
                  iVar8 = __divsi3(iVar8 + iVar14,iVar20);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                }
                local_96 = (short)iVar8;
              }
              uVar22 = *(uint *)(iVar11 + 0x14);
              if ((uVar22 != 0) && (local_a4 == 0)) {
                iVar8 = uVar16 * 9 * (local_13c + iVar2 * -2 + local_14c);
                if (iVar8 < 0) {
                  iVar8 = __divsi3(iVar25 - iVar8,iVar29);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                  iVar8 = -iVar8;
                }
                else {
                  iVar8 = __divsi3(iVar8 + iVar25,iVar29);
                  if ((0 < (int)uVar22) && (iVar23 = 1 << (uVar22 & 0xff), iVar23 <= iVar8)) {
                    iVar8 = iVar23 + -1;
                  }
                }
                local_a4 = (short)iVar8;
              }
              (*pcVar10)(param_1,iVar27,auStack_a8,local_130,iVar5);
              uVar26 = uVar26 + 1;
              if (uVar15 < uVar26) break;
              iVar5 = iVar5 + *(int *)(iVar27 + 0x24);
              local_134 = iVar4;
              local_13c = iVar2;
              local_138 = iVar3;
              psVar30 = psVar30 + 0x40;
            }
            local_108 = local_108 + 1;
            local_104 = local_104 + 1;
            if (local_d4 <= local_108) break;
            local_130 = local_130 + *(int *)(iVar27 + 0x28) * 4;
          }
          iVar5 = *(int *)(param_1 + 0x24);
        }
      }
      local_cc = local_cc + 1;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_c0 = local_c0 + 0x18;
      if (iVar5 <= local_cc) break;
      iVar27 = iVar27 + 0x58;
    } while( true );
  }
  uVar16 = *(int *)(param_1 + 0x9c) + 1;
  *(uint *)(param_1 + 0x9c) = uVar16;
  return 4 - (uint)(uVar16 < *(uint *)(param_1 + 0x148));
}


