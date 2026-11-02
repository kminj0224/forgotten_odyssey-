/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001ad50  Symbol: FUN_0001ad50 */

int FUN_0001ad50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char **ppcVar11;
  
  pbVar6 = *(byte **)(param_1 + 0xc);
  uVar7 = (uint)*pbVar6;
  if (uVar7 == 0x4c) {
    iVar1 = FUN_0001ac34();
    return iVar1;
  }
  if (uVar7 == 0x54) {
    iVar1 = FUN_00018ae8();
    return iVar1;
  }
  if (uVar7 == 0x73) {
    if (pbVar6[1] == 0x72) {
      *(byte **)(param_1 + 0xc) = pbVar6 + 2;
      uVar3 = FUN_000192a8();
      uVar4 = FUN_0001a078(param_1);
      if (**(char **)(param_1 + 0xc) != 'I') {
        iVar1 = FUN_00018710(param_1,1,uVar3,uVar4);
        return iVar1;
      }
      uVar5 = FUN_0001b190(param_1);
      uVar4 = FUN_00018710(param_1,4,uVar4,uVar5);
      iVar1 = FUN_00018710(param_1,1,uVar3,uVar4);
      return iVar1;
    }
    if (pbVar6[1] == 0x70) {
      *(byte **)(param_1 + 0xc) = pbVar6 + 2;
      uVar3 = FUN_0001ad50();
      iVar1 = FUN_00018710(param_1,0x41,uVar3,0);
      return iVar1;
    }
  }
  else if (uVar7 == 0x66) {
    if (pbVar6[1] == 0x70) {
      *(byte **)(param_1 + 0xc) = pbVar6 + 2;
      iVar1 = FUN_00018a94();
      if (iVar1 < 0) {
        return 0;
      }
      iVar10 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar10) {
        return 0;
      }
      iVar9 = *(int *)(param_1 + 0x10) + iVar10 * 0xc;
      *(int *)(param_1 + 0x14) = iVar10 + 1;
      if (iVar9 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar10 * 0xc) = 6;
        *(int *)(iVar9 + 4) = iVar1;
        return iVar9;
      }
      return 0;
    }
  }
  else {
    if (uVar7 - 0x30 < 10) {
LAB_0001ad90:
      iVar1 = FUN_0001a078(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if (**(char **)(param_1 + 0xc) == 'I') {
        uVar3 = FUN_0001b190(param_1);
        iVar1 = FUN_00018710(param_1,4,iVar1,uVar3);
        return iVar1;
      }
      return iVar1;
    }
    if ((uVar7 == 0x6f) && (pbVar6[1] == 0x6e)) {
      *(byte **)(param_1 + 0xc) = pbVar6 + 2;
      goto LAB_0001ad90;
    }
  }
  piVar2 = (int *)FUN_00019f04(param_1);
  iVar1 = DAT_0001b180;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar10 = *piVar2;
  if (iVar10 == 0x2c) {
    ppcVar11 = (char **)piVar2[1];
    *(char **)(param_1 + 0x30) = ppcVar11[2] + *(int *)(param_1 + 0x30) + -2;
    iVar1 = strcmp(*ppcVar11,(char *)(iVar1 + 0x1aedc));
    if (iVar1 == 0) {
      uVar3 = FUN_000192a8(param_1);
      goto LAB_0001ae70;
    }
    pcVar8 = ppcVar11[3];
LAB_0001ae44:
    if (pcVar8 == (char *)0x2) {
      pcVar8 = *(char **)piVar2[1];
      uVar3 = FUN_0001ad50(param_1);
      iVar1 = strcmp(pcVar8,(char *)(DAT_0001b184 + 0x1af9c));
      if (iVar1 == 0) {
        uVar4 = FUN_0001b2c8(param_1);
      }
      else {
        iVar1 = strcmp(pcVar8,(char *)(DAT_0001b188 + 0x1afbc));
        if ((iVar1 == 0) || (iVar1 = strcmp(pcVar8,(char *)(DAT_0001b18c + 0x1afd4)), iVar1 == 0)) {
          uVar4 = FUN_0001a078(param_1);
          if (**(char **)(param_1 + 0xc) == 'I') {
            uVar5 = FUN_0001b190(param_1);
            uVar4 = FUN_00018710(param_1,4,uVar4,uVar5);
          }
        }
        else {
          uVar4 = FUN_0001ad50(param_1);
        }
      }
      uVar3 = FUN_00018710(param_1,0x31,uVar3,uVar4);
      iVar1 = FUN_00018710(param_1,0x30,piVar2,uVar3);
      return iVar1;
    }
    if (pcVar8 == (char *)0x3) {
      uVar3 = FUN_0001ad50(param_1);
      uVar4 = FUN_0001ad50(param_1);
      uVar5 = FUN_0001ad50(param_1);
      uVar4 = FUN_00018710(param_1,0x34,uVar4,uVar5);
      uVar3 = FUN_00018710(param_1,0x33,uVar3,uVar4);
      iVar1 = FUN_00018710(param_1,0x32,piVar2,uVar3);
      return iVar1;
    }
    if (pcVar8 != (char *)0x1) {
      return 0;
    }
    if (iVar10 == 0x2e) goto LAB_0001b0c4;
  }
  else {
    if (iVar10 == 0x2d) {
      pcVar8 = (char *)piVar2[1];
      goto LAB_0001ae44;
    }
    if (iVar10 != 0x2e) {
      if (iVar10 != 0x2c) {
        return 0;
      }
      pcVar8 = *(char **)(piVar2[1] + 0xc);
      goto LAB_0001ae44;
    }
LAB_0001b0c4:
    if (**(char **)(param_1 + 0xc) == '_') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      uVar3 = FUN_0001b2c8(param_1);
      goto LAB_0001ae70;
    }
  }
  uVar3 = FUN_0001ad50(param_1);
LAB_0001ae70:
  iVar1 = FUN_00018710(param_1,0x2f,piVar2,uVar3);
  return iVar1;
}


