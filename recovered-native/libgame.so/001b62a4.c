/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b62a4  Symbol: FUN_001b62a4 */

undefined4 FUN_001b62a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_48;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar7 = DAT_001b6478 + 0x1b62ba;
  iVar17 = *(int *)(param_1 + 0x1d0);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar17 + 0x28) != 0)) ||
     (iVar5 = FUN_001b6048(), iVar5 != 0)) {
    if (*(int *)(iVar17 + 0x24) == 0) {
      iVar5 = *(int *)(param_1 + 0x19c);
      uVar9 = *(uint *)(param_1 + 0x1a4);
      iVar10 = *(int *)(param_1 + 0x1ac);
      if (*(int *)(iVar17 + 0x10) == 0) {
        puVar11 = *(undefined4 **)(param_1 + 0x18);
        local_3c = *puVar11;
        local_38 = puVar11[1];
        iVar15 = *param_2;
        iVar6 = *(int *)(iVar17 + 8);
        uVar8 = *(uint *)(iVar17 + 0xc);
        iVar2 = *(int *)(iVar17 + 0x3c);
        iVar18 = *(int *)(param_1 + 0x198);
        local_48 = 0;
        if (iVar18 <= iVar5) {
          iVar16 = iVar7 + DAT_001b647c;
          local_2c = param_1;
          do {
            if ((int)uVar8 < 8) {
              iVar6 = FUN_001b5e98(&local_3c,iVar6,uVar8,0);
              if (iVar6 == 0) goto LAB_001b6414;
              uVar1 = 1;
              iVar6 = local_34;
              uVar8 = local_30;
              if (7 < (int)local_30) goto LAB_001b6394;
LAB_001b63e4:
              uVar13 = FUN_001b5f84(&local_3c,iVar6,uVar8,iVar2,uVar1);
              iVar6 = local_34;
              uVar8 = local_30;
              if ((int)uVar13 < 0) goto LAB_001b6414;
            }
            else {
LAB_001b6394:
              uVar13 = iVar6 >> (uVar8 - 8 & 0xff) & 0xff;
              iVar4 = *(int *)((uVar13 + 0x24) * 4 + iVar2);
              uVar1 = 9;
              if (iVar4 == 0) goto LAB_001b63e4;
              uVar13 = (uint)*(byte *)(iVar2 + uVar13 + 0x490);
              uVar8 = uVar8 - iVar4;
            }
            uVar14 = (int)uVar13 >> 4;
            uVar13 = uVar13 & 0xf;
            if (uVar13 == 0) {
              if (uVar14 != 0xf) {
                local_48 = 1 << (uVar14 & 0xff);
                if (uVar14 != 0) {
                  if (((int)uVar8 < (int)uVar14) &&
                     (iVar5 = FUN_001b5e98(&local_3c), iVar6 = local_34, uVar8 = local_30,
                     iVar5 == 0)) goto LAB_001b6414;
                  uVar8 = uVar8 - uVar14;
                  local_48 = local_48 +
                             (*(uint *)(uVar14 * 4 + iVar7 + DAT_001b647c) & iVar6 >> (uVar8 & 0xff)
                             );
                }
                local_48 = local_48 + -1;
                puVar11 = *(undefined4 **)(param_1 + 0x18);
                goto LAB_001b6448;
              }
              iVar18 = iVar18 + 0xf;
            }
            else {
              if (((int)uVar8 < (int)uVar13) &&
                 (iVar4 = FUN_001b5e98(&local_3c,iVar6,uVar8,uVar13), iVar6 = local_34,
                 uVar8 = local_30, iVar4 == 0)) goto LAB_001b6414;
              uVar8 = uVar8 - uVar13;
              uVar3 = *(uint *)(uVar13 * 4 + iVar16);
              uVar12 = iVar6 >> (uVar8 & 0xff) & uVar3;
              uVar3 = uVar12 - uVar3;
              if (*(int *)((uVar13 - 1) * 4 + iVar16) < (int)uVar12) {
                uVar3 = uVar12;
              }
              iVar18 = iVar18 + uVar14;
              *(short *)(*(int *)(iVar18 * 4 + iVar10) * 2 + iVar15) =
                   (short)(uVar3 << (uVar9 & 0xff));
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 <= iVar5);
          puVar11 = *(undefined4 **)(param_1 + 0x18);
        }
LAB_001b6448:
        *puVar11 = local_3c;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_38;
        *(int *)(iVar17 + 8) = iVar6;
        *(uint *)(iVar17 + 0xc) = uVar8;
      }
      else {
        local_48 = *(int *)(iVar17 + 0x10) + -1;
      }
      *(int *)(iVar17 + 0x10) = local_48;
    }
    uVar1 = 1;
    *(int *)(iVar17 + 0x28) = *(int *)(iVar17 + 0x28) + -1;
  }
  else {
LAB_001b6414:
    uVar1 = 0;
  }
  return uVar1;
}


