/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001df324  Symbol: FUN_001df324 */

int ** FUN_001df324(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_74;
  int local_6c;
  uint local_60;
  uint local_58;
  int *local_48;
  int *local_44;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  
  iVar12 = param_7 + 0x6c;
  local_48 = param_3;
  local_44 = param_4;
  iVar4 = FUN_001da5b8(iVar12);
  iVar5 = FUN_001c60f4(DAT_001dfe6c + 0x1df358);
  iVar15 = *(int *)(*(int *)(param_7 + 0x6c) + 0xc);
  iVar18 = *(int *)(iVar15 + iVar5 * 4);
  if (iVar18 == 0) {
    piVar8 = (int *)operator_new(0x44);
    *piVar8 = DAT_001dfe78 + 0x1dfcd4;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    *(undefined *)(piVar8 + 4) = 0;
    *(undefined *)((int)piVar8 + 0x11) = 0;
    *(undefined *)((int)piVar8 + 0x12) = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    piVar8[10] = 0;
    piVar8[0xb] = 0;
    *(undefined *)(piVar8 + 0xc) = 0;
    *(undefined *)((int)piVar8 + 0x31) = 0;
    *(undefined *)((int)piVar8 + 0x32) = 0;
    *(undefined *)((int)piVar8 + 0x33) = 0;
    *(undefined *)(piVar8 + 0xd) = 0;
    *(undefined *)((int)piVar8 + 0x35) = 0;
    *(undefined *)((int)piVar8 + 0x36) = 0;
    *(undefined *)((int)piVar8 + 0x37) = 0;
    *(undefined *)((int)piVar8 + 0x43) = 0;
    FUN_001db4f0(piVar8,iVar12);
    FUN_001c5f50(*(undefined4 *)(param_7 + 0x6c),piVar8,iVar5);
    iVar18 = *(int *)(iVar15 + iVar5 * 4);
  }
  uVar10 = *(uint *)(iVar18 + 0x20);
  if ((uVar10 != 0) && (uVar10 = *(uint *)(iVar18 + 0x28), uVar10 != 0)) {
    uVar10 = 1;
  }
  pcVar9 = *(char **)(DAT_001dfe70 + 0x1df3a4);
  local_34 = pcVar9 + 0xc;
  if (*(char *)(iVar18 + 0x10) != '\0') {
    FUN_001ee274(&local_34,0x20);
  }
  local_30 = pcVar9 + 0xc;
  FUN_001ee274(&local_30,0x20);
  local_2c = *(undefined4 *)(iVar18 + 0x34);
  uVar16 = 0;
  local_6c = 0;
  local_74 = 0;
  bVar2 = false;
  local_60 = 0;
  local_58 = 0;
  bVar3 = false;
  do {
    local_6c = local_6c + 1;
    switch(*(undefined *)((int)&local_2c + local_74)) {
    case 0:
LAB_001df930:
      uVar14 = 1;
      goto LAB_001df8b4;
    case 1:
      iVar5 = FUN_001df02c(&local_48);
      iVar12 = FUN_001df02c(&param_5);
      if ((iVar5 == iVar12) ||
         (iVar5 = FUN_001d8014(&local_48), (*(byte *)(*(int *)(iVar4 + 0x18) + iVar5) & 8) == 0)) {
        uVar14 = 0;
      }
      else {
        if (local_48 == (int *)0x0) goto LAB_001df930;
        if ((uint)local_48[2] < (uint)local_48[3]) {
          local_48[2] = local_48[2] + 1;
        }
        else {
          (**(code **)(*local_48 + 0x28))();
        }
        local_44 = (int *)0xffffffff;
        uVar14 = 1;
      }
LAB_001df8b4:
      if (local_74 == 3) goto LAB_001df64c;
      while( true ) {
        iVar5 = FUN_001df02c(&local_48);
        iVar12 = FUN_001df02c(&param_5);
        if ((iVar5 == iVar12) ||
           (iVar5 = FUN_001d8014(&local_48), (*(byte *)(*(int *)(iVar4 + 0x18) + iVar5) & 8) == 0))
        break;
        if (local_48 != (int *)0x0) {
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 1;
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
LAB_001df810:
        iVar12 = *(int *)(iVar18 + 0x18);
        iVar5 = 0;
        while( true ) {
          iVar15 = FUN_001df02c(&local_48);
          iVar7 = FUN_001df02c(&param_5);
          if (iVar15 == iVar7) break;
          if (iVar5 == iVar12) goto switchD_001df430_caseD_5;
          uVar14 = FUN_001d8014(&local_48);
          if (*(byte *)(*(int *)(iVar18 + 0x14) + iVar5) != uVar14) goto LAB_001df868;
          if (local_48 != (int *)0x0) {
            if ((uint)local_48[2] < (uint)local_48[3]) {
              local_48[2] = local_48[2] + 1;
            }
            else {
              (**(code **)(*local_48 + 0x28))();
            }
            local_44 = (int *)0xffffffff;
          }
          iVar5 = iVar5 + 1;
        }
        if (iVar5 == iVar12) {
          uVar14 = 1;
        }
        else {
LAB_001df868:
          if (iVar5 == 0) {
            uVar14 = (uint)((*(uint *)(param_7 + 0xc) & 0x200) == 0);
          }
          else {
            uVar14 = 0;
          }
        }
        break;
      }
      if (local_74 == 1) {
        if (((uVar10 != 0) || ((char)local_2c == '\x03')) || (local_2c._2_1_ == '\x01'))
        goto LAB_001df810;
        uVar14 = 1;
      }
      else {
        if (local_74 != 2) goto switchD_001df430_caseD_5;
        if ((local_2c._3_1_ == '\x04') || ((uVar10 != 0 && (local_2c._3_1_ == '\x03'))))
        goto LAB_001df810;
        uVar14 = 1;
      }
      goto LAB_001df638;
    case 3:
      if (*(int *)(iVar18 + 0x20) != 0) {
        iVar5 = FUN_001df02c(&local_48);
        iVar12 = FUN_001df02c(&param_5);
        if ((iVar5 != iVar12) &&
           (uVar14 = FUN_001d8014(&local_48), **(byte **)(iVar18 + 0x1c) == uVar14)) {
          local_60 = *(uint *)(iVar18 + 0x20);
          if (local_48 == (int *)0x0) goto switchD_001df430_caseD_5;
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 1;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
          }
          local_44 = (int *)0xffffffff;
          uVar14 = 1;
          break;
        }
      }
      if (*(int *)(iVar18 + 0x28) != 0) {
        iVar5 = FUN_001df02c(&local_48);
        iVar12 = FUN_001df02c(&param_5);
        if ((iVar5 != iVar12) &&
           (uVar14 = FUN_001d8014(&local_48), **(byte **)(iVar18 + 0x24) == uVar14)) {
          local_60 = *(uint *)(iVar18 + 0x28);
          if (local_48 == (int *)0x0) {
            uVar14 = 1;
            bVar3 = true;
          }
          else {
            if ((uint)local_48[2] < (uint)local_48[3]) {
              local_48[2] = local_48[2] + 1;
            }
            else {
              (**(code **)(*local_48 + 0x28))();
            }
            uVar14 = 1;
            local_44 = (int *)0xffffffff;
            bVar3 = true;
          }
          break;
        }
      }
      if ((*(int *)(iVar18 + 0x20) == 0) || (*(int *)(iVar18 + 0x28) != 0)) {
        uVar14 = 1 - uVar10;
        if (1 < uVar10) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 1;
        bVar3 = true;
      }
      break;
    case 4:
      while( true ) {
        iVar5 = FUN_001df02c(&local_48);
        iVar12 = FUN_001df02c(&param_5);
        if (iVar5 == iVar12) break;
        uVar14 = FUN_001d8014(&local_48);
        pvVar6 = memchr((void *)(iVar18 + 0x39),uVar14,10);
        if (pvVar6 == (void *)0x0) {
          if ((*(byte *)(iVar18 + 0x11) != uVar14) || (bVar2)) {
            if ((*(char *)(iVar18 + 0x10) == '\0') ||
               ((*(byte *)(iVar18 + 0x12) != uVar14 || (bVar2)))) break;
            if (uVar16 == 0) {
              uVar14 = 0;
              goto LAB_001df9fc;
            }
            iVar5 = *(int *)(local_34 + -0xc);
            uVar14 = iVar5 + 1;
            if ((*(uint *)(local_34 + -8) < uVar14) || (0 < *(int *)(local_34 + -4))) {
              FUN_001ee274(&local_34,uVar14);
              iVar5 = *(int *)(local_34 + -0xc);
            }
            local_34[iVar5] = (char)uVar16;
            if (local_34 + -0xc != pcVar9) {
              *(undefined4 *)(local_34 + -4) = 0;
              *(uint *)(local_34 + -0xc) = uVar14;
              local_34[uVar14] = '\0';
            }
            uVar17 = 0;
          }
          else {
            if (*(int *)(iVar18 + 0x2c) < 1) break;
            bVar2 = true;
            uVar17 = 0;
            local_58 = uVar16;
          }
        }
        else {
          iVar5 = *(int *)(local_30 + -0xc);
          uVar14 = iVar5 + 1;
          cVar1 = *(char *)((int)pvVar6 + (**(int **)(DAT_001dfe74 + 0x1df460) - (iVar18 + 0x38)));
          if ((*(uint *)(local_30 + -8) < uVar14) || (0 < *(int *)(local_30 + -4))) {
            FUN_001ee274(&local_30,uVar14);
            iVar5 = *(int *)(local_30 + -0xc);
          }
          local_30[iVar5] = cVar1;
          pcVar11 = local_30 + -0xc;
          bVar19 = pcVar11 != pcVar9;
          if (bVar19) {
            pcVar11 = (char *)0x0;
          }
          uVar17 = uVar16 + 1;
          if (bVar19) {
            *(char **)(local_30 + -4) = pcVar11;
            *(uint *)(local_30 + -0xc) = uVar14;
            local_30[uVar14] = (char)pcVar11;
          }
        }
        uVar16 = uVar17;
        if (local_48 != (int *)0x0) {
          if ((uint)local_48[2] < (uint)local_48[3]) {
            local_48[2] = local_48[2] + 1;
          }
          else {
            (**(code **)(*local_48 + 0x28))();
          }
          local_44 = (int *)0xffffffff;
        }
      }
      uVar14 = 1;
LAB_001df9fc:
      if (*(int *)(local_30 + -0xc) == 0) {
        uVar14 = 0;
      }
      break;
    default:
switchD_001df430_caseD_5:
      uVar14 = 1;
    }
    if (3 < local_6c) break;
LAB_001df638:
    local_74 = local_74 + 1;
  } while (uVar14 != 0);
LAB_001df64c:
  if (local_60 < 2) {
    if (uVar14 != 0) {
LAB_001df6a8:
      if ((1 < *(uint *)(local_30 + -0xc)) && (iVar4 = FUN_001ed15c(&local_30,0x30), iVar4 != 0)) {
        FUN_001ed6f8(&local_30);
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
      if (*(int *)(local_34 + -0xc) != 0) {
        if (!bVar2) {
          local_58 = uVar16;
        }
        FUN_001ee2f0(&local_34,local_58 & 0xff);
        iVar4 = FUN_00204bac(*(undefined4 *)(iVar18 + 8),*(undefined4 *)(iVar18 + 0xc),&local_34);
        if (iVar4 == 0) {
          *param_8 = *param_8 | 4;
        }
      }
      if ((!bVar2) || (*(uint *)(iVar18 + 0x2c) == uVar16)) {
        FUN_001ecd28(param_9,&local_30);
        goto LAB_001df790;
      }
    }
  }
  else if (uVar14 != 0) {
    uVar10 = 1;
    if (bVar3) {
      pbVar13 = *(byte **)(iVar18 + 0x24);
    }
    else {
      pbVar13 = *(byte **)(iVar18 + 0x1c);
    }
    while( true ) {
      iVar4 = FUN_001df02c(&local_48);
      iVar5 = FUN_001df02c(&param_5);
      if (iVar4 == iVar5) break;
      if (uVar10 == local_60) goto LAB_001df6a8;
      uVar14 = FUN_001d8014(&local_48);
      pbVar13 = pbVar13 + 1;
      if (uVar14 != *pbVar13) goto LAB_001df780;
      if (local_48 != (int *)0x0) {
        if ((uint)local_48[2] < (uint)local_48[3]) {
          local_48[2] = local_48[2] + 1;
          local_44 = (int *)0xffffffff;
        }
        else {
          (**(code **)(*local_48 + 0x28))();
          local_44 = (int *)0xffffffff;
        }
      }
      uVar10 = uVar10 + 1;
    }
    if (uVar10 == local_60) goto LAB_001df6a8;
  }
LAB_001df780:
  *param_8 = *param_8 | 4;
LAB_001df790:
  iVar4 = FUN_001df02c(&local_48);
  iVar5 = FUN_001df02c(&param_5);
  if (iVar4 == iVar5) {
    *param_8 = *param_8 | 2;
  }
  pcVar11 = local_30 + -0xc;
  *param_1 = local_48;
  param_1[1] = local_44;
  if ((pcVar11 != pcVar9) && (iVar4 = FUN_0021100c(local_30 + -4,0xffffffff), iVar4 < 1)) {
    operator_delete(pcVar11);
  }
  pcVar11 = local_34 + -0xc;
  if ((pcVar11 != pcVar9) && (iVar4 = FUN_0021100c(local_34 + -4,0xffffffff), iVar4 < 1)) {
    operator_delete(pcVar11);
  }
  return param_1;
}


