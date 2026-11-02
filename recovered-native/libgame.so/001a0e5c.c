/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0e5c  Symbol: FUN_001a0e5c */

void FUN_001a0e5c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  iVar1 = DAT_001a1144;
  iVar3 = DAT_001a1124 + 0x1a0e68;
  if (param_2 == 0) {
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0x13) {
    return;
  }
  if (iVar5 == 0x14) {
    return;
  }
  if ((iVar5 == 0xd) || (iVar5 == 9)) {
    FUN_001a0bd4(param_1,param_2);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 << 0x1b < 0) {
    FUN_001a0604(param_1,param_2);
    return;
  }
  if (((((iVar5 != 0x12) && (*(int *)(param_2 + 0x20) != 0)) &&
       (*(int *)(*(int *)(param_2 + 0x20) + 4) == 0xd)) && (-1 < iVar4 << 0x1a)) ||
     (iVar4 << 0x19 < 0)) {
    FUN_0019ffac(param_1,param_2);
    return;
  }
  if (iVar5 == 0xe) {
    FUN_001a12c8(param_1,param_2);
    return;
  }
  if (iVar5 == 0xb) {
    FUN_001a1244(param_1,*(undefined4 *)(param_2 + 0xc));
    return;
  }
  if (iVar5 == 0xf) {
    FUN_00195318(*(undefined4 *)(iVar9 + 0x10),param_2);
    return;
  }
  if (iVar5 == 0x10) {
    FUN_00195068(*(undefined4 *)(iVar9 + 0x10),param_2);
    return;
  }
  if (iVar5 == 0x11) {
    FUN_001a1bb0(*(undefined4 *)(iVar9 + 0x10),param_2);
    return;
  }
  if (iVar5 == 3) {
    if (*(int *)(param_2 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_2 + 8) != *(int *)(iVar3 + DAT_001a1128)) {
      FUN_00190770(iVar9,*(int *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x74));
      return;
    }
    FUN_00190a68(iVar9);
    return;
  }
  if (iVar5 != 7) {
    if (iVar5 == 8) {
      if (*(int *)(param_2 + 0x28) == 0) {
        return;
      }
      FUN_00190950(iVar9,4,iVar3 + DAT_001a1138);
      FUN_00190a68(iVar9,*(undefined4 *)(param_2 + 0x28));
      iVar1 = DAT_001a113c;
    }
    else {
      if (iVar5 == 5) {
        FUN_00190950(iVar9,1,iVar3 + DAT_001a1140);
        FUN_00190a68(iVar9,*(undefined4 *)(param_2 + 8));
        uVar2 = 1;
        iVar3 = iVar3 + iVar1;
        goto LAB_001a0f88;
      }
      if (iVar5 != 4) {
        if (iVar5 == 2) {
          FUN_001a0368(param_1,param_2);
          return;
        }
        if (iVar5 == 0x12) {
          FUN_0019fe28(iVar9,param_2);
          return;
        }
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 1) {
          for (iVar5 = *(int *)(param_2 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x18)) {
            if (*(int *)(iVar5 + 4) - 3U < 3) {
              *(undefined4 *)(param_1 + 0x28) = 0;
              break;
            }
          }
        }
        FUN_00190950(iVar9,1,iVar3 + DAT_001a1154);
        if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 0xc) != 0)) {
          FUN_00190a68(iVar9);
          FUN_00190950(iVar9,1,iVar3 + DAT_001a1158);
        }
        FUN_00190a68(iVar9,*(undefined4 *)(param_2 + 8));
        if (*(int *)(param_2 + 0x30) != 0) {
          FUN_0019fea8(iVar9);
        }
        for (iVar5 = *(int *)(param_2 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x18)) {
          FUN_001a0368(param_1,iVar5);
        }
        if (((*(int *)(param_2 + 4) == 1) || (*(int *)(param_2 + 0x28) == 0)) &&
           ((*(int *)(param_2 + 0xc) == 0 && (-1 < *(int *)(param_1 + 0x20) << 0x1d)))) {
          uVar2 = 2;
          iVar5 = DAT_001a115c;
        }
        else {
          FUN_00190950(iVar9,1,iVar3 + DAT_001a1230);
          if ((*(int *)(param_2 + 4) != 1) && (*(int *)(param_2 + 0x28) != 0)) {
            FUN_00190770(iVar9,*(int *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x74));
          }
          if (*(int *)(param_2 + 0xc) != 0) {
            if (*(int *)(param_1 + 0x28) != 0) {
              FUN_00190950(iVar9,1,iVar3 + DAT_001a1234);
            }
            if (-1 < *(int *)(param_1 + 0x24)) {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            }
            FUN_001a1244(param_1,*(undefined4 *)(param_2 + 0xc));
            if (0 < *(int *)(param_1 + 0x24)) {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
            }
            if ((**(int **)(iVar3 + DAT_001a1238) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
              iVar5 = *(int *)(param_1 + 0x6c);
              if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x6c)) {
                iVar5 = *(int *)(param_1 + 0x24);
              }
              FUN_00190950(iVar9,iVar5 * *(int *)(param_1 + 0x70),param_1 + 0x2c);
            }
          }
          FUN_00190950(iVar9,2,iVar3 + DAT_001a123c);
          if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 0xc) != 0)) {
            FUN_00190a68(iVar9);
            FUN_00190950(iVar9,1,iVar3 + DAT_001a1240);
          }
          FUN_00190a68(iVar9,*(undefined4 *)(param_2 + 8));
          uVar2 = 1;
          iVar5 = DAT_001a1230;
        }
        FUN_00190950(iVar9,uVar2,iVar3 + iVar5);
        *(int *)(param_1 + 0x28) = iVar1;
        return;
      }
      pcVar6 = *(char **)(param_2 + 0x28);
      if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
        uVar2 = 0xc;
        iVar3 = iVar3 + DAT_001a1150;
        goto LAB_001a0f88;
      }
      iVar1 = iVar3 + DAT_001a1148;
      iVar5 = iVar3 + DAT_001a114c;
      pcVar7 = pcVar6;
      for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
        if (((*pcVar6 == ']') && (pcVar6[1] == ']')) && (pcVar8 = pcVar6 + 2, pcVar6[2] == '>')) {
          FUN_00190950(iVar9,9,iVar5);
          FUN_00190950(iVar9,(int)pcVar8 - (int)pcVar7,pcVar7);
          FUN_00190950(iVar9,3,iVar1);
          pcVar6 = pcVar8;
          pcVar7 = pcVar8;
        }
      }
      if (pcVar7 == pcVar6) {
        return;
      }
      FUN_00190950(iVar9,9,iVar3 + DAT_001a114c);
      FUN_00190a68(iVar9,pcVar7);
      iVar1 = DAT_001a1148;
    }
    uVar2 = 3;
    iVar3 = iVar3 + iVar1;
    goto LAB_001a0f88;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_00190950(iVar9,2,iVar3 + DAT_001a112c);
    uVar2 = *(undefined4 *)(param_2 + 8);
LAB_001a0f78:
    FUN_00190a68(iVar9,uVar2);
  }
  else {
    FUN_00190950(iVar9,2,iVar3 + DAT_001a112c);
    FUN_00190a68(iVar9,*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_2 + 0x28) != 0) {
      FUN_00190950(iVar9,1,iVar3 + DAT_001a1130);
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      goto LAB_001a0f78;
    }
  }
  iVar3 = iVar3 + DAT_001a1134;
  uVar2 = 2;
LAB_001a0f88:
  FUN_00190950(iVar9,uVar2,iVar3);
  return;
}


