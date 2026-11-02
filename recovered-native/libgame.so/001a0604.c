/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0604  Symbol: FUN_001a0604 */

void FUN_001a0604(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_2c;
  int local_28;
  
  iVar11 = DAT_001a08e4 + 0x1a0610;
  if (param_2 == 0) {
    return;
  }
  iVar6 = *(int *)(param_2 + 4);
  if ((iVar6 == 0xd) || (iVar6 == 9)) {
    FUN_001a0bd4(param_1,param_2);
    return;
  }
  if (iVar6 == 0x13) {
    return;
  }
  if (iVar6 == 0x14) {
    return;
  }
  if (iVar6 == 0xe) {
    FUN_001a12c8();
    return;
  }
  if (iVar6 == 0xb) {
    FUN_001a0b58(param_1,*(undefined4 *)(param_2 + 0xc));
    return;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0xf) {
    FUN_00195318(*(undefined4 *)(iVar10 + 0x10));
    return;
  }
  if (iVar6 == 0x10) {
    FUN_00195068(*(undefined4 *)(iVar10 + 0x10));
    return;
  }
  if (iVar6 == 0x11) {
    FUN_001a1bb0(*(undefined4 *)(iVar10 + 0x10));
    return;
  }
  if (iVar6 == 3) {
    if (*(int *)(param_2 + 0x28) == 0) {
      return;
    }
    if ((*(int *)(param_2 + 8) != *(int *)(iVar11 + DAT_001a08e8)) &&
       (*(int *)(param_2 + 8) == *(int *)(iVar11 + DAT_001a08ec))) {
      FUN_00190a68(iVar10);
      return;
    }
    FUN_00190770(iVar10,*(int *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x74));
    return;
  }
  if (iVar6 != 7) {
    if (iVar6 == 8) {
      if (*(int *)(param_2 + 0x28) == 0) {
        return;
      }
      FUN_00190950(iVar10,4,iVar11 + DAT_001a08fc);
      FUN_00190a68(iVar10,*(undefined4 *)(param_2 + 0x28));
      iVar6 = DAT_001a0900;
LAB_001a096a:
      iVar11 = iVar11 + iVar6;
      uVar4 = 3;
      goto LAB_001a0b2a;
    }
    if (iVar6 == 5) {
      FUN_00190950(iVar10,1,iVar11 + DAT_001a0904);
      FUN_00190a68(iVar10,*(undefined4 *)(param_2 + 8));
      iVar6 = DAT_001a0908;
    }
    else {
      if (iVar6 == 4) {
        pcVar7 = *(char **)(param_2 + 0x28);
        if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
          uVar4 = 0xc;
          iVar11 = iVar11 + DAT_001a0914;
          goto LAB_001a0b2a;
        }
        iVar5 = iVar11 + DAT_001a090c;
        iVar6 = iVar11 + DAT_001a0910;
        pcVar8 = pcVar7;
        for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
          if (((*pcVar7 == ']') && (pcVar7[1] == ']')) && (pcVar9 = pcVar7 + 2, pcVar7[2] == '>')) {
            FUN_00190950(iVar10,9,iVar5);
            FUN_00190950(iVar10,(int)pcVar9 - (int)pcVar8,pcVar8);
            FUN_00190950(iVar10,3,iVar6);
            pcVar7 = pcVar9;
            pcVar8 = pcVar9;
          }
        }
        if (pcVar8 == pcVar7) {
          return;
        }
        FUN_00190950(iVar10,9,iVar11 + DAT_001a090c);
        FUN_00190a68(iVar10,pcVar8);
        iVar6 = DAT_001a0910;
        goto LAB_001a096a;
      }
      if (iVar6 == 2) {
        FUN_001a0368();
        return;
      }
      local_28 = *(int *)(param_1 + 0x28);
      if (local_28 == 1) {
        for (iVar6 = *(int *)(param_2 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x18)) {
          if ((*(int *)(iVar6 + 4) == 5) || (*(int *)(iVar6 + 4) == 3)) {
            local_28 = 0;
            break;
          }
        }
      }
      FUN_00190950(iVar10,1,iVar11 + DAT_001a0918);
      if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 0xc) != 0)) {
        FUN_00190a68(iVar10);
        FUN_00190950(iVar10,1,iVar11 + DAT_001a091c);
      }
      FUN_00190a68(iVar10,*(undefined4 *)(param_2 + 8));
      if (*(int *)(param_2 + 0x30) != 0) {
        FUN_0019fea8(iVar10);
      }
      iVar6 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar11 + DAT_001a0920);
      if (((iVar6 != 0) && (*(int *)(param_2 + 0x24) == 0)) && (*(int *)(param_2 + 0x30) == 0)) {
        FUN_00190a68(iVar10,iVar11 + DAT_001a0924);
      }
      if (*(int *)(param_2 + 0x2c) != 0) {
        FUN_001a03e4(param_1);
      }
      if (((*(int *)(param_2 + 4) == 1) && (*(int *)(param_2 + 0x14) != 0)) &&
         ((*(int *)(*(int *)(param_2 + 0x14) + 0x14) == *(int *)(param_2 + 0x20) &&
          ((iVar6 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar11 + DAT_001a0928), iVar6 != 0 &&
           (iVar6 = FUN_0019c30c(*(undefined4 *)(*(int *)(param_2 + 0x14) + 8),iVar11 + DAT_001a0920
                                ), iVar6 != 0)))))) {
        iVar5 = iVar11 + DAT_001a092c;
        iVar6 = iVar11 + DAT_001a0930;
        for (local_2c = *(int *)(param_2 + 0xc); local_2c != 0; local_2c = *(int *)(local_2c + 0x18)
            ) {
          iVar2 = FUN_0019c30c(*(undefined4 *)(local_2c + 8),iVar5);
          if ((iVar2 != 0) && (iVar2 = FUN_0018b744(local_2c,iVar6), iVar2 != 0)) {
            iVar3 = FUN_0019c398(iVar2,iVar11 + DAT_001a0934);
            if (iVar3 == 0) {
              (***(code ***)(iVar11 + DAT_001a0938))(iVar2);
              goto LAB_001a093c;
            }
            (***(code ***)(iVar11 + DAT_001a0938))(iVar2);
          }
        }
        bVar1 = true;
      }
      else {
LAB_001a093c:
        bVar1 = false;
      }
      if ((*(int *)(param_2 + 4) == 1) && (*(int *)(param_2 + 0xc) == 0)) {
        if (((*(int *)(param_2 + 0x24) == 0) || (*(int *)(*(int *)(param_2 + 0x24) + 0xc) == 0)) &&
           (iVar6 = FUN_0019fd2c(param_2), iVar6 == 1)) {
          iVar6 = DAT_001a0b34;
          if (!bVar1) goto LAB_001a096a;
LAB_001a0978:
          FUN_00190950(iVar10,1,iVar11 + DAT_001a0b38);
          if ((*(int *)(param_1 + 0x28) != 0) &&
             (FUN_00190950(iVar10,1,iVar11 + DAT_001a0b3c), **(int **)(iVar11 + DAT_001a0b40) != 0))
          {
            iVar6 = *(int *)(param_1 + 0x6c);
            if (*(int *)(param_1 + 0x24) < iVar6) {
              iVar6 = *(int *)(param_1 + 0x24) + 1;
            }
            FUN_00190950(iVar10,iVar6 * *(int *)(param_1 + 0x70),param_1 + 0x2c);
          }
          FUN_00190a68(iVar10,iVar11 + DAT_001a0b44);
          if (*(int *)(param_1 + 0x10) == 0) {
            FUN_00190950(iVar10,5,iVar11 + DAT_001a0b48);
          }
          else {
            FUN_00190a68(iVar10);
          }
          FUN_00190950(iVar10,4,iVar11 + DAT_001a0b4c);
          iVar5 = DAT_001a0b3c;
          if (*(int *)(param_1 + 0x28) == 0) goto LAB_001a0af0;
        }
        else {
          iVar5 = DAT_001a0b38;
          if (bVar1) goto LAB_001a0978;
        }
        iVar5 = iVar11 + iVar5;
        iVar6 = 1;
LAB_001a0aec:
        FUN_00190950(iVar10,iVar6,iVar5);
      }
      else {
        FUN_00190950(iVar10,1,iVar11 + DAT_001a0b38);
        if (bVar1) {
          if ((*(int *)(param_1 + 0x28) != 0) &&
             (FUN_00190950(iVar10,1,iVar11 + DAT_001a0b3c), **(int **)(iVar11 + DAT_001a0b40) != 0))
          {
            iVar6 = *(int *)(param_1 + 0x6c);
            if (*(int *)(param_1 + 0x24) < iVar6) {
              iVar6 = *(int *)(param_1 + 0x24) + 1;
            }
            FUN_00190950(iVar10,iVar6 * *(int *)(param_1 + 0x70),param_1 + 0x2c);
          }
          FUN_00190a68(iVar10,iVar11 + DAT_001a0b44);
          if (*(int *)(param_1 + 0x10) == 0) {
            FUN_00190950(iVar10,5,iVar11 + DAT_001a0b48);
          }
          else {
            FUN_00190a68(iVar10);
          }
          FUN_00190950(iVar10,4,iVar11 + DAT_001a0b4c);
        }
        if ((*(int *)(param_2 + 4) != 1) && (*(int *)(param_2 + 0x28) != 0)) {
          FUN_00190770(iVar10,*(int *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x74));
        }
        if (*(int *)(param_2 + 0xc) != 0) {
          uVar4 = *(undefined4 *)(param_1 + 0x28);
          if (local_28 != 0) {
            FUN_00190950(iVar10,1,iVar11 + DAT_001a0b3c);
          }
          if (-1 < *(int *)(param_1 + 0x24)) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          }
          *(int *)(param_1 + 0x28) = local_28;
          FUN_001a0b58(param_1,*(undefined4 *)(param_2 + 0xc));
          if (0 < *(int *)(param_1 + 0x24)) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          }
          *(undefined4 *)(param_1 + 0x28) = uVar4;
          if ((local_28 != 0) && (**(int **)(iVar11 + DAT_001a0b40) != 0)) {
            iVar6 = *(int *)(param_1 + 0x6c);
            if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x6c)) {
              iVar6 = *(int *)(param_1 + 0x24);
            }
            iVar5 = param_1 + 0x2c;
            iVar6 = iVar6 * *(int *)(param_1 + 0x70);
            goto LAB_001a0aec;
          }
        }
      }
LAB_001a0af0:
      FUN_00190950(iVar10,2,iVar11 + DAT_001a0b50);
      if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 0xc) != 0)) {
        FUN_00190a68(iVar10);
        FUN_00190950(iVar10,1,iVar11 + DAT_001a0b54);
      }
      FUN_00190a68(iVar10,*(undefined4 *)(param_2 + 8));
      iVar6 = DAT_001a0b38;
    }
    iVar11 = iVar11 + iVar6;
    uVar4 = 1;
    goto LAB_001a0b2a;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_00190950(iVar10,2,iVar11 + DAT_001a08f0);
    uVar4 = *(undefined4 *)(param_2 + 8);
LAB_001a06e2:
    FUN_00190a68(iVar10,uVar4);
  }
  else {
    FUN_00190950(iVar10,2,iVar11 + DAT_001a08f0);
    FUN_00190a68(iVar10,*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_2 + 0x28) != 0) {
      FUN_00190950(iVar10,1,iVar11 + DAT_001a08f4);
      uVar4 = *(undefined4 *)(param_2 + 0x28);
      goto LAB_001a06e2;
    }
  }
  uVar4 = 2;
  iVar11 = iVar11 + DAT_001a08f8;
LAB_001a0b2a:
  FUN_00190950(iVar10,uVar4,iVar11);
  return;
}


