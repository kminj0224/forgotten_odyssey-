/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f766c  Symbol: FUN_001f766c */

int ** FUN_001f766c(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  wchar_t __c;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  int local_74;
  int local_6c;
  uint local_60;
  int local_58;
  int *local_48;
  int *local_44;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  
  iVar14 = param_7 + 0x6c;
  local_48 = param_3;
  local_44 = param_4;
  piVar4 = (int *)FUN_001f1db0(iVar14);
  iVar5 = FUN_001c60f4(DAT_001f8220 + 0x1f76a0);
  iVar16 = *(int *)(*(int *)(param_7 + 0x6c) + 0xc);
  iVar15 = *(int *)(iVar16 + iVar5 * 4);
  if (iVar15 == 0) {
    piVar10 = (int *)operator_new(0x70);
    *piVar10 = DAT_001f822c + 0x1f8074;
    piVar10[1] = 0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *(undefined *)(piVar10 + 4) = 0;
    piVar10[5] = 0;
    piVar10[6] = 0;
    piVar10[7] = 0;
    piVar10[8] = 0;
    piVar10[9] = 0;
    piVar10[10] = 0;
    piVar10[0xb] = 0;
    piVar10[0xc] = 0;
    piVar10[0xd] = 0;
    *(undefined *)(piVar10 + 0xe) = 0;
    *(undefined *)((int)piVar10 + 0x39) = 0;
    *(undefined *)((int)piVar10 + 0x3a) = 0;
    *(undefined *)((int)piVar10 + 0x3b) = 0;
    *(undefined *)(piVar10 + 0xf) = 0;
    *(undefined *)((int)piVar10 + 0x3d) = 0;
    *(undefined *)((int)piVar10 + 0x3e) = 0;
    *(undefined *)((int)piVar10 + 0x3f) = 0;
    *(undefined *)(piVar10 + 0x1b) = 0;
    FUN_001f2638(piVar10,iVar14);
    FUN_001c5f50(*(undefined4 *)(param_7 + 0x6c),piVar10,iVar5);
    iVar15 = *(int *)(iVar16 + iVar5 * 4);
  }
  uVar12 = *(uint *)(iVar15 + 0x28);
  if ((uVar12 != 0) && (uVar12 = *(uint *)(iVar15 + 0x30), uVar12 != 0)) {
    uVar12 = 1;
  }
  pcVar11 = *(char **)(DAT_001f8224 + 0x1f76ec);
  local_34 = pcVar11 + 0xc;
  if (*(char *)(iVar15 + 0x10) != '\0') {
    FUN_001ee274(&local_34,0x20);
  }
  local_30 = pcVar11 + 0xc;
  FUN_001ee274(&local_30,0x20);
  local_2c = *(undefined4 *)(iVar15 + 0x3c);
  iVar5 = 0;
  local_6c = 0;
  local_74 = 0;
  local_58 = 0;
  local_60 = 0;
  bVar3 = false;
  bVar2 = false;
  do {
    local_6c = local_6c + 1;
    switch(*(undefined *)((int)&local_2c + local_74)) {
    case 0:
LAB_001f7cd0:
      uVar17 = 1;
      goto LAB_001f7c40;
    case 1:
      iVar14 = FUN_001f67d0(&local_48);
      iVar16 = FUN_001f67d0(&param_5);
      if (iVar14 != iVar16) {
        uVar9 = FUN_001ef914(&local_48);
        iVar14 = (**(code **)(*piVar4 + 8))(piVar4,8,uVar9);
        if (iVar14 != 0) {
          if (local_48 == (int *)0x0) goto LAB_001f7cd0;
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 4;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
          }
          local_44 = (int *)0xffffffff;
          uVar17 = 1;
          goto LAB_001f7c40;
        }
      }
      uVar17 = 0;
LAB_001f7c40:
      if (local_74 == 3) goto LAB_001f7994;
      while( true ) {
        iVar14 = FUN_001f67d0(&local_48);
        iVar16 = FUN_001f67d0(&param_5);
        if (iVar14 == iVar16) break;
        uVar9 = FUN_001ef914(&local_48);
        iVar14 = (**(code **)(*piVar4 + 8))(piVar4,8,uVar9);
        if (iVar14 == 0) break;
        if (local_48 != (int *)0x0) {
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 4;
            local_44 = (int *)0xffffffff;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
            local_44 = (int *)0xffffffff;
          }
        }
      }
      break;
    case 2:
      if (((*(uint *)(param_7 + 0xc) & 0x200) != 0) || (local_74 == 0 || 1 < local_60)) {
LAB_001f7b9c:
        iVar16 = *(int *)(iVar15 + 0x20);
        iVar14 = 0;
        while( true ) {
          iVar7 = FUN_001f67d0(&local_48);
          iVar8 = FUN_001f67d0(&param_5);
          if (iVar7 == iVar8) break;
          if (iVar14 == iVar16) goto switchD_001f7778_caseD_5;
          iVar7 = FUN_001ef914(&local_48);
          if (iVar7 != *(int *)(*(int *)(iVar15 + 0x1c) + iVar14 * 4)) goto LAB_001f7bf4;
          if (local_48 != (int *)0x0) {
            if ((uint)local_48[2] < (uint)local_48[3]) {
              local_48[2] = local_48[2] + 4;
            }
            else {
              (**(code **)(*local_48 + 0x28))();
            }
            local_44 = (int *)0xffffffff;
          }
          iVar14 = iVar14 + 1;
        }
        if (iVar14 == iVar16) {
          uVar17 = 1;
        }
        else {
LAB_001f7bf4:
          if (iVar14 == 0) {
            uVar17 = (uint)((*(uint *)(param_7 + 0xc) & 0x200) == 0);
          }
          else {
            uVar17 = 0;
          }
        }
        break;
      }
      if (local_74 == 1) {
        if (((uVar12 != 0) || ((char)local_2c == '\x03')) || (local_2c._2_1_ == '\x01'))
        goto LAB_001f7b9c;
        uVar17 = 1;
      }
      else {
        if (local_74 != 2) goto switchD_001f7778_caseD_5;
        if ((local_2c._3_1_ == '\x04') || ((uVar12 != 0 && (local_2c._3_1_ == '\x03'))))
        goto LAB_001f7b9c;
        uVar17 = 1;
      }
      goto LAB_001f7980;
    case 3:
      if (*(int *)(iVar15 + 0x28) != 0) {
        iVar14 = FUN_001f67d0(&local_48);
        iVar16 = FUN_001f67d0(&param_5);
        if ((iVar14 != iVar16) &&
           (iVar14 = FUN_001ef914(&local_48), iVar14 == **(int **)(iVar15 + 0x24))) {
          local_60 = *(uint *)(iVar15 + 0x28);
          if (local_48 == (int *)0x0) goto switchD_001f7778_caseD_5;
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 4;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
          }
          local_44 = (int *)0xffffffff;
          uVar17 = 1;
          break;
        }
      }
      if (*(int *)(iVar15 + 0x30) != 0) {
        iVar14 = FUN_001f67d0(&local_48);
        iVar16 = FUN_001f67d0(&param_5);
        if ((iVar14 != iVar16) &&
           (iVar14 = FUN_001ef914(&local_48), iVar14 == **(int **)(iVar15 + 0x2c))) {
          local_60 = *(uint *)(iVar15 + 0x30);
          if (local_48 == (int *)0x0) {
            uVar17 = 1;
            bVar3 = true;
          }
          else {
            if ((uint)local_48[2] < (uint)local_48[3]) {
              local_48[2] = local_48[2] + 4;
            }
            else {
              (**(code **)(*local_48 + 0x28))();
            }
            uVar17 = 1;
            local_44 = (int *)0xffffffff;
            bVar3 = true;
          }
          break;
        }
      }
      if ((*(int *)(iVar15 + 0x28) == 0) || (*(int *)(iVar15 + 0x30) != 0)) {
        uVar17 = 1 - uVar12;
        if (1 < uVar12) {
          uVar17 = 0;
        }
      }
      else {
        uVar17 = 1;
        bVar3 = true;
      }
      break;
    case 4:
      while( true ) {
        iVar14 = FUN_001f67d0(&local_48);
        iVar16 = FUN_001f67d0(&param_5);
        if (iVar14 == iVar16) break;
        __c = FUN_001ef914(&local_48);
        pwVar6 = wmemchr((wchar_t *)(iVar15 + 0x44),__c,10);
        if (pwVar6 == (wchar_t *)0x0) {
          if ((__c != *(wchar_t *)(iVar15 + 0x14)) || (bVar2)) {
            if ((*(char *)(iVar15 + 0x10) == '\0') ||
               ((__c != *(wchar_t *)(iVar15 + 0x18) || (bVar2)))) break;
            if (iVar5 == 0) {
              uVar17 = 0;
              goto LAB_001f7db0;
            }
            iVar14 = *(int *)(local_34 + -0xc);
            uVar17 = iVar14 + 1;
            if ((*(uint *)(local_34 + -8) < uVar17) || (0 < *(int *)(local_34 + -4))) {
              FUN_001ee274(&local_34,uVar17);
              iVar14 = *(int *)(local_34 + -0xc);
            }
            local_34[iVar14] = (char)iVar5;
            if (local_34 + -0xc != pcVar11) {
              *(undefined4 *)(local_34 + -4) = 0;
              *(uint *)(local_34 + -0xc) = uVar17;
              local_34[uVar17] = '\0';
            }
            iVar14 = 0;
          }
          else {
            if (*(int *)(iVar15 + 0x34) < 1) break;
            bVar2 = true;
            iVar14 = 0;
            local_58 = iVar5;
          }
        }
        else {
          iVar14 = *(int *)(local_30 + -0xc);
          uVar17 = iVar14 + 1;
          cVar1 = *(char *)(**(int **)(DAT_001f8228 + 0x1f77a8) +
                           ((int)pwVar6 - (iVar15 + 0x40) >> 2));
          if ((*(uint *)(local_30 + -8) < uVar17) || (0 < *(int *)(local_30 + -4))) {
            FUN_001ee274(&local_30,uVar17);
            iVar14 = *(int *)(local_30 + -0xc);
          }
          local_30[iVar14] = cVar1;
          pcVar13 = local_30 + -0xc;
          bVar18 = pcVar13 != pcVar11;
          if (bVar18) {
            pcVar13 = (char *)0x0;
          }
          iVar14 = iVar5 + 1;
          if (bVar18) {
            *(char **)(local_30 + -4) = pcVar13;
            *(uint *)(local_30 + -0xc) = uVar17;
            local_30[uVar17] = (char)pcVar13;
          }
        }
        iVar5 = iVar14;
        if (local_48 != (int *)0x0) {
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 4;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
          }
          local_44 = (int *)0xffffffff;
        }
      }
      uVar17 = 1;
LAB_001f7db0:
      if (*(int *)(local_30 + -0xc) == 0) {
        uVar17 = 0;
      }
      break;
    default:
switchD_001f7778_caseD_5:
      uVar17 = 1;
    }
    if (3 < local_6c) break;
LAB_001f7980:
    local_74 = local_74 + 1;
  } while (uVar17 != 0);
LAB_001f7994:
  if (local_60 < 2) {
    if (uVar17 != 0) {
LAB_001f79f0:
      if ((1 < *(uint *)(local_30 + -0xc)) && (uVar12 = FUN_001ed15c(&local_30,0x30,0), uVar12 != 0)
         ) {
        uVar17 = *(uint *)(local_30 + -0xc);
        if (uVar12 == 0xffffffff) {
          uVar12 = uVar17 - 1;
        }
        if (uVar17 <= uVar12) {
          uVar12 = uVar17;
        }
        FUN_001ed6f8(&local_30,0,uVar12,0);
      }
      if (bVar3) {
        if (-1 < *(int *)(local_30 + -4)) {
          FUN_001edf6c(&local_30);
        }
        if (*local_30 != '0') {
          if (-1 < *(int *)(local_30 + -4)) {
            FUN_001edf6c(&local_30);
          }
          FUN_001eda94(&local_30,0,0,1,0x2d);
          *(undefined4 *)(local_30 + -4) = 0xffffffff;
        }
      }
      iVar14 = *(int *)(local_34 + -0xc);
      if (iVar14 != 0) {
        uVar12 = iVar14 + 1;
        if (!bVar2) {
          local_58._0_1_ = (char)iVar5;
        }
        if ((*(uint *)(local_34 + -8) < uVar12) || (0 < *(int *)(local_34 + -4))) {
          FUN_001ee274(&local_34,uVar12);
          iVar14 = *(int *)(local_34 + -0xc);
        }
        local_34[iVar14] = (char)local_58;
        if (local_34 + -0xc != pcVar11) {
          *(undefined4 *)(local_34 + -4) = 0;
          *(uint *)(local_34 + -0xc) = uVar12;
          local_34[uVar12] = '\0';
        }
        iVar14 = FUN_00204bac(*(undefined4 *)(iVar15 + 8),*(undefined4 *)(iVar15 + 0xc),&local_34);
        if (iVar14 == 0) {
          *param_8 = *param_8 | 4;
        }
      }
      if ((!bVar2) || (*(int *)(iVar15 + 0x34) == iVar5)) {
        FUN_001ecd28(param_9,&local_30);
        goto LAB_001f7b1c;
      }
    }
  }
  else if (uVar17 != 0) {
    uVar12 = 1;
    if (bVar3) {
      piVar4 = *(int **)(iVar15 + 0x2c);
    }
    else {
      piVar4 = *(int **)(iVar15 + 0x24);
    }
    while( true ) {
      iVar14 = FUN_001f67d0(&local_48);
      iVar16 = FUN_001f67d0(&param_5);
      if (iVar14 == iVar16) break;
      if (uVar12 == local_60) goto LAB_001f79f0;
      iVar14 = FUN_001ef914(&local_48);
      piVar4 = piVar4 + 1;
      if (iVar14 != *piVar4) goto LAB_001f7b0c;
      if (local_48 != (int *)0x0) {
        if ((uint)local_48[2] < (uint)local_48[3]) {
          local_48[2] = local_48[2] + 4;
          local_44 = (int *)0xffffffff;
        }
        else {
          (**(code **)(*local_48 + 0x28))();
          local_44 = (int *)0xffffffff;
        }
      }
      uVar12 = uVar12 + 1;
    }
    if (uVar12 == local_60) goto LAB_001f79f0;
  }
LAB_001f7b0c:
  *param_8 = *param_8 | 4;
LAB_001f7b1c:
  iVar5 = FUN_001f67d0(&local_48);
  iVar14 = FUN_001f67d0(&param_5);
  if (iVar5 == iVar14) {
    *param_8 = *param_8 | 2;
  }
  pcVar13 = local_30 + -0xc;
  *param_1 = local_48;
  param_1[1] = local_44;
  if ((pcVar13 != pcVar11) && (iVar5 = FUN_0021100c(local_30 + -4,0xffffffff), iVar5 < 1)) {
    operator_delete(pcVar13);
  }
  pcVar13 = local_34 + -0xc;
  if ((pcVar13 != pcVar11) && (iVar5 = FUN_0021100c(local_34 + -4,0xffffffff), iVar5 < 1)) {
    operator_delete(pcVar13);
  }
  return param_1;
}


