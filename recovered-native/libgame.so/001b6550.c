/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b6550  Symbol: FUN_001b6550 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001b6550(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  bool bVar20;
  uint local_168;
  int local_158;
  int local_144;
  int iStack_140;
  int aiStack_13c [64];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int *local_2c;
  
  iVar6 = DAT_001b6888 + 0x1b6566;
  iVar9 = param_1[0x74];
  if (((param_1[0x46] != 0) && (*(int *)(iVar9 + 0x28) == 0)) &&
     (iVar3 = FUN_001b6048(param_1), iVar3 == 0)) {
    return 0;
  }
  if (*(int *)(iVar9 + 0x24) == 0) {
    iVar10 = param_1[0x67];
    uVar11 = 1 << (param_1[0x69] & 0xffU);
    uVar12 = -1 << (param_1[0x69] & 0xffU);
    iVar13 = param_1[0x6b];
    puVar14 = (undefined4 *)param_1[6];
    local_3c = *puVar14;
    local_38 = puVar14[1];
    local_144 = *(int *)(iVar9 + 0x10);
    uVar18 = *(uint *)(iVar9 + 0xc);
    iVar3 = *(int *)(iVar9 + 8);
    iVar16 = *param_2;
    iVar7 = *(int *)(iVar9 + 0x3c);
    iVar17 = param_1[0x66];
    local_158 = 0;
    local_2c = param_1;
    if (local_144 == 0) {
      local_144 = 0;
      if (iVar17 <= iVar10) {
        do {
          if ((int)uVar18 < 8) {
            iVar3 = FUN_001b5e98(&local_3c,iVar3,uVar18,0);
            if (iVar3 == 0) goto LAB_001b6862;
            uVar5 = 1;
            uVar18 = local_30;
            iVar3 = local_34;
            if (7 < (int)local_30) goto LAB_001b6600;
LAB_001b67ec:
            uVar15 = FUN_001b5f84(&local_3c,iVar3,uVar18,iVar7,uVar5);
            uVar18 = local_30;
            iVar3 = local_34;
            if ((int)uVar15 < 0) goto LAB_001b6862;
          }
          else {
LAB_001b6600:
            uVar15 = iVar3 >> (uVar18 - 8 & 0xff) & 0xff;
            iVar8 = *(int *)((uVar15 + 0x24) * 4 + iVar7);
            uVar5 = 9;
            if (iVar8 == 0) goto LAB_001b67ec;
            uVar15 = (uint)*(byte *)(iVar7 + uVar15 + 0x490);
            uVar18 = uVar18 - iVar8;
          }
          uVar4 = (int)uVar15 >> 4;
          if ((uVar15 & 0xf) == 0) {
            local_168 = 0;
            if (uVar4 != 0xf) {
              local_144 = 1 << (uVar4 & 0xff);
              if (uVar4 != 0) {
                if (((int)uVar18 < (int)uVar4) &&
                   (iVar7 = FUN_001b5e98(&local_3c,iVar3,uVar18,uVar4), uVar18 = local_30,
                   iVar3 = local_34, iVar7 == 0)) goto LAB_001b6862;
                uVar18 = uVar18 - uVar4;
                local_144 = local_144 +
                            (iVar3 >> (uVar18 & 0xff) & *(uint *)(uVar4 * 4 + iVar6 + DAT_001b688c))
                ;
              }
              if (local_144 == 0) goto LAB_001b684a;
              goto LAB_001b675e;
            }
          }
          else {
            if ((uVar15 & 0xf) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x79;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            }
            if (((int)uVar18 < 1) &&
               (iVar8 = FUN_001b5e98(&local_3c,iVar3,uVar18,1), uVar18 = local_30, iVar3 = local_34,
               iVar8 == 0)) goto LAB_001b6862;
            uVar18 = uVar18 - 1;
            local_168 = uVar11;
            if ((iVar3 >> (uVar18 & 0xff) & 1U) == 0) {
              local_168 = uVar12;
            }
          }
          piVar19 = (int *)(iVar13 + iVar17 * 4);
          do {
            iVar8 = *piVar19 * 2;
            if (*(short *)(iVar16 + iVar8) == 0) {
              bVar20 = uVar4 == 0;
              uVar4 = uVar4 - 1;
              if (bVar20) break;
            }
            else {
              if (((int)uVar18 < 1) &&
                 (iVar2 = FUN_001b5e98(&local_3c,iVar3,uVar18,1), iVar3 = local_34,
                 uVar18 = local_30, iVar2 == 0)) goto LAB_001b6862;
              uVar18 = uVar18 - 1;
              if ((iVar3 >> (uVar18 & 0xff) & 1U) != 0) {
                sVar1 = *(short *)(iVar16 + iVar8);
                if (((int)sVar1 & uVar11) == 0) {
                  uVar15 = uVar11;
                  if (sVar1 < 0) {
                    uVar15 = uVar12;
                  }
                  *(short *)(iVar16 + iVar8) = (short)uVar15 + sVar1;
                }
              }
            }
            iVar17 = iVar17 + 1;
            piVar19 = piVar19 + 1;
          } while (iVar17 <= iVar10);
          if (local_168 != 0) {
            iVar8 = *(int *)(iVar17 * 4 + iVar13);
            *(undefined2 *)(iVar8 * 2 + iVar16) = (undefined2)local_168;
            aiStack_13c[local_158] = iVar8;
            local_158 = local_158 + 1;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 <= iVar10);
        puVar14 = (undefined4 *)param_1[6];
      }
    }
    else {
LAB_001b675e:
      if (iVar17 <= iVar10) {
        piVar19 = (int *)(iVar13 + iVar17 * 4);
        do {
          iVar6 = *piVar19 * 2;
          if (*(short *)(iVar16 + iVar6) != 0) {
            if (((int)uVar18 < 1) &&
               (iVar7 = FUN_001b5e98(&local_3c,iVar3,uVar18,1), iVar3 = local_34, uVar18 = local_30,
               iVar7 == 0)) {
LAB_001b6862:
              if (local_158 == 0) {
                return 0;
              }
              piVar19 = aiStack_13c + local_158 + -1;
              do {
                iVar6 = *piVar19;
                piVar19 = piVar19 + -1;
                *(undefined2 *)(iVar6 * 2 + iVar16) = 0;
              } while (piVar19 != &iStack_140);
              return 0;
            }
            uVar18 = uVar18 - 1;
            if ((iVar3 >> (uVar18 & 0xff) & 1U) != 0) {
              sVar1 = *(short *)(iVar16 + iVar6);
              if (((int)sVar1 & uVar11) == 0) {
                if (sVar1 < 0) {
                  *(short *)(iVar16 + iVar6) = (short)uVar12 + sVar1;
                }
                else {
                  *(short *)(iVar16 + iVar6) = sVar1 + (short)uVar11;
                }
              }
            }
          }
          iVar17 = iVar17 + 1;
          piVar19 = piVar19 + 1;
        } while (iVar17 <= iVar10);
      }
      local_144 = local_144 + -1;
LAB_001b684a:
      puVar14 = (undefined4 *)param_1[6];
    }
    *puVar14 = local_3c;
    *(undefined4 *)(param_1[6] + 4) = local_38;
    *(int *)(iVar9 + 8) = iVar3;
    *(uint *)(iVar9 + 0xc) = uVar18;
    *(int *)(iVar9 + 0x10) = local_144;
  }
  *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + -1;
  return 1;
}


