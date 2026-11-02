/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b60b4  Symbol: FUN_001b60b4 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001b60b4(int param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_70;
  uint local_6c;
  int aiStack_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 0x1d0);
  uVar9 = *(uint *)(param_1 + 0x1a4);
  iVar12 = DAT_001b629c + 0x1b60da;
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar8 + 0x28) != 0)) ||
     (iVar6 = FUN_001b6048(param_1), iVar6 != 0)) {
    if (*(int *)(iVar8 + 0x24) == 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x18);
      local_3c = *puVar7;
      local_38 = puVar7[1];
      local_70 = *(int *)(iVar8 + 8);
      local_6c = *(uint *)(iVar8 + 0xc);
      uVar5 = *(undefined4 *)(iVar8 + 0x10);
      aiStack_4c[0] = *(int *)(iVar8 + 0x14);
      aiStack_4c[1] = *(undefined4 *)(iVar8 + 0x18);
      aiStack_4c[2] = *(undefined4 *)(iVar8 + 0x1c);
      aiStack_4c[3] = *(undefined4 *)(iVar8 + 0x20);
      if (0 < *(int *)(param_1 + 0x16c)) {
        iVar6 = 0;
        iVar12 = iVar12 + DAT_001b62a0;
        iVar14 = 0;
        local_2c = param_1;
        do {
          iVar11 = *(int *)(param_1 + iVar6 + 0x170);
          puVar2 = *(undefined2 **)(param_2 + iVar6);
          iVar13 = *(int *)(iVar8 + (*(int *)(*(int *)(param_1 + (iVar11 + 0x54) * 4 + 4) + 0x14) +
                                    10) * 4 + 4);
          if ((int)local_6c < 8) {
            iVar4 = FUN_001b5e98(&local_3c,local_70,local_6c,0);
            if (iVar4 == 0) goto LAB_001b6276;
            local_70 = local_34;
            local_6c = local_30;
            if (7 < (int)local_30) goto LAB_001b61d0;
            uVar3 = FUN_001b5f84(&local_3c,local_34,local_30,iVar13,1);
            local_70 = local_34;
            local_6c = local_30;
joined_r0x001b6274:
            local_34 = local_70;
            local_30 = local_6c;
            if ((int)uVar3 < 0) goto LAB_001b6276;
          }
          else {
LAB_001b61d0:
            uVar3 = local_70 >> (local_6c - 8 & 0xff) & 0xff;
            iVar4 = *(int *)((uVar3 + 0x24) * 4 + iVar13);
            if (iVar4 == 0) {
              uVar3 = FUN_001b5f84(&local_3c,local_70,local_6c,iVar13,9);
              local_70 = local_34;
              local_6c = local_30;
              goto joined_r0x001b6274;
            }
            local_6c = local_6c - iVar4;
            uVar3 = (uint)*(byte *)(iVar13 + uVar3 + 0x490);
          }
          uVar1 = uVar3;
          if (uVar3 != 0) {
            if (((int)local_6c < (int)uVar3) &&
               (iVar13 = FUN_001b5e98(&local_3c,local_70,local_6c,uVar3), local_70 = local_34,
               local_6c = local_30, iVar13 == 0)) goto LAB_001b6276;
            local_6c = local_6c - uVar3;
            uVar1 = *(uint *)(uVar3 * 4 + iVar12);
            uVar10 = local_70 >> (local_6c & 0xff) & uVar1;
            uVar1 = uVar10 - uVar1;
            if (*(int *)((uVar3 - 1) * 4 + iVar12) < (int)uVar10) {
              uVar1 = uVar10;
            }
          }
          iVar6 = iVar6 + 4;
          iVar13 = aiStack_4c[iVar11];
          aiStack_4c[iVar11] = uVar1 + iVar13;
          *puVar2 = (short)(uVar1 + iVar13 << (uVar9 & 0xff));
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_1 + 0x16c));
        puVar7 = *(undefined4 **)(param_1 + 0x18);
      }
      *puVar7 = local_3c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_38;
      *(int *)(iVar8 + 8) = local_70;
      *(uint *)(iVar8 + 0xc) = local_6c;
      *(undefined4 *)(iVar8 + 0x10) = uVar5;
      *(int *)(iVar8 + 0x14) = aiStack_4c[0];
      *(int *)(iVar8 + 0x18) = aiStack_4c[1];
      *(int *)(iVar8 + 0x1c) = aiStack_4c[2];
      *(int *)(iVar8 + 0x20) = aiStack_4c[3];
    }
    uVar5 = 1;
    *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + -1;
  }
  else {
LAB_001b6276:
    uVar5 = 0;
  }
  return uVar5;
}


