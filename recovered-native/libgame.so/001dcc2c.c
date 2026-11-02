/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dcc2c  Symbol: FUN_001dcc2c */

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffac */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int ** FUN_001dcc2c(int **param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                   undefined param_6,byte **param_7)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  uint local_6c;
  undefined *local_60;
  undefined4 local_54;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  int *piStack_2c;
  
  iVar2 = FUN_001da5b8(param_5 + 0x6c);
  iVar3 = FUN_001c60f4(DAT_001dd274 + 0x1dcc6c);
  iVar13 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar10 = *(int *)(iVar13 + iVar3 * 4);
  if (iVar10 == 0) {
    piVar4 = (int *)operator_new(0x44);
    *piVar4 = DAT_001dd27c + 0x1dd168;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *(undefined *)(piVar4 + 4) = 0;
    *(undefined *)((int)piVar4 + 0x11) = 0;
    *(undefined *)((int)piVar4 + 0x12) = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    *(undefined *)(piVar4 + 0xc) = 0;
    *(undefined *)((int)piVar4 + 0x31) = 0;
    *(undefined *)((int)piVar4 + 0x32) = 0;
    *(undefined *)((int)piVar4 + 0x33) = 0;
    *(undefined *)(piVar4 + 0xd) = 0;
    *(undefined *)((int)piVar4 + 0x35) = 0;
    *(undefined *)((int)piVar4 + 0x36) = 0;
    *(undefined *)((int)piVar4 + 0x37) = 0;
    *(undefined *)((int)piVar4 + 0x43) = 0;
    FUN_001db4f0(piVar4,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar4,iVar3);
    iVar10 = *(int *)(iVar13 + iVar3 * 4);
  }
  pbVar7 = *param_7;
  local_54 = param_4;
  if (*pbVar7 == *(byte *)(iVar10 + 0x38)) {
    iVar3 = *(int *)(pbVar7 + -0xc);
    local_44 = *(undefined4 *)(iVar10 + 0x34);
    local_60 = *(undefined **)(iVar10 + 0x24);
    local_6c = *(uint *)(iVar10 + 0x28);
    if (iVar3 == 0) goto LAB_001dcce0;
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_44 = *(undefined4 *)(iVar10 + 0x30);
    iVar3 = *(int *)(pbVar7 + -0xc);
    local_6c = *(uint *)(iVar10 + 0x20);
    local_60 = *(undefined **)(iVar10 + 0x1c);
  }
  if ((pbVar7 < pbVar7 + iVar3) &&
     (pbVar6 = pbVar7, pbVar11 = pbVar7,
     (*(byte *)(*(int *)(iVar2 + 0x18) + (uint)*pbVar7) & 4) != 0)) {
    do {
      pbVar11 = pbVar11 + 1;
      if (pbVar11 == pbVar7 + iVar3) break;
      pbVar6 = pbVar6 + 1;
    } while ((*(byte *)(*(int *)(iVar2 + 0x18) + (uint)*pbVar6) & 4) != 0);
    iVar2 = (int)pbVar11 - (int)pbVar7;
    if (iVar2 != 0) {
      pvVar14 = *(void **)(DAT_001dd278 + 0x1dcd3c);
      local_40 = (int)pvVar14 + 0xc;
      FUN_001ee274(&local_40,iVar2 * 2);
      iVar13 = *(int *)(iVar10 + 0x2c);
      iVar3 = iVar2 - iVar13;
      if (0 < iVar3) {
        if (iVar13 < 0) {
          iVar3 = iVar2;
        }
        if (*(int *)(iVar10 + 0xc) == 0) {
          FUN_001ed8d0(&local_40,pbVar7,iVar3);
          iVar13 = *(int *)(iVar10 + 0x2c);
        }
        else {
          FUN_001eda94(&local_40,0,*(undefined4 *)(local_40 + -0xc),iVar3 << 1,0);
          if (-1 < *(int *)(local_40 + -4)) {
            FUN_001edf6c(&local_40);
          }
          iVar13 = FUN_001dc398(local_40,*(undefined *)(iVar10 + 0x12),*(undefined4 *)(iVar10 + 8),
                                *(undefined4 *)(iVar10 + 0xc),pbVar7,pbVar7 + iVar3);
          if (-1 < *(int *)(local_40 + -4)) {
            FUN_001edf6c(&local_40);
          }
          uVar5 = iVar13 - local_40;
          if (*(uint *)(local_40 + -0xc) < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_001c45d0(&UNK_001dd254 + DAT_001dd280);
          }
          FUN_001ed6f8(&local_40,uVar5,*(uint *)(local_40 + -0xc) - uVar5,0);
          iVar13 = *(int *)(iVar10 + 0x2c);
        }
      }
      if (0 < iVar13) {
        uVar1 = *(undefined *)(iVar10 + 0x11);
        iVar13 = *(int *)(local_40 + -0xc);
        uVar5 = iVar13 + 1;
        if ((*(uint *)(local_40 + -8) < uVar5) || (0 < *(int *)(local_40 + -4))) {
          FUN_001ee274(&local_40,uVar5);
          iVar13 = *(int *)(local_40 + -0xc);
        }
        *(undefined *)(local_40 + iVar13) = uVar1;
        if ((void *)(local_40 + -0xc) != pvVar14) {
          *(undefined4 *)(local_40 + -4) = 0;
          *(uint *)(local_40 + -0xc) = uVar5;
          *(undefined *)(local_40 + uVar5) = 0;
        }
        if (iVar3 < 0) {
          FUN_001ee368(&local_40,-iVar3,*(undefined *)(iVar10 + 0x39));
          FUN_001ee484(&local_40,pbVar7,iVar2);
        }
        else {
          FUN_001ee484(&local_40,pbVar7 + iVar3,*(undefined4 *)(iVar10 + 0x2c));
        }
      }
      uVar8 = *(uint *)(param_5 + 0xc);
      uVar5 = uVar8 & 0x200;
      if (uVar5 != 0) {
        uVar5 = *(uint *)(iVar10 + 0x18);
      }
      uVar5 = local_6c + *(int *)(local_40 + -0xc) + uVar5;
      local_3c = (int)pvVar14 + 0xc;
      FUN_001ee274(&local_3c,uVar5 * 2);
      uVar12 = *(uint *)(param_5 + 8);
      uVar8 = uVar8 & 0xb0;
      iVar2 = 0;
      do {
        switch(*(undefined *)((int)&local_44 + iVar2)) {
        case 0:
          if (uVar8 == 0x10 && uVar5 < uVar12) {
LAB_001dd0d4:
            FUN_001ee368(&local_3c,uVar12 - uVar5,param_6);
          }
          break;
        case 1:
          if (uVar8 == 0x10 && uVar5 < uVar12) goto LAB_001dd0d4;
          FUN_001ee2f0(&local_3c,param_6);
          break;
        case 2:
          if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
            FUN_001ee484(&local_3c,*(undefined4 *)(iVar10 + 0x14),*(undefined4 *)(iVar10 + 0x18));
          }
          break;
        case 3:
          if (local_6c != 0) {
            FUN_001ee2f0(&local_3c,*local_60);
          }
          break;
        case 4:
          FUN_001ee6cc(&local_3c,&local_40);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      if (1 < local_6c) {
        FUN_001ee484(&local_3c,local_60 + 1,local_6c - 1);
      }
      uVar5 = *(uint *)(local_3c + -0xc);
      if (uVar5 < uVar12) {
        if (uVar8 == 0x20) {
          FUN_001ee368(&local_3c,uVar12 - uVar5,param_6);
          uVar5 = uVar12;
        }
        else {
          FUN_001eda94(&local_3c,0,0,uVar12 - uVar5,param_6);
          uVar5 = uVar12;
        }
      }
      local_54._0_1_ = (char)param_4;
      local_30 = param_3;
      piStack_2c = param_4;
      if (((char)local_54 == '\0') &&
         (uVar8 = (**(code **)(*param_3 + 0x30))(param_3,local_3c,uVar5), uVar5 != uVar8)) {
        local_54._0_1_ = '\x01';
      }
      pvVar9 = (void *)(local_3c + -0xc);
      local_34 = CONCAT31((int3)((uint)piStack_2c >> 8),(char)local_54);
      local_38 = param_3;
      if ((pvVar9 != pvVar14) && (iVar2 = FUN_0021100c(local_3c + -4,0xffffffff), iVar2 < 1)) {
        operator_delete(pvVar9);
      }
      pvVar9 = (void *)(local_40 + -0xc);
      if ((pvVar9 != pvVar14) && (iVar2 = FUN_0021100c(local_40 + -4,0xffffffff), iVar2 < 1)) {
        operator_delete(pvVar9);
      }
    }
  }
LAB_001dcce0:
  *param_1 = param_3;
  param_1[1] = local_54;
  *(undefined4 *)(param_5 + 8) = 0;
  return param_1;
}


