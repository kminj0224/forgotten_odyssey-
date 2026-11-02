/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183fa0  Symbol: FUN_00183fa0 */

/* WARNING: Removing unreachable block (ram,0x00184356) */
/* WARNING: Removing unreachable block (ram,0x0018417a) */
/* WARNING: Removing unreachable block (ram,0x001842c4) */
/* WARNING: Removing unreachable block (ram,0x00184088) */
/* WARNING: Removing unreachable block (ram,0x0018474c) */
/* WARNING: Removing unreachable block (ram,0x0018477c) */
/* WARNING: Removing unreachable block (ram,0x0018475a) */
/* WARNING: Removing unreachable block (ram,0x00184766) */
/* WARNING: Removing unreachable block (ram,0x0018476c) */
/* WARNING: Removing unreachable block (ram,0x00184774) */
/* WARNING: Removing unreachable block (ram,0x00184714) */
/* WARNING: Removing unreachable block (ram,0x0018473e) */
/* WARNING: Removing unreachable block (ram,0x00184722) */
/* WARNING: Removing unreachable block (ram,0x0018472c) */
/* WARNING: Removing unreachable block (ram,0x00184732) */
/* WARNING: Removing unreachable block (ram,0x0018473a) */
/* WARNING: Removing unreachable block (ram,0x00184744) */

int FUN_00183fa0(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int param_12;
  int *param_13;
  int param_14;
  int param_15;
  int param_17;
  int param_18;
  int param_20;
  undefined4 param_24;
  int *param_27;
  int *param_28;
  int *param_29;
  int param_31;
  int param_33;
  int param_34;
  int param_35;
  int param_36;
  
  if (*(int *)(unaff_r5 + 0x28) == 0) {
    iVar11 = unaff_r4[9];
    if ((500 < *(int *)(iVar11 + 0x10) - *(int *)(iVar11 + 0xc)) &&
       (*(int *)(iVar11 + 0x14) - *(int *)(iVar11 + 0x10) <= DAT_00184278)) {
      FUN_0017cc50(unaff_r4);
    }
  }
  iVar11 = unaff_r4[9];
  iVar17 = *(int *)(iVar11 + 0xc);
  uVar12 = *(undefined4 *)(iVar11 + 0x1c);
  iVar18 = *(int *)(iVar11 + 0x10);
  uVar3 = *(undefined4 *)(iVar11 + 0x20);
  *(undefined4 *)(unaff_r5 + 0x4c) = param_24;
  iVar11 = FUN_0017f794(unaff_r4,&stack0x00000084);
  if (iVar11 == 0) {
    FUN_0017bae0(unaff_r4,0x44,unaff_r6 + DAT_0018427c);
  }
  else {
    iVar18 = iVar18 - iVar17;
    *param_29 = (*(int *)(unaff_r4[9] + 0x10) - *(int *)(unaff_r4[9] + 0xc)) - iVar18;
    FUN_0017ff44(unaff_r4);
    if ((*(int *)(unaff_r5 + 0x28) == 0) &&
       (*(int *)(unaff_r4[9] + 0x14) - *(int *)(unaff_r4[9] + 0x10) < 0xfa)) {
      FUN_0017c738(unaff_r4);
    }
    iVar13 = *(int *)(unaff_r4[9] + 0xc);
    if (iVar13 == iVar17) {
      iVar4 = unaff_r6 + DAT_00184280;
      param_14 = 0;
      param_15 = 0;
      param_20 = 0;
LAB_0018441c:
      pbVar19 = *(byte **)(unaff_r4[9] + 0x10);
      bVar2 = *pbVar19;
      if (((bVar2 != 0x3e) && ((bVar2 != 0x2f || (pbVar19[1] != 0x3e)))) &&
         (((byte)(bVar2 - 9) < 2 || ((bVar2 == 0xd || (0x1f < bVar2)))))) {
        iVar7 = *(int *)(unaff_r4[9] + 0x24);
        param_33 = -1;
        iVar5 = FUN_00183d7c(unaff_r4,param_36,iVar11,&stack0x00000080);
        iVar14 = *(int *)(unaff_r4[9] + 0xc);
        if (iVar14 != iVar17) goto LAB_00184784;
        if ((iVar5 != 0) && (param_34 != 0)) {
          param_33 = FUN_0019c49c();
          if ((iVar5 == *(int *)(unaff_r5 + 0x40)) && (param_35 == 0)) {
            pcVar8 = (char *)FUN_0019d178(*(undefined4 *)(unaff_r5 + 0x2c),param_34,param_33);
            if (*pcVar8 == '\0') {
LAB_0018411e:
              iVar7 = -2;
              for (iVar14 = 1; iVar14 <= param_14; iVar14 = iVar14 + 1) {
                iVar15 = iVar7 + *(int *)(unaff_r5 + 0x4c);
                iVar7 = iVar7 + -2;
                if (*(int *)(iVar15 * 4 + *(int *)(unaff_r5 + 0x54)) == 0) {
                  FUN_0017bbac(unaff_r4,0,iVar5);
                  goto LAB_00184174;
                }
              }
              iVar5 = FUN_0017b48c(unaff_r4,0,pcVar8);
              if (0 < iVar5) {
                param_14 = param_14 + 1;
              }
            }
            else {
              piVar6 = (int *)FUN_00193d0c();
              if (piVar6 == (int *)0x0) {
                FUN_0017bc54(unaff_r4,99,unaff_r6 + DAT_00184288,pcVar8);
              }
              else {
                if (*piVar6 == 0) {
                  FUN_0017dc98(unaff_r4,unaff_r6 + DAT_0018428c,pcVar8);
                }
                FUN_001919b8(piVar6);
              }
              if (pcVar8 == *(char **)(unaff_r5 + 0x44)) {
                iVar7 = DAT_00184290;
                if (iVar5 == *(int *)(unaff_r5 + 0x3c)) goto LAB_00184174;
              }
              else if ((param_33 != 0x1d) ||
                      (iVar14 = FUN_0019c30c(pcVar8,unaff_r6 + DAT_00184294), iVar7 = DAT_00184298,
                      iVar14 == 0)) goto LAB_0018411e;
              FUN_0017bc54(unaff_r4,200,unaff_r6 + iVar7);
            }
LAB_00184174:
            FUN_0017ff44(unaff_r4);
            goto LAB_0018441c;
          }
          if (param_35 != *(int *)(unaff_r5 + 0x40)) {
            if ((param_13 == (int *)0x0) || (param_17 <= param_15 + 4)) {
              iVar15 = FUN_0017b5d4(unaff_r4,param_15 + 5);
              if (iVar15 < 0) goto LAB_00184362;
              param_17 = *(int *)(unaff_r5 + 0x34);
              param_13 = *(int **)(unaff_r5 + 0x30);
            }
            iVar15 = param_20 * 4;
            param_20 = param_20 + 1;
            *(undefined4 *)(iVar15 + *(int *)(unaff_r5 + 0x58)) = 0;
            param_13[param_15] = iVar5;
            param_13[param_15 + 1] = param_35;
            param_13[param_15 + 2] = 0;
            param_13[param_15 + 3] = param_34;
            param_34 = param_34 + param_33;
            param_13[param_15 + 4] = param_34;
            param_15 = param_15 + 5;
            goto LAB_00184372;
          }
          pcVar8 = (char *)FUN_0019d178(*(undefined4 *)(unaff_r5 + 0x2c),param_34,param_33);
          if (iVar5 == *(int *)(unaff_r5 + 0x3c)) {
            iVar7 = DAT_0018429c;
            if (pcVar8 != *(char **)(unaff_r5 + 0x44)) {
LAB_001841ba:
              iVar5 = 0;
              iVar7 = unaff_r6 + iVar7;
              goto LAB_001841c6;
            }
          }
          else {
            iVar7 = DAT_001842a0;
            if (((pcVar8 == *(char **)(unaff_r5 + 0x44)) ||
                (iVar7 = DAT_001842a4, iVar5 == *(int *)(unaff_r5 + 0x40))) ||
               ((param_33 == 0x1d &&
                (iVar14 = FUN_0019c30c(pcVar8,unaff_r6 + DAT_00184294), iVar7 = DAT_00184298,
                iVar14 != 0)))) goto LAB_001841ba;
            iVar7 = param_31;
            if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
              piVar6 = (int *)FUN_00193d0c(pcVar8);
              if (piVar6 == (int *)0x0) {
                FUN_0017bc54(unaff_r4,99,unaff_r6 + DAT_001842a8,iVar5);
              }
              else {
                if ((*(int *)(unaff_r5 + 0x10) != 0) && (*piVar6 == 0)) {
                  FUN_0017dc98(unaff_r4,iVar4,iVar5,pcVar8);
                }
                FUN_001919b8(piVar6);
              }
              iVar7 = -2;
              for (iVar14 = 1; iVar14 <= param_14; iVar14 = iVar14 + 1) {
                iVar15 = iVar7 + *(int *)(unaff_r5 + 0x4c);
                iVar7 = iVar7 + -2;
                if (*(int *)(iVar15 * 4 + *(int *)(unaff_r5 + 0x54)) == iVar5) {
                  FUN_0017bbac(unaff_r4,param_35,iVar5);
                  goto LAB_001842be;
                }
              }
              iVar5 = FUN_0017b48c(unaff_r4,iVar5,pcVar8);
              if (0 < iVar5) {
                param_14 = param_14 + 1;
              }
              goto LAB_001842be;
            }
LAB_001841c6:
            FUN_0017bc54(unaff_r4,200,iVar7,iVar5);
          }
LAB_001842be:
          FUN_0017ff44(unaff_r4);
          if (*(int *)(unaff_r4[9] + 0xc) != iVar13) goto LAB_00184784;
          goto LAB_0018441c;
        }
        if (param_34 != 0) {
LAB_00184362:
          if (*(char *)(param_34 + param_33) == '\0') {
            (***(code ***)(unaff_r6 + DAT_001845d0))();
          }
        }
LAB_00184372:
        if ((*(int *)(unaff_r5 + 0x28) == 0) &&
           (*(int *)(unaff_r4[9] + 0x14) - *(int *)(unaff_r4[9] + 0x10) < 0xfa)) {
          FUN_0017c738(unaff_r4);
        }
        if (*(int *)(unaff_r4[9] + 0xc) != iVar13) goto LAB_00184784;
        pcVar8 = *(char **)(unaff_r4[9] + 0x10);
        cVar1 = *pcVar8;
        if ((cVar1 != '>') && ((cVar1 != '/' || (pcVar8[1] != '>')))) {
          if ((1 < (byte)(cVar1 - 9U)) && ((cVar1 != ' ' && (cVar1 != '\r')))) {
            FUN_0017bae0(unaff_r4,0x41,unaff_r6 + DAT_001845d4);
            goto LAB_0018444e;
          }
          FUN_0017ff44(unaff_r4);
          iVar15 = unaff_r4[9];
          if ((((iVar7 != *(int *)(iVar15 + 0x24)) || (iVar5 != 0)) ||
              (pbVar19 != *(byte **)(iVar15 + 0x10))) || (param_34 != 0)) {
            if ((*(int *)(unaff_r5 + 0x28) == 0) &&
               (*(int *)(iVar15 + 0x14) - *(int *)(iVar15 + 0x10) < 0xfa)) {
              FUN_0017c738(unaff_r4);
            }
            if (*(int *)(unaff_r4[9] + 0xc) != iVar14) goto LAB_00184784;
            goto LAB_0018441c;
          }
          FUN_0017b7fc(unaff_r4,1,unaff_r6 + DAT_001845d8);
        }
      }
LAB_0018444e:
      if ((unaff_r4[0x57] == 0) ||
         (piVar6 = (int *)FUN_0018eb6c(unaff_r4[0x57],iVar11,param_36), piVar6 == (int *)0x0))
      goto LAB_001845ba;
      iVar17 = unaff_r6 + DAT_001845dc;
      param_18 = 0;
      piVar9 = piVar6;
      goto LAB_001845a6;
    }
LAB_00184784:
    *(int *)(unaff_r4[9] + 0x10) = *(int *)(unaff_r4[9] + 0xc) + iVar18;
    *(undefined4 *)(unaff_r4[9] + 0x1c) = uVar12;
    *(undefined4 *)(unaff_r4[9] + 0x20) = uVar3;
    if (unaff_r4[3] == 1) {
      FUN_00183fa0();
    }
  }
  return 0;
LAB_001845a6:
  if (*piVar6 <= param_18) {
LAB_001845ba:
    iVar17 = unaff_r6 + DAT_001845e4;
    iVar18 = unaff_r6 + DAT_001845e8;
    param_12 = 0;
    piVar6 = param_13;
    do {
      if (param_15 <= param_12) {
        iVar17 = FUN_0017ae38(unaff_r4,param_36);
        if ((iVar17 == 0) && (param_36 != 0)) {
          FUN_0017bc54(unaff_r4,0xc9,unaff_r6 + DAT_00184804);
        }
        iVar18 = param_36;
        *param_27 = param_36;
        *param_28 = iVar17;
        if (*unaff_r4 == 0) {
          return iVar11;
        }
        pcVar10 = *(code **)(*unaff_r4 + 0x74);
        if (pcVar10 == (code *)0x0) {
          return iVar11;
        }
        if (unaff_r4[0x35] == 0) {
          iVar13 = unaff_r4[1];
          if (param_14 < 1) {
            __divsi3(param_15,5);
          }
          else {
            __divsi3(param_15,5);
          }
          (*pcVar10)(iVar13,iVar11,iVar18,iVar17);
          return iVar11;
        }
        return iVar11;
      }
      iVar13 = 0;
      if (piVar6[1] != 0) {
        iVar13 = FUN_0017ae38(unaff_r4);
        if (iVar13 == 0) {
          FUN_0017bc54(unaff_r4,0xc9,iVar17,piVar6[1]);
        }
        piVar6[2] = iVar13;
      }
      piVar9 = param_13;
      for (iVar4 = 0; iVar4 < param_12; iVar4 = iVar4 + 5) {
        if (*piVar6 == *piVar9) {
          if (piVar6[1] == piVar9[1]) {
            FUN_0017bbac(unaff_r4,piVar6[1],*piVar6);
            break;
          }
          if ((iVar13 != 0) && (piVar9[2] == iVar13)) {
            FUN_0017bc54(unaff_r4,0xcb,iVar18);
            break;
          }
        }
        piVar9 = piVar9 + 5;
      }
      piVar6 = piVar6 + 5;
      param_12 = param_12 + 5;
    } while( true );
  }
  param_35 = piVar9[3];
  iVar18 = piVar9[2];
  if ((iVar18 == unaff_r4[0x4f]) && (param_35 == 0)) {
    iVar18 = -2;
    for (iVar13 = 1; iVar13 <= param_14; iVar13 = iVar13 + 1) {
      iVar4 = iVar18 + unaff_r4[0x52];
      iVar18 = iVar18 + -2;
      if (*(int *)(iVar4 * 4 + unaff_r4[0x54]) == 0) goto LAB_0018459e;
    }
    iVar18 = FUN_0017ae38(unaff_r4,0);
    iVar13 = piVar9[4];
    if (iVar18 != iVar13) {
      iVar18 = 0;
LAB_001844e6:
      iVar18 = FUN_0017b48c(unaff_r4,iVar18,iVar13);
      if (0 < iVar18) {
        param_14 = param_14 + 1;
      }
    }
  }
  else if (param_35 == unaff_r4[0x4f]) {
    iVar13 = -2;
    for (iVar4 = 1; iVar4 <= param_14; iVar4 = iVar4 + 1) {
      iVar5 = iVar13 + unaff_r4[0x52];
      iVar13 = iVar13 + -2;
      if (*(int *)(iVar5 * 4 + unaff_r4[0x54]) == iVar18) goto LAB_0018459e;
    }
    iVar13 = FUN_0017ae38(unaff_r4,iVar18);
    if (iVar13 != piVar6[4]) {
      iVar13 = piVar9[4];
      goto LAB_001844e6;
    }
  }
  else {
    piVar16 = param_13;
    for (iVar13 = 0; iVar13 < param_15; iVar13 = iVar13 + 5) {
      if ((iVar18 == *piVar16) && (param_35 == piVar16[1])) goto LAB_0018459e;
      piVar16 = piVar16 + 5;
    }
    if ((param_13 == (int *)0x0) || (param_17 <= param_15 + 4)) {
      iVar13 = FUN_0017b5d4(unaff_r4,param_15 + 5);
      if (iVar13 < 0) {
        iVar11 = FUN_001847a4();
        return iVar11;
      }
      param_17 = unaff_r4[0x4c];
      param_13 = (int *)unaff_r4[0x4b];
    }
    param_13[param_15] = iVar18;
    param_13[param_15 + 1] = param_35;
    if (param_35 == 0) {
      param_13[param_15 + 2] = 0;
    }
    else {
      iVar13 = FUN_0017ae38(unaff_r4);
      param_13[param_15 + 2] = iVar13;
    }
    param_13[param_15 + 3] = piVar9[4];
    iVar13 = param_15 + 4;
    param_15 = param_15 + 5;
    param_13[iVar13] = piVar9[5];
    if ((unaff_r4[7] == 1) && (piVar9[6] != 0)) {
      FUN_0017bb40(unaff_r4,DAT_001845e0,iVar17,iVar18);
    }
  }
LAB_0018459e:
  piVar9 = piVar9 + 5;
  param_18 = param_18 + 1;
  goto LAB_001845a6;
}


