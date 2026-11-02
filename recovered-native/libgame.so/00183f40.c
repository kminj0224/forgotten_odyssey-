/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183f40  Symbol: FUN_00183f40 */

int FUN_00183f40(int *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  int iStack_84;
  int iStack_80;
  int *local_7c;
  int iStack_78;
  int iStack_74;
  int local_6c;
  int iStack_68;
  int iStack_60;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int aiStack_1c [2];
  
  local_7c = (int *)param_1[0x4b];
  local_6c = param_1[0x4c];
  iVar19 = DAT_00184270 + 0x183f5c;
  iVar12 = param_1[0x52];
  iVar13 = param_1[9];
  if (**(char **)(iVar13 + 0x10) != '<') {
    FUN_001847a4();
  }
  *(int *)(iVar13 + 0x20) = *(int *)(iVar13 + 0x20) + 1;
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
  param_1[0x32] = param_1[0x32] + 1;
  if (**(char **)(param_1[9] + 0x10) == '\0') {
    FUN_0017a2bc(param_1[9],0xfa);
  }
  iVar13 = DAT_00184274;
  if (param_1[0x49] == 0) {
    iVar14 = param_1[9];
    if ((500 < *(int *)(iVar14 + 0x10) - *(int *)(iVar14 + 0xc)) &&
       (*(int *)(iVar14 + 0x14) - *(int *)(iVar14 + 0x10) <= DAT_00184278)) {
      FUN_0017cc50(param_1);
    }
  }
  iVar14 = param_1[9];
  iVar20 = *(int *)(iVar14 + 0xc);
  uVar15 = *(undefined4 *)(iVar14 + 0x1c);
  iVar21 = *(int *)(iVar14 + 0x10);
  uVar4 = *(undefined4 *)(iVar14 + 0x20);
  param_1[0x52] = iVar12;
  iVar12 = FUN_0017f794(param_1,aiStack_1c);
  if (iVar12 == 0) {
    FUN_0017bae0(param_1,0x44,iVar19 + DAT_0018427c);
    return 0;
  }
  iVar21 = iVar21 - iVar20;
  *param_4 = (*(int *)(param_1[9] + 0x10) - *(int *)(param_1[9] + 0xc)) - iVar21;
  FUN_0017ff44(param_1);
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  iVar14 = *(int *)(param_1[9] + 0xc);
  if (iVar14 == iVar20) {
    bVar3 = false;
    iVar5 = iVar19 + DAT_00184280;
    iStack_78 = 0;
    iStack_74 = 0;
    iStack_60 = 0;
LAB_0018441c:
    pbVar22 = *(byte **)(param_1[9] + 0x10);
    bVar2 = *pbVar22;
    if (((bVar2 != 0x3e) && ((bVar2 != 0x2f || (pbVar22[1] != 0x3e)))) &&
       (((byte)(bVar2 - 9) < 2 || ((bVar2 == 0xd || (0x1f < bVar2)))))) {
      iVar8 = *(int *)(param_1[9] + 0x24);
      iStack_28 = -1;
      iStack_2c = 0;
      iVar6 = FUN_00183d7c(param_1,aiStack_1c[0],iVar12,&iStack_20,&iStack_24,&iStack_28,&iStack_2c)
      ;
      iVar16 = *(int *)(param_1[9] + 0xc);
      if (iVar16 != iVar20) {
        if ((iStack_24 != 0) && (iStack_2c != 0)) {
          (***(code ***)(iVar19 + DAT_00184284))();
        }
        iStack_24 = 0;
        goto LAB_00184746;
      }
      if ((iVar6 != 0) && (iStack_24 != 0)) {
        if (iStack_28 < 0) {
          iStack_28 = FUN_0019c49c();
        }
        if ((iVar6 == param_1[0x4f]) && (iStack_20 == 0)) {
          pcVar9 = (char *)FUN_0019d178(param_1[0x4a],iStack_24,iStack_28);
          if (*pcVar9 == '\0') {
LAB_0018411e:
            iVar8 = -2;
            for (iVar16 = 1; iVar16 <= iStack_78; iVar16 = iVar16 + 1) {
              iVar17 = iVar8 + param_1[0x52];
              iVar8 = iVar8 + -2;
              if (*(int *)(iVar17 * 4 + param_1[0x54]) == 0) {
                FUN_0017bbac(param_1,0,iVar6);
                goto LAB_00184174;
              }
            }
            iVar6 = FUN_0017b48c(param_1,0,pcVar9);
            if (0 < iVar6) {
              iStack_78 = iStack_78 + 1;
            }
          }
          else {
            piVar7 = (int *)FUN_00193d0c();
            if (piVar7 == (int *)0x0) {
              FUN_0017bc54(param_1,99,iVar19 + DAT_00184288,pcVar9,0,0);
            }
            else {
              if (*piVar7 == 0) {
                FUN_0017dc98(param_1,iVar19 + DAT_0018428c,pcVar9);
              }
              FUN_001919b8(piVar7);
            }
            if (pcVar9 == (char *)param_1[0x50]) {
              iVar8 = DAT_00184290;
              if (iVar6 == param_1[0x4e]) goto LAB_00184174;
            }
            else if ((iStack_28 != 0x1d) ||
                    (iVar16 = FUN_0019c30c(pcVar9,iVar19 + DAT_00184294), iVar8 = DAT_00184298,
                    iVar16 == 0)) goto LAB_0018411e;
            FUN_0017bc54(param_1,200,iVar19 + iVar8,0,0,0);
          }
LAB_00184174:
          if (iStack_2c != 0) {
            (***(code ***)(iVar19 + DAT_00184284))(iStack_24);
          }
          FUN_0017ff44(param_1);
          goto LAB_0018441c;
        }
        if (iStack_20 != param_1[0x4f]) {
          if ((local_7c == (int *)0x0) || (local_6c <= iStack_74 + 4)) {
            iVar17 = FUN_0017b5d4(param_1,iStack_74 + 5);
            if (iVar17 < 0) goto LAB_00184362;
            local_6c = param_1[0x4c];
            local_7c = (int *)param_1[0x4b];
          }
          iVar17 = iStack_60 * 4;
          iStack_60 = iStack_60 + 1;
          *(int *)(iVar17 + param_1[0x55]) = iStack_2c;
          local_7c[iStack_74] = iVar6;
          local_7c[iStack_74 + 1] = iStack_20;
          local_7c[iStack_74 + 2] = 0;
          local_7c[iStack_74 + 3] = iStack_24;
          iStack_24 = iStack_24 + iStack_28;
          local_7c[iStack_74 + 4] = iStack_24;
          iStack_74 = iStack_74 + 5;
          if (iStack_2c != 0) {
            bVar3 = true;
          }
          goto LAB_00184372;
        }
        pcVar9 = (char *)FUN_0019d178(param_1[0x4a],iStack_24,iStack_28);
        if (iVar6 == param_1[0x4e]) {
          iVar8 = DAT_0018429c;
          if (pcVar9 != (char *)param_1[0x50]) {
LAB_001841ba:
            iVar6 = 0;
            goto LAB_001841c6;
          }
        }
        else {
          iVar8 = DAT_001842a0;
          if (((pcVar9 == (char *)param_1[0x50]) || (iVar8 = DAT_001842a4, iVar6 == param_1[0x4f]))
             || ((iStack_28 == 0x1d &&
                 (iVar16 = FUN_0019c30c(pcVar9,iVar19 + DAT_00184294), iVar8 = DAT_00184298,
                 iVar16 != 0)))) goto LAB_001841ba;
          iVar8 = iVar13;
          if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
            piVar7 = (int *)FUN_00193d0c(pcVar9);
            if (piVar7 == (int *)0x0) {
              FUN_0017bc54(param_1,99,iVar19 + DAT_001842a8,iVar6,pcVar9,0);
            }
            else {
              if ((param_1[0x43] != 0) && (*piVar7 == 0)) {
                FUN_0017dc98(param_1,iVar5,iVar6,pcVar9);
              }
              FUN_001919b8(piVar7);
            }
            iVar8 = -2;
            for (iVar16 = 1; iVar16 <= iStack_78; iVar16 = iVar16 + 1) {
              iVar17 = iVar8 + param_1[0x52];
              iVar8 = iVar8 + -2;
              if (*(int *)(iVar17 * 4 + param_1[0x54]) == iVar6) {
                FUN_0017bbac(param_1,iStack_20,iVar6);
                goto LAB_001842be;
              }
            }
            iVar6 = FUN_0017b48c(param_1,iVar6,pcVar9);
            if (0 < iVar6) {
              iStack_78 = iStack_78 + 1;
            }
            goto LAB_001842be;
          }
LAB_001841c6:
          FUN_0017bc54(param_1,200,iVar19 + iVar8,iVar6,0,0);
        }
LAB_001842be:
        if (iStack_2c != 0) {
          (***(code ***)(iVar19 + DAT_001845d0))(iStack_24);
        }
        FUN_0017ff44(param_1);
        if (*(int *)(param_1[9] + 0xc) != iVar14) goto LAB_00184746;
        goto LAB_0018441c;
      }
      if (iStack_24 != 0) {
LAB_00184362:
        if (*(char *)(iStack_24 + iStack_28) == '\0') {
          (***(code ***)(iVar19 + DAT_001845d0))();
        }
      }
LAB_00184372:
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_0017c738(param_1);
      }
      if (*(int *)(param_1[9] + 0xc) != iVar14) goto LAB_00184746;
      pcVar9 = *(char **)(param_1[9] + 0x10);
      cVar1 = *pcVar9;
      if ((cVar1 != '>') && ((cVar1 != '/' || (pcVar9[1] != '>')))) {
        if ((1 < (byte)(cVar1 - 9U)) && ((cVar1 != ' ' && (cVar1 != '\r')))) {
          FUN_0017bae0(param_1,0x41,iVar19 + DAT_001845d4);
          goto LAB_0018444e;
        }
        FUN_0017ff44(param_1);
        iVar17 = param_1[9];
        if ((((iVar8 != *(int *)(iVar17 + 0x24)) || (iVar6 != 0)) ||
            (pbVar22 != *(byte **)(iVar17 + 0x10))) || (iStack_24 != 0)) {
          if ((param_1[0x49] == 0) && (*(int *)(iVar17 + 0x14) - *(int *)(iVar17 + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
          }
          if (*(int *)(param_1[9] + 0xc) != iVar16) goto LAB_00184746;
          goto LAB_0018441c;
        }
        FUN_0017b7fc(param_1,1,iVar19 + DAT_001845d8);
      }
    }
LAB_0018444e:
    if ((param_1[0x57] != 0) &&
       (piVar7 = (int *)FUN_0018eb6c(param_1[0x57],iVar12,aiStack_1c[0]), piVar7 != (int *)0x0)) {
      iVar13 = iVar19 + DAT_001845dc;
      iStack_68 = 0;
      iStack_84 = 0;
      piVar10 = piVar7;
      goto LAB_001845a6;
    }
    iStack_84 = 0;
    goto LAB_001845ba;
  }
LAB_00184784:
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0xc) + iVar21;
  *(undefined4 *)(param_1[9] + 0x1c) = uVar15;
  *(undefined4 *)(param_1[9] + 0x20) = uVar4;
  if (param_1[3] == 1) {
    FUN_00183fa0();
  }
  return 0;
LAB_00184746:
  iVar12 = DAT_00184808;
  if (bVar3) {
    local_7c = local_7c + 3;
    for (iStack_78 = 0; iStack_78 < iStack_60; iStack_78 = iStack_78 + 1) {
      if ((*(int *)(iStack_78 * 4 + param_1[0x55]) != 0) && (*local_7c != 0)) {
        (***(code ***)(iVar19 + iVar12))();
      }
      local_7c = local_7c + 5;
    }
  }
  goto LAB_00184784;
LAB_001845a6:
  if (*piVar7 <= iStack_68) {
LAB_001845ba:
    iVar13 = iVar19 + DAT_001845e4;
    iVar14 = iVar19 + DAT_001845e8;
    iStack_80 = 0;
    piVar7 = local_7c;
    do {
      if (iStack_74 <= iStack_80) {
        iVar13 = FUN_0017ae38(param_1,aiStack_1c[0]);
        if ((iVar13 == 0) && (aiStack_1c[0] != 0)) {
          FUN_0017bc54(param_1,0xc9,iVar19 + DAT_00184804,aiStack_1c[0],iVar12,0);
        }
        *param_2 = aiStack_1c[0];
        *param_3 = iVar13;
        if (((*param_1 != 0) && (pcVar11 = *(code **)(*param_1 + 0x74), pcVar11 != (code *)0x0)) &&
           (iVar14 = param_1[0x35], iVar14 == 0)) {
          iVar20 = param_1[1];
          if (iStack_78 < 1) {
            iVar21 = iVar14;
            uVar4 = __divsi3(iStack_74,5,pcVar11,0,0,0);
          }
          else {
            iVar14 = (param_1[0x52] + iStack_78 * -2) * 4;
            iVar21 = param_1[0x54] + iVar14;
            uVar4 = __divsi3(iStack_74,5,iVar14,param_1 + 0x3f,iStack_78,iVar21);
            iVar14 = iStack_78;
          }
          (*pcVar11)(iVar20,iVar12,aiStack_1c[0],iVar13,iVar14,iVar21,uVar4,iStack_84,local_7c);
        }
        iVar13 = DAT_00184808;
        if (!bVar3) {
          return iVar12;
        }
        local_7c = local_7c + 3;
        for (iVar14 = 0; iVar14 < iStack_60; iVar14 = iVar14 + 1) {
          if ((*(int *)(iVar14 * 4 + param_1[0x55]) != 0) && (*local_7c != 0)) {
            (***(code ***)(iVar19 + iVar13))();
          }
          local_7c = local_7c + 5;
        }
        return iVar12;
      }
      iVar20 = 0;
      if (piVar7[1] != 0) {
        iVar20 = FUN_0017ae38(param_1);
        if (iVar20 == 0) {
          FUN_0017bc54(param_1,0xc9,iVar13,piVar7[1],*piVar7,iVar12);
        }
        piVar7[2] = iVar20;
      }
      piVar10 = local_7c;
      for (iVar21 = 0; iVar21 < iStack_80; iVar21 = iVar21 + 5) {
        iVar5 = *piVar7;
        if (iVar5 == *piVar10) {
          if (piVar7[1] == piVar10[1]) {
            FUN_0017bbac(param_1,piVar7[1],iVar5);
            break;
          }
          if ((iVar20 != 0) && (piVar10[2] == iVar20)) {
            FUN_0017bc54(param_1,0xcb,iVar14,iVar5,iVar20,0);
            break;
          }
        }
        piVar10 = piVar10 + 5;
      }
      piVar7 = piVar7 + 5;
      iStack_80 = iStack_80 + 5;
    } while( true );
  }
  iStack_20 = piVar10[3];
  iVar14 = piVar10[2];
  if ((iVar14 == param_1[0x4f]) && (iStack_20 == 0)) {
    iVar14 = -2;
    for (iVar20 = 1; iVar20 <= iStack_78; iVar20 = iVar20 + 1) {
      iVar21 = iVar14 + param_1[0x52];
      iVar14 = iVar14 + -2;
      if (*(int *)(iVar21 * 4 + param_1[0x54]) == 0) goto LAB_0018459e;
    }
    iVar14 = FUN_0017ae38(param_1,0);
    iVar20 = piVar10[4];
    if (iVar14 != iVar20) {
      iVar14 = 0;
LAB_001844e6:
      iVar14 = FUN_0017b48c(param_1,iVar14,iVar20);
      if (0 < iVar14) {
        iStack_78 = iStack_78 + 1;
      }
    }
  }
  else if (iStack_20 == param_1[0x4f]) {
    iVar20 = -2;
    for (iVar21 = 1; iVar21 <= iStack_78; iVar21 = iVar21 + 1) {
      iVar5 = iVar20 + param_1[0x52];
      iVar20 = iVar20 + -2;
      if (*(int *)(iVar5 * 4 + param_1[0x54]) == iVar14) goto LAB_0018459e;
    }
    iVar20 = FUN_0017ae38(param_1,iVar14);
    if (iVar20 != piVar7[4]) {
      iVar20 = piVar10[4];
      goto LAB_001844e6;
    }
  }
  else {
    piVar18 = local_7c;
    for (iVar20 = 0; iVar20 < iStack_74; iVar20 = iVar20 + 5) {
      if ((iVar14 == *piVar18) && (iStack_20 == piVar18[1])) goto LAB_0018459e;
      piVar18 = piVar18 + 5;
    }
    if ((local_7c == (int *)0x0) || (local_6c <= iStack_74 + 4)) {
      iVar20 = FUN_0017b5d4(param_1,iStack_74 + 5);
      if (iVar20 < 0) {
        iVar12 = FUN_001847a4();
        return iVar12;
      }
      local_6c = param_1[0x4c];
      local_7c = (int *)param_1[0x4b];
    }
    local_7c[iStack_74] = iVar14;
    local_7c[iStack_74 + 1] = iStack_20;
    if (iStack_20 == 0) {
      local_7c[iStack_74 + 2] = 0;
    }
    else {
      iVar20 = FUN_0017ae38(param_1);
      local_7c[iStack_74 + 2] = iVar20;
    }
    local_7c[iStack_74 + 3] = piVar10[4];
    iVar20 = iStack_74 + 4;
    iStack_74 = iStack_74 + 5;
    local_7c[iVar20] = piVar10[5];
    if ((param_1[7] == 1) && (piVar10[6] != 0)) {
      FUN_0017bb40(param_1,DAT_001845e0,iVar13,iVar14,iVar12);
    }
    iStack_84 = iStack_84 + 1;
  }
LAB_0018459e:
  piVar10 = piVar10 + 5;
  iStack_68 = iStack_68 + 1;
  goto LAB_001845a6;
}


