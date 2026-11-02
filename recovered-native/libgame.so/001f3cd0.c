/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f3cd0  Symbol: FUN_001f3cd0 */

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffac */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffa8 : 0x001f4004 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int ** FUN_001f3cd0(int **param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                   undefined4 param_6,int **param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_70;
  undefined4 *local_68;
  char local_54;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  int *piStack_2c;
  
  piVar1 = (int *)FUN_001f1db0(param_5 + 0x6c);
  iVar2 = FUN_001c60f4(DAT_001f439c + 0x1f3d0c);
  iVar10 = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar8 = *(int *)(iVar10 + iVar2 * 4);
  if (iVar8 == 0) {
    piVar6 = (int *)operator_new(0x70);
    *piVar6 = DAT_001f43a4 + 0x1f4264;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *(undefined *)(piVar6 + 4) = 0;
    piVar6[5] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    piVar6[0xc] = 0;
    piVar6[0xd] = 0;
    *(undefined *)(piVar6 + 0xe) = 0;
    *(undefined *)((int)piVar6 + 0x39) = 0;
    *(undefined *)((int)piVar6 + 0x3a) = 0;
    *(undefined *)((int)piVar6 + 0x3b) = 0;
    *(undefined *)(piVar6 + 0xf) = 0;
    *(undefined *)((int)piVar6 + 0x3d) = 0;
    *(undefined *)((int)piVar6 + 0x3e) = 0;
    *(undefined *)((int)piVar6 + 0x3f) = 0;
    *(undefined *)(piVar6 + 0x1b) = 0;
    FUN_001f2638(piVar6,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),piVar6,iVar2);
    iVar8 = *(int *)(iVar10 + iVar2 * 4);
  }
  piVar6 = *param_7;
  if (*piVar6 == *(int *)(iVar8 + 0x40)) {
    iVar2 = piVar6[-3];
    local_44 = *(undefined4 *)(iVar8 + 0x3c);
    local_68 = *(undefined4 **)(iVar8 + 0x2c);
    local_70 = *(uint *)(iVar8 + 0x30);
    if (iVar2 != 0) {
      piVar6 = piVar6 + 1;
    }
  }
  else {
    local_44 = *(undefined4 *)(iVar8 + 0x38);
    local_70 = *(uint *)(iVar8 + 0x28);
    iVar2 = piVar6[-3];
    local_68 = *(undefined4 **)(iVar8 + 0x24);
  }
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,4,piVar6,piVar6 + iVar2);
  iVar2 = iVar2 - (int)piVar6 >> 2;
  if (iVar2 != 0) {
    pvVar9 = *(void **)(DAT_001f43a0 + 0x1f3d90);
    local_40 = (int)pvVar9 + 0xc;
    FUN_00200268(&local_40,iVar2 << 1);
    iVar5 = *(int *)(iVar8 + 0x34);
    iVar10 = iVar2 - iVar5;
    if (0 < iVar10) {
      if (iVar5 < 0) {
        iVar10 = iVar2;
      }
      if (*(int *)(iVar8 + 0xc) == 0) {
        FUN_001ff8ac(&local_40,piVar6,iVar10);
        iVar5 = *(int *)(iVar8 + 0x34);
      }
      else {
        FUN_001ffa70(&local_40,0,*(undefined4 *)(local_40 + -0xc),iVar10 << 1,0);
        if (-1 < *(int *)(local_40 + -4)) {
          FUN_001fff60(&local_40);
        }
        iVar5 = FUN_001f3a68(local_40,*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 8),
                             *(undefined4 *)(iVar8 + 0xc),piVar6,piVar6 + iVar10);
        if (-1 < *(int *)(local_40 + -4)) {
          FUN_001fff60(&local_40);
        }
        uVar11 = iVar5 - local_40 >> 2;
        if (*(uint *)(local_40 + -0xc) < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_001c45d0(&UNK_001f4354 + DAT_001f43a8);
        }
        FUN_001ff6cc(&local_40,uVar11,*(uint *)(local_40 + -0xc) - uVar11,0);
        iVar5 = *(int *)(iVar8 + 0x34);
      }
    }
    if (0 < iVar5) {
      uVar3 = *(undefined4 *)(iVar8 + 0x14);
      iVar5 = *(int *)(local_40 + -0xc);
      uVar11 = iVar5 + 1;
      if ((*(uint *)(local_40 + -8) < uVar11) || (0 < *(int *)(local_40 + -4))) {
        FUN_00200268(&local_40,uVar11);
        iVar5 = *(int *)(local_40 + -0xc);
      }
      *(undefined4 *)(local_40 + iVar5 * 4) = uVar3;
      if ((void *)(local_40 + -0xc) != pvVar9) {
        *(undefined4 *)(local_40 + -4) = 0;
        *(uint *)(local_40 + -0xc) = uVar11;
        *(undefined4 *)(local_40 + uVar11 * 4) = 0;
      }
      if (iVar10 < 0) {
        FUN_00200358(&local_40,-iVar10,*(undefined4 *)(iVar8 + 0x44));
        FUN_00200474(&local_40,piVar6,iVar2);
      }
      else {
        FUN_00200474(&local_40,piVar6 + iVar10,*(undefined4 *)(iVar8 + 0x34));
      }
    }
    uVar7 = *(uint *)(param_5 + 0xc);
    uVar11 = uVar7 & 0x200;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar8 + 0x20);
    }
    uVar11 = local_70 + *(int *)(local_40 + -0xc) + uVar11;
    local_3c = (int)pvVar9 + 0xc;
    FUN_00200268(&local_3c,uVar11 * 2);
    uVar7 = uVar7 & 0xb0;
    uVar12 = *(uint *)(param_5 + 8);
    iVar2 = 0;
    do {
      switch(*(undefined *)((int)&local_44 + iVar2)) {
      case 0:
        if (uVar7 == 0x10 && uVar11 < uVar12) {
LAB_001f41b0:
          FUN_00200358(&local_3c,uVar12 - uVar11,param_6);
        }
        break;
      case 1:
        if (uVar7 == 0x10 && uVar11 < uVar12) goto LAB_001f41b0;
        iVar10 = *(int *)(local_3c + -0xc);
        uVar13 = iVar10 + 1;
        if ((*(uint *)(local_3c + -8) < uVar13) || (0 < *(int *)(local_3c + -4))) {
          FUN_00200268(&local_3c,uVar13);
          iVar10 = *(int *)(local_3c + -0xc);
        }
        *(undefined4 *)(local_3c + iVar10 * 4) = param_6;
        if ((void *)(local_3c + -0xc) != pvVar9) {
          *(undefined4 *)(local_3c + -4) = 0;
          *(uint *)(local_3c + -0xc) = uVar13;
          *(undefined4 *)(local_3c + uVar13 * 4) = 0;
        }
        break;
      case 2:
        if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
          FUN_00200474(&local_3c,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
        }
        break;
      case 3:
        if (local_70 != 0) {
          iVar10 = *(int *)(local_3c + -0xc);
          uVar3 = *local_68;
          uVar13 = iVar10 + 1;
          if ((*(uint *)(local_3c + -8) < uVar13) || (0 < *(int *)(local_3c + -4))) {
            FUN_00200268(&local_3c,uVar13);
            iVar10 = *(int *)(local_3c + -0xc);
          }
          *(undefined4 *)(local_3c + iVar10 * 4) = uVar3;
          if ((void *)(local_3c + -0xc) != pvVar9) {
            *(undefined4 *)(local_3c + -4) = 0;
            *(uint *)(local_3c + -0xc) = uVar13;
            *(undefined4 *)(local_3c + uVar13 * 4) = 0;
          }
        }
        break;
      case 4:
        FUN_002006c8(&local_3c,&local_40);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (1 < local_70) {
      FUN_00200474(&local_3c,local_68 + 1,local_70 - 1);
    }
    uVar11 = *(uint *)(local_3c + -0xc);
    if (uVar11 < uVar12) {
      if (uVar7 == 0x20) {
        FUN_00200358(&local_3c,uVar12 - uVar11,param_6);
        uVar11 = uVar12;
      }
      else {
        FUN_001ffa70(&local_3c,0,0,uVar12 - uVar11,param_6);
        uVar11 = uVar12;
      }
    }
    local_54 = (char)param_4;
    local_30 = param_3;
    piStack_2c = param_4;
    if ((local_54 == '\0') &&
       (uVar7 = (**(code **)(*param_3 + 0x30))(param_3,local_3c,uVar11), uVar11 != uVar7)) {
      local_54 = '\x01';
    }
    pvVar4 = (void *)(local_3c + -0xc);
    local_34 = CONCAT31((int3)((uint)piStack_2c >> 8),local_54);
    local_38 = param_3;
    if ((pvVar4 != pvVar9) && (iVar2 = FUN_0021100c(local_3c + -4,0xffffffff), iVar2 < 1)) {
      operator_delete(pvVar4);
    }
    pvVar4 = (void *)(local_40 + -0xc);
    if ((pvVar4 != pvVar9) && (iVar2 = FUN_0021100c(local_40 + -4,0xffffffff), iVar2 < 1)) {
      operator_delete(pvVar4);
    }
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined4 *)(param_5 + 8) = 0;
  return param_1;
}


