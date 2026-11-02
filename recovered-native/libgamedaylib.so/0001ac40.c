/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001ac40  Symbol: FUN_0001ac40 */

undefined4 FUN_0001ac40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int *apiStack_1c [2];
  
  puVar6 = *(undefined **)(param_1 + 0xc);
  switch(*puVar6) {
  case 0x4c:
    goto LAB_0001ad10;
  case 0x4d:
    break;
  case 0x4e:
    *(undefined **)(param_1 + 0xc) = puVar6 + 1;
    piVar4 = (int *)FUN_00018264(param_1,apiStack_1c,1);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    pcVar7 = *(char **)(param_1 + 0xc);
    iVar3 = 0;
    cVar10 = *pcVar7;
    while (iVar8 = iVar3, cVar10 != '\0') {
LAB_0001ad88:
      do {
        bVar5 = cVar10 - 0x30;
        bVar12 = 8 < bVar5;
        bVar11 = bVar5 == 9;
        if (9 < bVar5) {
          bVar12 = 0x18 < (byte)(cVar10 + 0x9fU);
          bVar11 = (byte)(cVar10 + 0x9fU) == 0x19;
        }
        if (((!bVar12 || bVar11) || (cVar10 == 'C' || cVar10 == 'D')) ||
           (cVar10 == 'U' || cVar10 == 'L')) {
          iVar3 = FUN_0001994c(param_1);
LAB_0001aea4:
          if (iVar8 != 0) {
            uVar2 = 1;
            goto LAB_0001aeb4;
          }
        }
        else {
          if (cVar10 == 'S') {
            iVar3 = FUN_0001843c(param_1,1);
            goto LAB_0001aea4;
          }
          if (cVar10 != 'I') {
            if (cVar10 == 'T') {
              iVar3 = FUN_000183bc(param_1);
              goto LAB_0001aea4;
            }
            if (cVar10 == 'E') {
              *piVar4 = iVar8;
              if (iVar8 == 0) {
                return 0;
              }
              if (**(char **)(param_1 + 0xc) != 'E') {
                return 0;
              }
              *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
              return apiStack_1c[0];
            }
            if ((cVar10 != 'M') || (iVar8 == 0)) goto LAB_0001ae0c;
            *(char **)(param_1 + 0xc) = pcVar7 + 1;
            cVar10 = pcVar7[1];
            pcVar7 = pcVar7 + 1;
            if (cVar10 == '\0') goto LAB_0001ae0c;
            goto LAB_0001ad88;
          }
          if (iVar8 == 0) goto LAB_0001ae0c;
          iVar3 = FUN_0001aa64(param_1);
          uVar2 = 4;
LAB_0001aeb4:
          iVar3 = FUN_00017fe4(param_1,uVar2,iVar8,iVar3);
        }
        if (cVar10 == 'S') goto LAB_0001aef0;
        pcVar7 = *(char **)(param_1 + 0xc);
        cVar10 = *pcVar7;
        iVar8 = iVar3;
      } while (cVar10 == 'E');
      iVar8 = FUN_00018a78(param_1,iVar3);
      if (iVar8 == 0) break;
LAB_0001aef0:
      pcVar7 = *(char **)(param_1 + 0xc);
      cVar10 = *pcVar7;
    }
LAB_0001ae0c:
    *piVar4 = 0;
    return 0;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    break;
  case 0x53:
    cVar10 = puVar6[1];
    if (cVar10 == 't') {
      iVar3 = DAT_0001b0a8 + 0x1ae58;
      *(undefined **)(param_1 + 0xc) = puVar6 + 2;
      uVar2 = FUN_00018180(param_1,iVar3,3);
      uVar1 = FUN_0001994c(param_1);
      uVar2 = FUN_00017fe4(param_1,1,uVar2,uVar1);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 3;
    }
    else {
      uVar2 = FUN_0001843c(param_1,0);
    }
    if (**(char **)(param_1 + 0xc) != 'I') {
      return uVar2;
    }
    if ((cVar10 == 't') && (iVar3 = FUN_00018a78(param_1,uVar2), iVar3 == 0)) {
      return 0;
    }
    goto LAB_0001acec;
  case 0x54:
    break;
  case 0x55:
LAB_0001ad10:
    uVar2 = FUN_0001994c();
    return uVar2;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    break;
  case 0x59:
    break;
  case 0x5a:
    *(undefined **)(param_1 + 0xc) = puVar6 + 1;
    uVar2 = FUN_00019c9c(param_1,0);
    pcVar7 = *(char **)(param_1 + 0xc);
    if (*pcVar7 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0xc) = pcVar7 + 1;
    if (pcVar7[1] == 's') {
      *(char **)(param_1 + 0xc) = pcVar7 + 2;
      if (pcVar7[2] == '_') {
        *(char **)(param_1 + 0xc) = pcVar7 + 3;
        iVar3 = FUN_000181e8(param_1);
        if (iVar3 < 0) {
          return 0;
        }
      }
      FUN_00018180(param_1,DAT_0001b0ac + 0x1b010,0xe);
    }
    else {
      if (pcVar7[1] == 'd') {
        *(char **)(param_1 + 0xc) = pcVar7 + 2;
        iVar3 = FUN_00018368(param_1);
        if (iVar3 < 0) {
          return 0;
        }
      }
      else {
        iVar3 = -1;
      }
      piVar4 = (int *)FUN_0001ac40(param_1);
      if ((((piVar4 != (int *)0x0) && (*piVar4 != 0x3e)) && (*piVar4 != 0x40)) &&
         (**(char **)(param_1 + 0xc) == '_')) {
        *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
        iVar8 = FUN_000181e8(param_1);
        if (iVar8 < 0) {
          return 0;
        }
      }
      if ((iVar3 != -1) && (iVar8 = *(int *)(param_1 + 0x14), iVar8 < *(int *)(param_1 + 0x18))) {
        iVar9 = *(int *)(param_1 + 0x10) + iVar8 * 0xc;
        *(int *)(param_1 + 0x14) = iVar8 + 1;
        if (iVar9 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar8 * 0xc) = 0x3f;
          *(int **)(iVar9 + 4) = piVar4;
          *(int *)(iVar9 + 8) = iVar3;
        }
      }
    }
    uVar2 = FUN_00017fe4(param_1,2,uVar2);
    return uVar2;
  }
  uVar2 = FUN_0001994c();
  if (**(char **)(param_1 + 0xc) == 'I') {
    iVar3 = FUN_00018a78(param_1,uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
LAB_0001acec:
      uVar1 = FUN_0001aa64(param_1);
      uVar2 = FUN_00017fe4(param_1,4,uVar2,uVar1);
    }
  }
  return uVar2;
}


