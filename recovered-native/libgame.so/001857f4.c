/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001857f4  Symbol: FUN_001857f4 */

int FUN_001857f4(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  iVar10 = DAT_00185b08 + 0x185800;
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  if ((0x28 < (int)param_1[0x3e]) &&
     ((-1 < (int)(param_1[0x5a] << 0xc) || (0x400 < (int)param_1[0x3e])))) {
    return 0x59;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if ((param_3 == 0) && (param_2 == 0)) {
    return -1;
  }
  if (param_1[2] == 0) {
    return -1;
  }
  puVar2 = (undefined4 *)FUN_00179dd4();
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  puVar2[1] = puVar2;
  puVar2[0x44] = param_1[0x44];
  iVar3 = FUN_00190060(param_2,param_3,puVar2);
  if (iVar3 == 0) {
LAB_001858b0:
    FUN_00179908(puVar2);
    return -1;
  }
  piVar11 = puVar2 + 0x2d;
  FUN_0017bfa0(puVar2,iVar3);
  if (((*piVar11 == 0) && (iVar3 = FUN_0018f794(param_2), iVar3 != 0)) && (*piVar11 == 0)) {
    *piVar11 = iVar3;
  }
  uVar6 = *puVar2;
  *puVar2 = *param_1;
  FUN_0017c4fc(puVar2);
  iVar3 = FUN_0018a24c(iVar10 + DAT_00185b0c);
  if (iVar3 == 0) goto LAB_001858b0;
  *(undefined4 *)(iVar3 + 0x5c) = 0x40;
  if (*(int *)(param_1[2] + 0x50) != 0) {
    *(int *)(iVar3 + 0x50) = *(int *)(param_1[2] + 0x50);
    FUN_0019d6dc();
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1[2] + 0x2c);
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1[2] + 0x30);
  }
  if (*(int *)(param_1[2] + 0x48) != 0) {
    uVar4 = FUN_0019c904();
    *(undefined4 *)(iVar3 + 0x48) = uVar4;
  }
  iVar5 = FUN_0018c898(iVar3,0,iVar10 + DAT_00185b10,0);
  if (iVar5 == 0) {
    *puVar2 = uVar6;
    FUN_00179908(puVar2);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    FUN_0018ba54(iVar3);
    return -1;
  }
  FUN_0018c194(iVar3,iVar5);
  FUN_0017becc(puVar2,*(undefined4 *)(iVar3 + 0xc));
  if (param_1[2] == 0) {
    puVar2[2] = iVar3;
  }
  else {
    puVar2[2] = param_1[2];
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x20) = param_1[2];
  }
  if ((puVar2[0x49] == 0) && (*(int *)(puVar2[9] + 0x14) - *(int *)(puVar2[9] + 0x10) < 0xfa)) {
    FUN_0017c738(puVar2);
  }
  puVar7 = *(undefined **)(puVar2[9] + 0x10);
  if (3 < *(int *)(puVar2[9] + 0x14) - (int)puVar7) {
    local_1c = *puVar7;
    local_1b = *(undefined *)(*(int *)(puVar2[9] + 0x10) + 1);
    local_1a = *(undefined *)(*(int *)(puVar2[9] + 0x10) + 2);
    local_19 = *(undefined *)(*(int *)(puVar2[9] + 0x10) + 3);
    iVar5 = FUN_001a2fd8(&local_1c,4);
    if (iVar5 != 0) {
      FUN_00179fd4(puVar2,iVar5);
    }
  }
  pcVar8 = *(char **)(puVar2[9] + 0x10);
  if ((((*pcVar8 == '<') && (pcVar8[1] == '?')) &&
      ((pcVar8[2] == 'x' && ((pcVar8[3] == 'm' && (pcVar8[4] == 'l')))))) &&
     ((cVar1 = pcVar8[5], (byte)(cVar1 - 9U) < 2 || ((cVar1 == ' ' || (cVar1 == '\r')))))) {
    FUN_0018113c(puVar2);
    iVar12 = iVar10 + DAT_00185b0c;
    iVar5 = FUN_0019c30c(param_1[5],iVar12);
    if ((iVar5 != 0) && (iVar5 = FUN_0019c30c(*(undefined4 *)(puVar2[9] + 0x30),iVar12), iVar5 == 0)
       ) {
      FUN_0017bae0(puVar2,0x6d,iVar10 + DAT_00185b14);
    }
  }
  uVar4 = param_1[0x19];
  uVar13 = param_1[0x45];
  puVar2[0x2b] = 7;
  puVar2[0x19] = uVar4;
  iVar5 = param_1[0x3e];
  puVar2[0x45] = uVar13;
  iVar12 = param_1[0x1a];
  uVar4 = param_1[4];
  puVar2[0x1a] = iVar12;
  puVar2[0x3e] = iVar5 + 1;
  puVar2[4] = uVar4;
  if (iVar12 == 0) {
    puVar2[0x1c] = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[0x1d];
    puVar2[0x1c] = param_1[0x1c];
  }
  puVar2[0x1d] = uVar4;
  puVar2[0x21] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1e] = 0;
  if (puVar2[0x4a] != 0) {
    FUN_0019d610();
  }
  uVar4 = param_1[0x4a];
  puVar2[0x4a] = uVar4;
  uVar4 = FUN_0019d178(uVar4,iVar10 + DAT_00185b18,3);
  puVar2[0x4e] = uVar4;
  uVar4 = FUN_0019d178(puVar2[0x4a],iVar10 + DAT_00185b1c,5);
  puVar2[0x4f] = uVar4;
  uVar4 = FUN_0019d178(puVar2[0x4a],iVar10 + DAT_00185b20,0x24);
  puVar2[0x50] = uVar4;
  uVar13 = param_1[0x57];
  uVar9 = param_1[0x58];
  puVar2[0x5b] = param_1[0x5b];
  uVar4 = param_1[0x46];
  puVar2[0x57] = uVar13;
  puVar2[0x58] = uVar9;
  puVar2[0x46] = uVar4;
  FUN_00184ed0(puVar2);
  uVar4 = puVar2[0x19];
  param_1[0x1a] = puVar2[0x1a];
  param_1[0x19] = uVar4;
  cVar1 = **(char **)(puVar2[9] + 0x10);
  if (cVar1 == '<') {
    if ((*(char **)(puVar2[9] + 0x10))[1] != '/') goto LAB_00185aca;
    uVar4 = 0x55;
  }
  else {
    if (cVar1 == '\0') goto LAB_00185ad4;
LAB_00185aca:
    uVar4 = 0x56;
  }
  FUN_0017b7fc(puVar2,uVar4,0);
LAB_00185ad4:
  if (puVar2[0xd] != *(int *)(iVar3 + 0xc)) {
    FUN_0017b7fc(puVar2,0x55,0);
  }
  if (puVar2[3] == 0) {
    iVar10 = puVar2[0x15];
    if (iVar10 == 0) {
      iVar10 = 1;
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0xc) + 0xc);
      *param_4 = iVar10;
      for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x18)) {
        *(undefined4 *)(iVar10 + 0x14) = 0;
      }
      *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc) = 0;
    }
    iVar10 = 0;
  }
  *puVar2 = uVar6;
  puVar2[0x4a] = 0;
  puVar2[0x57] = 0;
  puVar2[0x58] = 0;
  FUN_00179908(puVar2);
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  FUN_0018ba54(iVar3);
  return iVar10;
}


