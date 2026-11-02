/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001854f0  Symbol: FUN_001854f0 */

int FUN_001854f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int *param_8)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  int local_24;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  iVar9 = DAT_001857c4 + 0x1854fe;
  if ((0x28 < param_5) &&
     (((param_2 == 0 || (-1 < *(int *)(param_2 + 0x168) << 0xc)) || (0x400 < param_5)))) {
    return 0x59;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  if (((param_7 == 0) && (param_6 == 0)) || (param_1 == 0)) {
    return 1;
  }
  piVar2 = (int *)FUN_0017c60c(param_6,param_7,0);
  if (piVar2 == (int *)0x0) {
    return 0x1b;
  }
  piVar2[1] = (int)piVar2;
  if (param_2 == 0) {
    piVar2[0x44] = 0;
    piVar2[0x1a] = 0;
    piVar2[0x18] = 2;
    piVar2[0x45] = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x114);
    iVar3 = *(int *)(param_2 + 0x60);
    piVar2[0x44] = *(int *)(param_2 + 0x110);
    iVar4 = *(int *)(param_2 + 0x68);
    piVar2[0x45] = iVar6;
    piVar2[0x18] = iVar3;
    piVar2[0x1a] = iVar4;
    iVar6 = *(int *)(param_2 + 0x48);
    iVar4 = *(int *)(param_2 + 0x4c);
    iVar3 = *(int *)(param_2 + 0x50);
    piVar2[0x11] = *(int *)(param_2 + 0x44);
    piVar2[0x12] = iVar6;
    piVar2[0x13] = iVar4;
    piVar2[0x14] = iVar3;
  }
  if (param_3 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *piVar2;
    *piVar2 = param_3;
    if (param_4 != 0) {
      piVar2[1] = param_4;
    }
  }
  FUN_0017c4fc(piVar2);
  iVar3 = FUN_0018a24c(iVar9 + DAT_001857c8);
  if (iVar3 == 0) {
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    FUN_00179908(piVar2);
    return 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + 0x5c) = 0x40;
  *(undefined4 *)(iVar3 + 0x2c) = uVar5;
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  FUN_0019d6dc();
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar5 = FUN_0019c904();
    *(undefined4 *)(iVar3 + 0x48) = uVar5;
  }
  iVar9 = FUN_0018c898(iVar3,0,iVar9 + DAT_001857cc,0);
  if (iVar9 == 0) {
    if (param_3 != 0) {
      *piVar2 = local_24;
    }
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    FUN_00179908(piVar2);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    FUN_0018ba54(iVar3);
    return 1;
  }
  FUN_0018c194(iVar3,iVar9);
  FUN_0017becc(piVar2,*(undefined4 *)(iVar3 + 0xc));
  piVar2[2] = param_1;
  *(int *)(iVar9 + 0x20) = param_1;
  if ((piVar2[0x49] == 0) && (*(int *)(piVar2[9] + 0x14) - *(int *)(piVar2[9] + 0x10) < 0xfa)) {
    FUN_0017c738(piVar2);
  }
  puVar7 = *(undefined **)(piVar2[9] + 0x10);
  if (3 < *(int *)(piVar2[9] + 0x14) - (int)puVar7) {
    local_1c = *puVar7;
    local_1b = *(undefined *)(*(int *)(piVar2[9] + 0x10) + 1);
    local_1a = *(undefined *)(*(int *)(piVar2[9] + 0x10) + 2);
    local_19 = *(undefined *)(*(int *)(piVar2[9] + 0x10) + 3);
    iVar9 = FUN_001a2fd8(&local_1c,4);
    if (iVar9 != 0) {
      FUN_00179fd4(piVar2,iVar9);
    }
  }
  pcVar8 = *(char **)(piVar2[9] + 0x10);
  if (((((*pcVar8 == '<') && (pcVar8[1] == '?')) && (pcVar8[2] == 'x')) &&
      ((pcVar8[3] == 'm' && (pcVar8[4] == 'l')))) &&
     ((cVar1 = pcVar8[5], (byte)(cVar1 - 9U) < 2 || ((cVar1 == ' ' || (cVar1 == '\r')))))) {
    FUN_0018113c(piVar2);
  }
  piVar2[0x2b] = 7;
  piVar2[0x3e] = param_5;
  FUN_00184ed0(piVar2);
  cVar1 = **(char **)(piVar2[9] + 0x10);
  if (cVar1 == '<') {
    if ((*(char **)(piVar2[9] + 0x10))[1] != '/') goto LAB_001856fe;
    uVar5 = 0x55;
  }
  else {
    if (cVar1 == '\0') goto LAB_00185708;
LAB_001856fe:
    uVar5 = 0x56;
  }
  FUN_0017b7fc(piVar2,uVar5,0);
LAB_00185708:
  if (piVar2[0xd] != *(int *)(iVar3 + 0xc)) {
    FUN_0017b7fc(piVar2,0x55,0);
  }
  if (piVar2[3] == 0) {
    iVar9 = piVar2[0x15];
    if (iVar9 == 0) {
      iVar9 = 1;
    }
  }
  else {
    if (param_8 != (int *)0x0) {
      iVar9 = *(int *)(*(int *)(iVar3 + 0xc) + 0xc);
      *param_8 = iVar9;
      for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x18)) {
        *(undefined4 *)(iVar9 + 0x14) = 0;
      }
      *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc) = 0;
    }
    iVar9 = 0;
  }
  *(int *)(param_2 + 0x1b8) = piVar2[0x6e] + *(int *)(param_2 + 0x1b8);
  iVar4 = piVar2[9];
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0x24) + *(int *)(param_2 + 0x1bc);
    *(int *)(param_2 + 0x1bc) = iVar6;
    *(int *)(param_2 + 0x1bc) = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) + iVar6;
  }
  if (piVar2[0x61] != 0) {
    FUN_001a4a00(piVar2 + 0x60,param_2 + 0x180);
  }
  if (param_3 != 0) {
    *piVar2 = local_24;
  }
  iVar4 = piVar2[0x13];
  iVar6 = piVar2[0x14];
  *(int *)(param_2 + 0x48) = piVar2[0x12];
  *(int *)(param_2 + 0x4c) = iVar4;
  *(int *)(param_2 + 0x50) = iVar6;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x14] = 0;
  FUN_00179908(piVar2);
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  FUN_0018ba54(iVar3);
  return iVar9;
}


