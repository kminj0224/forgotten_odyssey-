/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018502c  Symbol: FUN_0018502c */

int FUN_0018502c(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                int param_7)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  
  iVar6 = DAT_00185258 + 0x185038;
  if (0x28 < param_4) {
    return 0x59;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  if (param_5 == 0) {
    return -1;
  }
  uVar2 = FUN_0019c49c(param_5);
  piVar3 = (int *)FUN_0017c008(param_5,uVar2);
  if (piVar3 == (int *)0x0) {
    return -1;
  }
  piVar3[1] = (int)piVar3;
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *piVar3;
    *piVar3 = param_2;
    if (param_3 != 0) {
      piVar3[1] = param_3;
    }
  }
  iVar4 = FUN_0018a24c(iVar6 + DAT_0018525c);
  if (iVar4 == 0) {
    FUN_00179908(piVar3);
    return -1;
  }
  *(undefined4 *)(iVar4 + 0x5c) = 0x40;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    FUN_0017b200(piVar3,0x1000,0);
    if (param_1 != 0) goto LAB_00185108;
  }
  else {
    FUN_0019d610(piVar3[0x4a]);
    piVar3[0x4a] = *(int *)(param_1 + 0x50);
    FUN_0019d6dc();
    iVar5 = FUN_0019d178(piVar3[0x4a],iVar6 + DAT_00185260,3);
    piVar3[0x4e] = iVar5;
    iVar5 = FUN_0019d178(piVar3[0x4a],iVar6 + DAT_00185264,5);
    piVar3[0x4f] = iVar5;
    iVar5 = FUN_0019d178(piVar3[0x4a],iVar6 + DAT_00185268,0x24);
    piVar3[0x50] = iVar5;
    piVar3[0x5b] = 1;
LAB_00185108:
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar4 + 0x30) = uVar2;
  }
  iVar5 = FUN_0018c898(iVar4,0,iVar6 + DAT_0018526c,0);
  if (iVar5 == 0) {
    if (param_2 != 0) {
      *piVar3 = local_20;
    }
    FUN_00179908(piVar3);
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    FUN_0018ba54(iVar4);
    return -1;
  }
  FUN_0018c194(iVar4,iVar5);
  FUN_0017becc(piVar3,iVar5);
  if (param_1 == 0) {
    piVar3[2] = iVar4;
  }
  else {
    piVar3[2] = iVar4;
    iVar5 = DAT_00185268;
    *(int *)(*(int *)(iVar4 + 0xc) + 0x20) = param_1;
    FUN_00189d54(param_1,param_1,iVar6 + iVar5);
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  }
  piVar3[0x2b] = 7;
  piVar3[0x3e] = param_4;
  piVar3[0x45] = 0;
  piVar3[0x1a] = 0;
  FUN_0017c4fc(piVar3);
  if (param_1 == 0) {
    FUN_00184ed0(piVar3);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_00184ed0(piVar3);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  cVar1 = **(char **)(piVar3[9] + 0x10);
  if (cVar1 == '<') {
    if ((*(char **)(piVar3[9] + 0x10))[1] != '/') goto LAB_001851c6;
    uVar2 = 0x55;
  }
  else {
    if (cVar1 == '\0') goto LAB_001851d0;
LAB_001851c6:
    uVar2 = 0x56;
  }
  FUN_0017b7fc(piVar3,uVar2,0);
LAB_001851d0:
  if (piVar3[0xd] != *(int *)(iVar4 + 0xc)) {
    FUN_0017b7fc(piVar3,0x55,0);
  }
  iVar6 = 0;
  if ((piVar3[3] == 0) && (iVar6 = piVar3[0x15], iVar6 == 0)) {
    iVar6 = 1;
  }
  if ((param_6 != (int *)0x0) && ((iVar6 == 0 || (param_7 == 1)))) {
    iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 0xc);
    *param_6 = iVar5;
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x18)) {
      FUN_001895a0(iVar5,param_1);
      *(undefined4 *)(iVar5 + 0x14) = 0;
    }
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc) = 0;
  }
  if (param_2 != 0) {
    *piVar3 = local_20;
  }
  FUN_00179908(piVar3);
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  FUN_0018ba54(iVar4);
  return iVar6;
}


