/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188e0c  Symbol: FUN_00188e0c */

void FUN_00188e0c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  code **ppcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  
  iVar11 = DAT_001890a8;
  iVar7 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(iVar7 + 0x38);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
  iVar11 = iVar11 + 0x188e2a;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 3;
  *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
     (iVar7 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar7 < 1)) {
    FUN_0017c6c4(param_1);
  }
  FUN_0017ff44(param_1);
  iVar7 = *(int *)(param_1 + 0x24);
  pcVar8 = *(char **)(iVar7 + 0x10);
  if (*pcVar8 == 'I') {
    if (pcVar8[1] == 'N') {
      if ((((pcVar8[2] == 'C') && (pcVar8[3] == 'L')) && (pcVar8[4] == 'U')) &&
         ((pcVar8[5] == 'D' && (pcVar8[6] == 'E')))) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 7;
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 7;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 7;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar7 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar7 < 1)) {
          FUN_0017c6c4(param_1);
        }
        FUN_0017ff44(param_1);
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '[') {
          if (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != iVar4) {
            FUN_0017bb40(param_1,0x5a,iVar11 + DAT_001890ac,0,0);
          }
          FUN_0017a4a4(param_1);
        }
        else {
          FUN_0017b7fc(param_1,0x53,0);
        }
        if (**(int **)(iVar11 + DAT_001890b0) != 0) {
          iVar7 = *(int *)(param_1 + 0x24);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 0)) {
            (***(code ***)(iVar11 + DAT_001890b4))
                      (**(undefined4 **)(iVar11 + DAT_001890b8),iVar11 + DAT_001890bc,
                       *(int *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x1c));
          }
          (***(code ***)(iVar11 + DAT_001890b4))
                    (**(undefined4 **)(iVar11 + DAT_001890b8),iVar11 + DAT_001890c0);
        }
        do {
          pcVar8 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
          cVar1 = *pcVar8;
          if ((cVar1 == '\0') || (((cVar1 == ']' && (pcVar8[1] == ']')) && (pcVar8[2] == '>'))))
          goto LAB_00188fea;
          iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x24);
          if (((cVar1 == '<') && (pcVar8[1] == '!')) && (pcVar8[2] == '[')) {
            FUN_00188e0c(param_1);
          }
          else if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (cVar1 == '\r')) {
            FUN_0017a4a4(param_1);
          }
          else if (cVar1 == '%') {
            FUN_00181300(param_1);
          }
          else {
            FUN_001872c8(param_1);
          }
          while( true ) {
            pcVar5 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
            if ((*pcVar5 != '\0') || (*(int *)(param_1 + 0x28) < 2)) break;
            FUN_0017c6c4(param_1);
          }
        } while ((pcVar5 != pcVar8) || (iVar7 != *(int *)(*(int *)(param_1 + 0x24) + 0x24)));
        FUN_0017b7fc(param_1,0x3c,0);
LAB_00188fea:
        if (**(int **)(iVar11 + DAT_001890b0) == 0) goto LAB_0018921e;
        iVar7 = *(int *)(param_1 + 0x24);
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 0)) {
          (***(code ***)(iVar11 + DAT_001890b4))
                    (**(undefined4 **)(iVar11 + DAT_001890b8),iVar11 + DAT_001890bc,
                     *(int *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x1c));
        }
        ppcVar9 = *(code ***)(iVar11 + DAT_001890b4);
        uVar3 = **(undefined4 **)(iVar11 + DAT_001890b8);
        iVar7 = DAT_001890c4;
        goto LAB_0018920c;
      }
    }
    else if ((((pcVar8[1] == 'G') && (pcVar8[2] == 'N')) && (pcVar8[3] == 'O')) &&
            ((pcVar8[4] == 'R' && (pcVar8[5] == 'E')))) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 6;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
         (iVar7 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar7 < 1)) {
        FUN_0017c6c4(param_1);
      }
      FUN_0017ff44(param_1);
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '[') {
        if (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != iVar4) {
          FUN_0017bb40(param_1,0x5a,iVar11 + DAT_001892c4,0,0);
        }
        FUN_0017a4a4(param_1);
      }
      else {
        FUN_0017b7fc(param_1,0x53,0);
      }
      if (**(int **)(iVar11 + DAT_001892c8) != 0) {
        iVar7 = *(int *)(param_1 + 0x24);
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 0)) {
          (***(code ***)(iVar11 + DAT_001892cc))
                    (**(undefined4 **)(iVar11 + DAT_001892d0),iVar11 + DAT_001892d4,
                     *(int *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x1c));
        }
        (***(code ***)(iVar11 + DAT_001892cc))
                  (**(undefined4 **)(iVar11 + DAT_001892d0),iVar11 + DAT_001892d8);
      }
      uVar3 = *(undefined4 *)(param_1 + 0xd4);
      uVar12 = *(undefined4 *)(param_1 + 0xac);
      if (*(int *)(param_1 + 0x120) == 0) {
        *(undefined4 *)(param_1 + 0xd4) = 1;
      }
      *(undefined4 *)(param_1 + 0xac) = 0xf;
      iVar7 = 0;
      while( true ) {
        iVar2 = DAT_001892c8;
        iVar6 = *(int *)(param_1 + 0x24);
        pcVar8 = *(char **)(iVar6 + 0x10);
        cVar1 = *pcVar8;
        if (cVar1 == '\0') break;
        if (cVar1 == '<') {
          if ((pcVar8[1] != '!') || (pcVar8[2] != '[')) goto LAB_001891b8;
          iVar7 = iVar7 + 1;
LAB_00189178:
          *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 3;
          *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
          if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
            FUN_0017dd5c(param_1);
          }
          if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
             (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
            FUN_0017c6c4(param_1);
          }
        }
        else {
          if (((cVar1 == ']') && (pcVar8[1] == ']')) && (pcVar8[2] == '>')) {
            bVar13 = iVar7 != 0;
            iVar7 = iVar7 + -1;
            if (bVar13) goto LAB_00189178;
            break;
          }
LAB_001891b8:
          FUN_0017a4a4(param_1);
        }
      }
      *(undefined4 *)(param_1 + 0xd4) = uVar3;
      piVar10 = *(int **)(iVar11 + iVar2);
      *(undefined4 *)(param_1 + 0xac) = uVar12;
      if (*piVar10 == 0) goto LAB_0018921e;
      iVar7 = *(int *)(param_1 + 0x24);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 0)) {
        (***(code ***)(iVar11 + DAT_001892cc))
                  (**(undefined4 **)(iVar11 + DAT_001892d0),iVar11 + DAT_001892d4,
                   *(int *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x1c));
      }
      ppcVar9 = *(code ***)(iVar11 + DAT_001892cc);
      uVar3 = **(undefined4 **)(iVar11 + DAT_001892d0);
      iVar7 = DAT_001892dc;
LAB_0018920c:
      (**ppcVar9)(uVar3,iVar11 + iVar7);
      goto LAB_0018921e;
    }
  }
  FUN_0017b7fc(param_1,0x5f,0);
LAB_0018921e:
  iVar7 = *(int *)(param_1 + 0x24);
  pcVar8 = *(char **)(iVar7 + 0x10);
  if ((((*pcVar8 == '\0') && (*(int *)(param_1 + 0x124) == 0)) &&
      (500 < (int)pcVar8 - *(int *)(iVar7 + 0xc))) &&
     (*(int *)(iVar7 + 0x14) - (int)pcVar8 <= DAT_001892e0)) {
    FUN_0017cc50(param_1);
  }
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') {
    FUN_0017b7fc(param_1,0x3b);
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != iVar4) {
      FUN_0017bb40(param_1,0x5a,iVar11 + DAT_001892c4,0,0);
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 3;
    *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 3;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 3;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar11 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar11 < 1)) {
      FUN_0017c6c4(param_1);
    }
  }
  return;
}


