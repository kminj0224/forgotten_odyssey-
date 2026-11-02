/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196d0c  Symbol: FUN_00196d0c */

undefined4 FUN_00196d0c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int local_20;
  
  iVar4 = param_1[9];
  iVar7 = DAT_00196ea8 + 0x196d1a;
  if ((**(char **)(iVar4 + 0x10) != '<') || ((*(char **)(iVar4 + 0x10))[1] != '/')) {
    iVar5 = 0;
    uVar3 = 0x4a;
    iVar4 = DAT_00196eac;
    goto LAB_00196ea0;
  }
  param_1[0x32] = param_1[0x32] + 2;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
  iVar5 = FUN_00196608();
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00196588(param_1);
  bVar1 = **(byte **)(param_1[9] + 0x10);
  if (((((byte)(bVar1 - 9) < 2) || (bVar1 == 0xd)) || (0x1f < bVar1)) && (bVar1 == 0x3e)) {
LAB_00196dac:
    FUN_0017a4a4(param_1);
  }
  else {
    FUN_00195ba4(param_1,0x49,iVar7 + DAT_00196eb0,0,0);
    if (param_1[0x48] != 0) {
      while ((**(char **)(param_1[9] + 0x10) != '>' && (**(char **)(param_1[9] + 0x10) != '\0'))) {
        FUN_0017a4a4(param_1);
      }
      goto LAB_00196dac;
    }
  }
  if ((0 < param_1[0x3e]) &&
     (((iVar4 = FUN_0019c30c(iVar5,iVar7 + DAT_00196eb4), iVar4 != 0 ||
       (iVar4 = FUN_0019c30c(iVar5,iVar7 + DAT_00196eb8), iVar4 != 0)) ||
      (iVar4 = FUN_0019c30c(iVar5,iVar7 + DAT_00196ebc), iVar4 != 0)))) {
    param_1[0x3e] = param_1[0x3e] + -1;
    return 0;
  }
  iVar4 = param_1[0x2f] + -1;
  local_20 = iVar4 * 4;
  for (; -1 < iVar4; iVar4 = iVar4 + -1) {
    iVar2 = FUN_0019c30c(iVar5,*(undefined4 *)(param_1[0x31] + local_20));
    local_20 = local_20 + -4;
    if (iVar2 != 0) {
      piVar8 = param_1 + 0x2e;
      FUN_00196c00(param_1,iVar5);
      iVar4 = FUN_0019c30c(iVar5,*piVar8);
      if (((iVar4 == 0) && (*piVar8 != 0)) && (iVar4 = FUN_0019c30c(*piVar8,iVar5), iVar4 == 0)) {
        FUN_00195ba4(param_1,0x4c,iVar7 + DAT_00196ec0,iVar5,*piVar8);
      }
      if (param_1[0x2e] == 0) {
        return 0;
      }
      iVar4 = FUN_0019c30c(param_1[0x2e],iVar5);
      if (iVar4 == 0) {
        return 0;
      }
      if ((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x3c), pcVar6 != (code *)0x0)) {
        (*pcVar6)(param_1[1],iVar5);
      }
      FUN_001958b0(param_1);
      return 1;
    }
  }
  uVar3 = 0x4c;
  iVar4 = DAT_00196ec4;
LAB_00196ea0:
  FUN_00195ba4(param_1,uVar3,iVar7 + iVar4,iVar5,0);
  return 0;
}


