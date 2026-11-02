/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001843c  Symbol: FUN_0001843c */

int FUN_0001843c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  
  pcVar7 = *(char **)(param_1 + 0xc);
  if (*pcVar7 != 'S') {
    return 0;
  }
  *(char **)(param_1 + 0xc) = pcVar7 + 1;
  uVar3 = (uint)(byte)pcVar7[1];
  if (uVar3 == 0) {
LAB_0001853c:
    bVar15 = (*(uint *)(param_1 + 8) & 8) != 0;
    if (param_2 != 0 && !bVar15) {
      bVar15 = **(byte **)(param_1 + 0xc) - 0x43 < 2;
    }
    if (uVar3 == 0x74) {
      uVar12 = DAT_0001867c + 0x185d8;
    }
    else {
      uVar5 = DAT_00018678 + 0x18578;
      uVar8 = uVar5;
      uVar12 = uVar5;
      do {
        uVar8 = uVar8 + 0x1c;
        uVar12 = uVar12 + 0x1c;
        if (DAT_00018678 + 0x1863cU <= uVar12) {
          return 0;
        }
      } while (*(byte *)((uVar8 - uVar5) + DAT_00018678 + 0x18578) != uVar3);
    }
    iVar9 = *(int *)(uVar12 + 0x14);
    iVar6 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar9 != 0) {
      uVar11 = *(undefined4 *)(uVar12 + 0x18);
      if (iVar6 < iVar4) {
        iVar10 = *(int *)(param_1 + 0x10);
        iVar1 = iVar6 * 0xc;
        iVar13 = iVar10 + iVar1;
        if (iVar13 != 0) {
          iVar4 = 0x16;
        }
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x14) = iVar6;
        if (iVar13 != 0) {
          *(int *)(iVar13 + 4) = iVar9;
          *(undefined4 *)(iVar13 + 8) = uVar11;
          *(int *)(iVar10 + iVar1) = iVar4;
          iVar4 = *(int *)(param_1 + 0x18);
        }
      }
      else {
        iVar13 = 0;
      }
      *(int *)(param_1 + 0x2c) = iVar13;
    }
    if (bVar15) {
      uVar11 = *(undefined4 *)(uVar12 + 0xc);
      iVar9 = *(int *)(uVar12 + 0x10);
    }
    else {
      uVar11 = *(undefined4 *)(uVar12 + 4);
      iVar9 = *(int *)(uVar12 + 8);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar9;
    if (iVar4 <= iVar6) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x10) + iVar6 * 0xc;
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc) = 0x16;
      *(undefined4 *)(iVar4 + 4) = uVar11;
      *(int *)(iVar4 + 8) = iVar9;
      return iVar4;
    }
    return 0;
  }
  uVar8 = uVar3 - 0x30;
  uVar12 = uVar8 & 0xff;
  bVar15 = 0x5e < uVar3;
  bVar14 = uVar3 != 0x5f;
  if (bVar14) {
    bVar15 = 8 < uVar12;
  }
  bVar2 = uVar12 != 9;
  if (bVar15 && (bVar14 && bVar2)) {
    uVar12 = 0;
  }
  if (!bVar15 || (!bVar14 || !bVar2)) {
    uVar12 = 1;
  }
  *(char **)(param_1 + 0xc) = pcVar7 + 2;
  if (bVar15 && (bVar14 && bVar2)) {
    if (0x19 < uVar3 - 0x41) goto LAB_0001853c;
  }
  else {
    if (uVar3 == 0x5f) {
      uVar5 = 0;
      goto LAB_00018508;
    }
    uVar12 = 0;
  }
  do {
    iVar4 = -0x30;
    if ((9 < (uVar8 & 0xff)) && (iVar4 = -0x37, 0x19 < uVar3 - 0x41)) {
      return 0;
    }
    uVar5 = uVar3 + uVar12 * 0x24 + iVar4;
    if (uVar5 < uVar12) {
      return 0;
    }
    uVar3 = (uint)**(byte **)(param_1 + 0xc);
    uVar8 = uVar3 - 0x30;
    uVar12 = uVar5;
  } while ((uVar3 == 0) ||
          (*(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1, uVar3 != 0x5f));
  uVar5 = uVar5 + 1;
LAB_00018508:
  if (*(uint *)(param_1 + 0x20) <= uVar5) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return *(int *)(*(int *)(param_1 + 0x1c) + uVar5 * 4);
}


