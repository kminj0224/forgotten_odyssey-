/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b68bc  Symbol: FUN_001b68bc */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001b68bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int *local_6c;
  undefined4 *local_60;
  int local_5c;
  int aiStack_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar6 = *(int *)(param_1 + 0x1d0);
  iVar14 = DAT_001b6c04 + 0x1b68e2;
  if (((*(int *)(param_1 + 0x118) != 0) && (*(int *)(iVar6 + 0x28) == 0)) &&
     (iVar3 = FUN_001b6048(param_1), iVar3 == 0)) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x24) != 0) goto LAB_001b6ad4;
  iVar7 = *(int *)(param_1 + 0x1ac);
  iVar8 = *(int *)(param_1 + 0x1b0);
  puVar18 = *(undefined4 **)(param_1 + 0x18);
  local_3c = *puVar18;
  local_38 = puVar18[1];
  iVar3 = *(int *)(iVar6 + 8);
  uVar16 = *(uint *)(iVar6 + 0xc);
  uVar5 = *(undefined4 *)(iVar6 + 0x10);
  aiStack_4c[0] = *(int *)(iVar6 + 0x14);
  aiStack_4c[1] = *(undefined4 *)(iVar6 + 0x18);
  aiStack_4c[2] = *(undefined4 *)(iVar6 + 0x1c);
  aiStack_4c[3] = *(undefined4 *)(iVar6 + 0x20);
  if (0 < *(int *)(param_1 + 0x16c)) {
    local_6c = (int *)(iVar6 + 0x60);
    iVar14 = iVar14 + DAT_001b6c08;
    local_5c = 0;
    local_60 = param_2;
    local_2c = param_1;
LAB_001b6960:
    puVar9 = (undefined2 *)*local_60;
    iVar15 = *local_6c;
    if ((int)uVar16 < 8) {
      iVar3 = FUN_001b5e98(&local_3c,iVar3,uVar16,0);
      if (iVar3 == 0) {
        return 0;
      }
      uVar17 = 1;
      iVar3 = local_34;
      uVar16 = local_30;
      if (7 < (int)local_30) goto LAB_001b6970;
LAB_001b6b40:
      uVar10 = FUN_001b5f84(&local_3c,iVar3,uVar16,iVar15,uVar17);
      if ((int)uVar10 < 0) {
        return 0;
      }
      iVar1 = local_6c[0x14];
      iVar15 = local_6c[10];
      iVar3 = local_34;
      uVar16 = local_30;
      if (iVar1 == 0) goto LAB_001b6b60;
LAB_001b69a8:
      uVar2 = uVar10;
      if (uVar10 != 0) {
        if (((int)uVar16 < (int)uVar10) &&
           (iVar4 = FUN_001b5e98(&local_3c,iVar3,uVar16,uVar10), iVar3 = local_34, uVar16 = local_30
           , iVar4 == 0)) {
          return 0;
        }
        uVar16 = uVar16 - uVar10;
        uVar2 = *(uint *)(uVar10 * 4 + iVar14);
        uVar11 = iVar3 >> (uVar16 & 0xff) & uVar2;
        uVar2 = uVar11 - uVar2;
        if (*(int *)((uVar10 - 1) * 4 + iVar14) < (int)uVar11) {
          uVar2 = uVar11;
        }
      }
      iVar12 = *(int *)(param_1 + local_5c * 4 + 0x170);
      iVar4 = aiStack_4c[iVar12];
      aiStack_4c[iVar12] = uVar2 + iVar4;
      *puVar9 = (short)(uVar2 + iVar4);
      if (1 < iVar1) {
        iVar4 = 1;
LAB_001b6a3e:
        do {
          if ((int)uVar16 < 8) {
            iVar3 = FUN_001b5e98(&local_3c,iVar3,uVar16,0);
            if (iVar3 == 0) {
              return 0;
            }
            uVar17 = 1;
            iVar3 = local_34;
            uVar16 = local_30;
            if (7 < (int)local_30) goto LAB_001b6a42;
LAB_001b6b02:
            uVar10 = FUN_001b5f84(&local_3c,iVar3,uVar16,iVar15,uVar17);
            iVar3 = local_34;
            uVar16 = local_30;
            if ((int)uVar10 < 0) {
              return 0;
            }
          }
          else {
LAB_001b6a42:
            uVar10 = iVar3 >> (uVar16 - 8 & 0xff) & 0xff;
            iVar12 = *(int *)((uVar10 + 0x24) * 4 + iVar15);
            uVar17 = 9;
            if (iVar12 == 0) goto LAB_001b6b02;
            uVar10 = (uint)*(byte *)(iVar15 + uVar10 + 0x490);
            uVar16 = uVar16 - iVar12;
          }
          uVar2 = uVar10 & 0xf;
          if (uVar2 != 0) {
            if (((int)uVar16 < (int)uVar2) &&
               (iVar12 = FUN_001b5e98(&local_3c,iVar3,uVar16,uVar2), iVar3 = local_34,
               uVar16 = local_30, iVar12 == 0)) {
              return 0;
            }
            uVar16 = uVar16 - uVar2;
            uVar11 = *(uint *)(uVar2 * 4 + iVar14);
            uVar13 = iVar3 >> (uVar16 & 0xff) & uVar11;
            uVar11 = uVar13 - uVar11;
            if (*(int *)((uVar2 - 1) * 4 + iVar14) < (int)uVar13) {
              uVar11 = uVar13;
            }
            iVar12 = iVar4 + ((int)uVar10 >> 4);
            iVar4 = iVar12 + 1;
            puVar9[*(int *)(iVar12 * 4 + iVar7)] = (short)uVar11;
            if (iVar1 <= iVar4) break;
            goto LAB_001b6a3e;
          }
          if ((int)uVar10 >> 4 != 0xf) goto LAB_001b6a8c;
          iVar4 = iVar4 + 0x10;
        } while (iVar4 < iVar1);
        goto joined_r0x001b6b6e;
      }
    }
    else {
LAB_001b6970:
      uVar10 = iVar3 >> (uVar16 - 8 & 0xff) & 0xff;
      iVar1 = *(int *)((uVar10 + 0x24) * 4 + iVar15);
      uVar17 = 9;
      if (iVar1 == 0) goto LAB_001b6b40;
      uVar16 = uVar16 - iVar1;
      iVar1 = local_6c[0x14];
      uVar10 = (uint)*(byte *)(iVar15 + uVar10 + 0x490);
      iVar15 = local_6c[10];
      if (iVar1 != 0) goto LAB_001b69a8;
LAB_001b6b60:
      if (uVar10 != 0) {
        if (((int)uVar16 < (int)uVar10) &&
           (iVar1 = FUN_001b5e98(&local_3c,iVar3,uVar16,uVar10), iVar3 = local_34, uVar16 = local_30
           , iVar1 == 0)) {
          return 0;
        }
        uVar16 = uVar16 - uVar10;
        iVar4 = 1;
        goto joined_r0x001b6b6e;
      }
    }
    iVar4 = 1;
joined_r0x001b6b6e:
    do {
      if (iVar8 < iVar4) goto LAB_001b6a8c;
      if ((int)uVar16 < 8) {
        iVar3 = FUN_001b5e98(&local_3c,iVar3,uVar16,0);
        if (iVar3 == 0) {
          return 0;
        }
        uVar17 = 1;
        iVar3 = local_34;
        uVar16 = local_30;
        if (7 < (int)local_30) goto LAB_001b6b8e;
LAB_001b6bf0:
        uVar10 = FUN_001b5f84(&local_3c,iVar3,uVar16,iVar15,uVar17);
        iVar3 = local_34;
        uVar16 = local_30;
        if ((int)uVar10 < 0) {
          return 0;
        }
      }
      else {
LAB_001b6b8e:
        uVar10 = iVar3 >> (uVar16 - 8 & 0xff) & 0xff;
        iVar1 = *(int *)((uVar10 + 0x24) * 4 + iVar15);
        uVar17 = 9;
        if (iVar1 == 0) goto LAB_001b6bf0;
        uVar10 = (uint)*(byte *)(iVar15 + uVar10 + 0x490);
        uVar16 = uVar16 - iVar1;
      }
      uVar2 = uVar10 & 0xf;
      if (uVar2 == 0) {
        if ((int)uVar10 >> 4 != 0xf) goto LAB_001b6a8c;
        iVar4 = iVar4 + 0xf;
      }
      else {
        if (((int)uVar16 < (int)uVar2) &&
           (iVar1 = FUN_001b5e98(&local_3c,iVar3,uVar16,uVar2), iVar3 = local_34, uVar16 = local_30,
           iVar1 == 0)) {
          return 0;
        }
        iVar4 = iVar4 + ((int)uVar10 >> 4);
        uVar16 = uVar16 - uVar2;
      }
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_001b6ab2:
  *puVar18 = local_3c;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_38;
  *(int *)(iVar6 + 8) = iVar3;
  *(uint *)(iVar6 + 0xc) = uVar16;
  *(undefined4 *)(iVar6 + 0x10) = uVar5;
  *(int *)(iVar6 + 0x14) = aiStack_4c[0];
  *(int *)(iVar6 + 0x18) = aiStack_4c[1];
  *(int *)(iVar6 + 0x1c) = aiStack_4c[2];
  *(int *)(iVar6 + 0x20) = aiStack_4c[3];
LAB_001b6ad4:
  *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + -1;
  return 1;
LAB_001b6a8c:
  local_60 = local_60 + 1;
  local_5c = local_5c + 1;
  local_6c = local_6c + 1;
  if (*(int *)(param_1 + 0x16c) <= local_5c) goto LAB_001b6aac;
  goto LAB_001b6960;
LAB_001b6aac:
  puVar18 = *(undefined4 **)(param_1 + 0x18);
  goto LAB_001b6ab2;
}


