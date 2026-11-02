/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb960  Symbol: FUN_001cb960 */

longlong * FUN_001cb960(longlong *param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  bool bVar5;
  longlong lVar6;
  uint local_58;
  int local_54;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  piVar4 = *(int **)(param_2 + 0x54);
  if (piVar4 == (int *)0x0) {
    bVar5 = true;
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar4 + 0x14))(piVar4);
    if ((int)uVar1 < 0) {
      bVar5 = true;
      uVar1 = 0;
    }
    else if ((int)uVar1 < 1) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar2 = FUN_00207ebc(param_2 + 0x24);
  if (iVar2 == 0) {
    return param_1;
  }
  if ((param_3 | param_4) == 0) {
    bVar5 = false;
  }
  if (bVar5) {
    return param_1;
  }
  if ((param_3 | param_4) == 0 && param_5 == 1) {
    if (*(char *)(param_2 + 0x46) == '\0') {
      cVar3 = '\x01';
      goto LAB_001cba4c;
    }
    iVar2 = (**(code **)(**(int **)(param_2 + 0x54) + 0x18))();
    if (iVar2 != 0) {
      cVar3 = '\x01';
      goto LAB_001cba4c;
    }
  }
  cVar3 = *(char *)(param_2 + 0x50);
  if (cVar3 != '\0') {
    iVar2 = *(int *)(param_2 + 0x48);
    if (*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) {
      iVar2 = iVar2 + 1;
    }
    cVar3 = '\0';
    *(int *)(param_2 + 0x48) = iVar2;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 0x3c);
    *(int *)(param_2 + 8) = iVar2;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined *)(param_2 + 0x50) = 0;
  }
LAB_001cba4c:
  local_4c = *(undefined4 *)(param_2 + 0x30);
  local_54 = ((int)uVar1 >> 0x1f) * param_3 + uVar1 * param_4 +
             (int)((ulonglong)param_3 * (ulonglong)uVar1 >> 0x20);
  local_58 = (uint)((ulonglong)param_3 * (ulonglong)uVar1);
  if ((*(char *)(param_2 + 0x45) != '\0') && (param_5 == 1)) {
    local_4c = *(undefined4 *)(param_2 + 0x38);
    uVar1 = FUN_001cb440(param_2);
    bVar5 = CARRY4(local_58,uVar1);
    local_58 = local_58 + uVar1;
    local_54 = local_54 + ((int)uVar1 >> 0x1f) + (uint)bVar5;
  }
  if (cVar3 == '\0') {
    FUN_001cb7e0(&local_48,param_2,local_58,local_54,param_5,local_4c);
    *(int *)param_1 = local_48;
    *(undefined4 *)((int)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
  }
  else {
    if (*(char *)(param_2 + 0x46) != '\0') {
      local_58 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      local_54 = (int)local_58 >> 0x1f;
    }
    lVar6 = FUN_00208064(param_2 + 0x24,1,0,0,1);
    if ((int)((ulonglong)lVar6 >> 0x20) != -1 || (int)lVar6 != -1) {
      *param_1 = lVar6 + CONCAT44(local_54,local_58);
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 1) = local_4c;
    }
  }
  return param_1;
}


