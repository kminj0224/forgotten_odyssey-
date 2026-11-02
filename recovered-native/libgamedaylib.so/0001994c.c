/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001994c  Symbol: FUN_0001994c */

int * FUN_0001994c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  pbVar4 = *(byte **)(param_1 + 0xc);
  uVar5 = (uint)*pbVar4;
  if (uVar5 - 0x30 < 10) {
    piVar8 = (int *)FUN_000188f4();
    return piVar8;
  }
  if (uVar5 - 0x61 < 0x1a) {
    piVar8 = (int *)FUN_000197d8();
    if (piVar8 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar8 == 0x2c) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(piVar8[1] + 8) + 7;
      return piVar8;
    }
    return piVar8;
  }
  if (uVar5 - 0x43 < 2) {
    piVar8 = *(int **)(param_1 + 0x2c);
    if ((piVar8 != (int *)0x0) && ((*piVar8 == 0 || (*piVar8 == 0x16)))) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + piVar8[2];
      uVar5 = (uint)*pbVar4;
    }
    if (uVar5 == 0x43) {
      bVar1 = pbVar4[1];
      if (bVar1 == 0x32) {
        iVar3 = 2;
      }
      else if (bVar1 == 0x33) {
        iVar3 = 3;
      }
      else {
        if (bVar1 != 0x31) {
          return (int *)0x0;
        }
        iVar3 = 1;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      *(byte **)(param_1 + 0xc) = pbVar4 + 2;
      if (iVar6 < *(int *)(param_1 + 0x18)) {
        piVar9 = (int *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc);
        *(int *)(param_1 + 0x14) = iVar6 + 1;
        if (piVar9 == (int *)0x0) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
        piVar9 = (int *)0x0;
      }
      if (piVar8 == (int *)0x0) {
        bVar2 = true;
      }
      if (!bVar2) {
        *piVar9 = 7;
        piVar9[1] = iVar3;
        piVar9[2] = (int)piVar8;
        return piVar9;
      }
    }
    else if (uVar5 == 0x44) {
      bVar1 = pbVar4[1];
      if (bVar1 == 0x31) {
        iVar3 = 2;
      }
      else if (bVar1 == 0x32) {
        iVar3 = 3;
      }
      else {
        if (bVar1 != 0x30) {
          return (int *)0x0;
        }
        iVar3 = 1;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      *(byte **)(param_1 + 0xc) = pbVar4 + 2;
      if (iVar6 < *(int *)(param_1 + 0x18)) {
        piVar9 = (int *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc);
        *(int *)(param_1 + 0x14) = iVar6 + 1;
        if (piVar9 == (int *)0x0) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
        piVar9 = (int *)0x0;
      }
      if (piVar8 == (int *)0x0) {
        bVar2 = true;
      }
      if (!bVar2) {
        *piVar9 = 8;
        piVar9[1] = iVar3;
        piVar9[2] = (int)piVar8;
        return piVar9;
      }
    }
    return (int *)0x0;
  }
  if (uVar5 == 0x4c) {
    *(byte **)(param_1 + 0xc) = pbVar4 + 1;
    piVar8 = (int *)FUN_000188f4();
    if (piVar8 == (int *)0x0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0xc) == '_') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      iVar3 = FUN_000181e8(param_1);
      if (iVar3 < 0) {
        return (int *)0x0;
      }
      return piVar8;
    }
    return piVar8;
  }
  if (uVar5 != 0x55) {
    return (int *)0x0;
  }
  if (pbVar4[1] == 0x6c) {
    *(byte **)(param_1 + 0xc) = pbVar4 + 1;
    if (pbVar4[1] != 0x6c) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0xc) = pbVar4 + 2;
    iVar3 = FUN_00019674();
    if (iVar3 == 0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0xc) != 'E') {
      return (int *)0x0;
    }
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    iVar6 = FUN_00018368(param_1);
    if (iVar6 < 0) {
      return (int *)0x0;
    }
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 < *(int *)(param_1 + 0x18)) {
      piVar8 = (int *)(*(int *)(param_1 + 0x10) + iVar7 * 0xc);
      *(int *)(param_1 + 0x14) = iVar7 + 1;
      if (piVar8 != (int *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7 * 0xc) = 0x3e;
        piVar8[1] = iVar3;
        piVar8[2] = iVar6;
      }
      goto LAB_00019a88;
    }
  }
  else {
    if (pbVar4[1] != 0x74) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0xc) = pbVar4 + 1;
    if (pbVar4[1] != 0x74) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0xc) = pbVar4 + 2;
    iVar3 = FUN_00018368();
    if (iVar3 < 0) {
      return (int *)0x0;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 < *(int *)(param_1 + 0x18)) {
      piVar8 = (int *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc);
      *(int *)(param_1 + 0x14) = iVar6 + 1;
      if (piVar8 != (int *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc) = 0x40;
        piVar8[1] = iVar3;
      }
      goto LAB_00019a88;
    }
  }
  piVar8 = (int *)0x0;
LAB_00019a88:
  iVar3 = FUN_00018a78(param_1,piVar8);
  if (iVar3 == 0) {
    piVar8 = (int *)0x0;
  }
  return piVar8;
}


