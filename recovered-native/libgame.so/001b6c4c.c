/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b6c4c  Symbol: FUN_001b6c4c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001b6c4c(int param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int *local_6c;
  int local_64;
  int local_58;
  int aiStack_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar8 = DAT_001b6f94 + 0x1b6c62;
  iVar9 = *(int *)(param_1 + 0x1d0);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar9 + 0x28) != 0)) ||
     (iVar7 = FUN_001b6048(), iVar7 != 0)) {
    if (*(int *)(iVar9 + 0x24) == 0) {
      puVar15 = *(undefined4 **)(param_1 + 0x18);
      local_3c = *puVar15;
      local_38 = puVar15[1];
      uVar1 = *(uint *)(iVar9 + 0xc);
      iVar7 = *(int *)(iVar9 + 8);
      uVar6 = *(undefined4 *)(iVar9 + 0x10);
      aiStack_4c[0] = *(int *)(iVar9 + 0x14);
      aiStack_4c[1] = *(undefined4 *)(iVar9 + 0x18);
      aiStack_4c[2] = *(undefined4 *)(iVar9 + 0x1c);
      aiStack_4c[3] = *(undefined4 *)(iVar9 + 0x20);
      if (0 < *(int *)(param_1 + 0x16c)) {
        local_64 = 0;
        local_58 = 0;
        local_6c = (int *)(iVar9 + 0x60);
        iVar10 = iVar8 + DAT_001b6f98;
        local_2c = param_1;
        do {
          puVar2 = *(undefined2 **)(param_2 + local_64);
          iVar16 = *local_6c;
          if ((int)uVar1 < 8) {
            iVar7 = FUN_001b5e98(&local_3c,iVar7,uVar1,0);
            if (iVar7 == 0) goto LAB_001b6f54;
            uVar17 = 1;
            iVar7 = local_34;
            uVar1 = local_30;
            if (7 < (int)local_30) goto LAB_001b6cf4;
LAB_001b6ec6:
            uVar11 = FUN_001b5f84(&local_3c,iVar7,uVar1,iVar16,uVar17);
            if ((int)uVar11 < 0) goto LAB_001b6f54;
            iVar16 = local_6c[0x14];
            iVar18 = local_6c[10];
            uVar1 = local_30;
            iVar7 = local_34;
          }
          else {
LAB_001b6cf4:
            uVar11 = iVar7 >> (uVar1 - 8 & 0xff) & 0xff;
            iVar3 = *(int *)((uVar11 + 0x24) * 4 + iVar16);
            uVar17 = 9;
            if (iVar3 == 0) goto LAB_001b6ec6;
            uVar11 = (uint)*(byte *)(iVar16 + uVar11 + 0x490);
            iVar16 = local_6c[0x14];
            iVar18 = local_6c[10];
            uVar1 = uVar1 - iVar3;
          }
          if (iVar16 == 0) {
            if (uVar11 != 0) {
              if ((int)uVar1 < (int)uVar11) {
                iVar7 = FUN_001b5e98(&local_3c,iVar7,uVar1,uVar11);
                if (iVar7 == 0) goto LAB_001b6f54;
                uVar1 = local_30 - uVar11;
                iVar7 = local_34;
              }
              else {
                uVar1 = uVar1 - uVar11;
              }
            }
          }
          else {
            uVar4 = uVar11;
            if (uVar11 != 0) {
              if (((int)uVar1 < (int)uVar11) &&
                 (iVar3 = FUN_001b5e98(&local_3c,iVar7,uVar1,uVar11), iVar7 = local_34,
                 uVar1 = local_30, iVar3 == 0)) goto LAB_001b6f54;
              uVar1 = uVar1 - uVar11;
              uVar4 = *(uint *)(uVar11 * 4 + iVar10);
              uVar12 = iVar7 >> (uVar1 & 0xff) & uVar4;
              uVar4 = uVar12 - uVar4;
              if (*(int *)((uVar11 - 1) * 4 + iVar10) < (int)uVar12) {
                uVar4 = uVar12;
              }
            }
            iVar13 = *(int *)(param_1 + local_64 + 0x170);
            iVar3 = aiStack_4c[iVar13];
            aiStack_4c[iVar13] = uVar4 + iVar3;
            *puVar2 = (short)(uVar4 + iVar3);
            iVar3 = DAT_001b6f9c;
            if (1 < iVar16) {
              iVar13 = 1;
              do {
                if ((int)uVar1 < 8) {
                  iVar7 = FUN_001b5e98(&local_3c,iVar7,uVar1,0);
                  if (iVar7 == 0) goto LAB_001b6f54;
                  uVar17 = 1;
                  iVar7 = local_34;
                  uVar1 = local_30;
                  if (7 < (int)local_30) goto LAB_001b6dcc;
LAB_001b6e88:
                  uVar11 = FUN_001b5f84(&local_3c,iVar7,uVar1,iVar18,uVar17);
                  iVar7 = local_34;
                  uVar1 = local_30;
                  if ((int)uVar11 < 0) goto LAB_001b6f54;
                }
                else {
LAB_001b6dcc:
                  uVar11 = iVar7 >> (uVar1 - 8 & 0xff) & 0xff;
                  iVar5 = *(int *)((uVar11 + 0x24) * 4 + iVar18);
                  uVar17 = 9;
                  if (iVar5 == 0) goto LAB_001b6e88;
                  uVar11 = (uint)*(byte *)(iVar18 + uVar11 + 0x490);
                  uVar1 = uVar1 - iVar5;
                }
                uVar4 = uVar11 & 0xf;
                if (uVar4 == 0) {
                  if ((int)uVar11 >> 4 != 0xf) goto LAB_001b6e12;
                  iVar13 = iVar13 + 0x10;
                }
                else {
                  if (((int)uVar1 < (int)uVar4) &&
                     (iVar5 = FUN_001b5e98(&local_3c,iVar7,uVar1,uVar4), iVar7 = local_34,
                     uVar1 = local_30, iVar5 == 0)) goto LAB_001b6f54;
                  uVar1 = uVar1 - uVar4;
                  uVar12 = *(uint *)(uVar4 * 4 + iVar10);
                  uVar14 = iVar7 >> (uVar1 & 0xff) & uVar12;
                  uVar12 = uVar14 - uVar12;
                  if (*(int *)((uVar4 - 1) * 4 + iVar10) < (int)uVar14) {
                    uVar12 = uVar14;
                  }
                  iVar5 = iVar13 + ((int)uVar11 >> 4);
                  iVar13 = iVar5 + 1;
                  puVar2[*(int *)(iVar5 * 4 + *(int *)(iVar8 + iVar3))] = (short)uVar12;
                }
                if (iVar16 <= iVar13) goto joined_r0x001b6e0e;
              } while( true );
            }
          }
          iVar13 = 1;
          do {
            if ((int)uVar1 < 8) {
              iVar7 = FUN_001b5e98(&local_3c,iVar7,uVar1,0);
              if (iVar7 == 0) goto LAB_001b6f54;
              uVar17 = 1;
              iVar7 = local_34;
              uVar1 = local_30;
              if (7 < (int)local_30) goto LAB_001b6f0e;
LAB_001b6f6e:
              uVar11 = FUN_001b5f84(&local_3c,iVar7,uVar1,iVar18,uVar17);
              iVar7 = local_34;
              uVar1 = local_30;
              if ((int)uVar11 < 0) goto LAB_001b6f54;
            }
            else {
LAB_001b6f0e:
              uVar11 = iVar7 >> (uVar1 - 8 & 0xff) & 0xff;
              iVar16 = *(int *)((uVar11 + 0x24) * 4 + iVar18);
              uVar17 = 9;
              if (iVar16 == 0) goto LAB_001b6f6e;
              uVar11 = (uint)*(byte *)(iVar18 + uVar11 + 0x490);
              uVar1 = uVar1 - iVar16;
            }
            uVar4 = uVar11 & 0xf;
            if (uVar4 == 0) {
              if ((int)uVar11 >> 4 != 0xf) break;
              iVar13 = iVar13 + 0xf;
            }
            else {
              if (((int)uVar1 < (int)uVar4) &&
                 (iVar16 = FUN_001b5e98(&local_3c,iVar7,uVar1,uVar4), iVar7 = local_34,
                 uVar1 = local_30, iVar16 == 0)) goto LAB_001b6f54;
              iVar13 = iVar13 + ((int)uVar11 >> 4);
              uVar1 = uVar1 - uVar4;
            }
            iVar13 = iVar13 + 1;
joined_r0x001b6e0e:
          } while (iVar13 < 0x40);
LAB_001b6e12:
          local_6c = local_6c + 1;
          local_58 = local_58 + 1;
          local_64 = local_64 + 4;
        } while (local_58 < *(int *)(param_1 + 0x16c));
        puVar15 = *(undefined4 **)(param_1 + 0x18);
      }
      *puVar15 = local_3c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_38;
      *(int *)(iVar9 + 8) = iVar7;
      *(uint *)(iVar9 + 0xc) = uVar1;
      *(undefined4 *)(iVar9 + 0x10) = uVar6;
      *(int *)(iVar9 + 0x14) = aiStack_4c[0];
      *(int *)(iVar9 + 0x18) = aiStack_4c[1];
      *(int *)(iVar9 + 0x1c) = aiStack_4c[2];
      *(int *)(iVar9 + 0x20) = aiStack_4c[3];
    }
    uVar6 = 1;
    *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + -1;
  }
  else {
LAB_001b6f54:
    uVar6 = 0;
  }
  return uVar6;
}


