/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001daee8  Symbol: FUN_001daee8 */

void FUN_001daee8(int param_1,undefined4 param_2)

{
  undefined uVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  void *pvVar5;
  int iVar6;
  code *pcVar7;
  byte *pbVar8;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte *pbVar9;
  
  *(undefined *)(param_1 + 0x43) = 1;
  piVar2 = (int *)FUN_001dae7c(param_2);
  uVar1 = (**(code **)(*piVar2 + 8))();
  *(undefined *)(param_1 + 0x11) = uVar1;
  uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2);
  *(undefined *)(param_1 + 0x12) = uVar1;
  uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2);
  pcVar7 = *(code **)(*piVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  (*pcVar7)(&local_54,piVar2);
  puVar13 = (uint *)(local_54 + -0xc);
  uVar11 = *puVar13;
  puVar12 = *(uint **)(DAT_001db47c + 0x1daf70);
  *(uint *)(param_1 + 0xc) = uVar11;
  if (puVar13 != puVar12) {
    iVar10 = FUN_0021100c(local_54 + -4,0xffffffff);
    if (iVar10 < 1) {
      operator_delete(puVar13);
    }
    uVar11 = *(uint *)(param_1 + 0xc);
  }
  pbVar4 = (byte *)operator_new__(uVar11);
  if (uVar11 != 0) {
    pbVar9 = pbVar4;
    do {
      pbVar8 = pbVar9 + 1;
      *pbVar9 = 0;
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar4 + uVar11);
  }
  (**(code **)(*piVar2 + 0x10))(&local_50,piVar2);
  FUN_001eccb4(&local_50,pbVar4,*(undefined4 *)(param_1 + 0xc),0);
  if (((uint *)(local_50 + -0xc) != puVar12) &&
     (iVar10 = FUN_0021100c(local_50 + -4,0xffffffff), iVar10 < 1)) {
    operator_delete((uint *)(local_50 + -0xc));
  }
  iVar10 = *(int *)(param_1 + 0xc);
  *(byte **)(param_1 + 8) = pbVar4;
  if (iVar10 != 0) {
    uVar11 = (uint)*pbVar4;
    if (uVar11 == 0 || (int)(uVar11 * 0x1000000) < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = uVar11 - 0xff;
      if (iVar10 != 0) {
        iVar10 = 1;
      }
    }
  }
  iVar6 = *piVar2;
  *(char *)(param_1 + 0x10) = (char)iVar10;
  (**(code **)(iVar6 + 0x14))(&local_4c,piVar2);
  puVar13 = (uint *)(local_4c + -0xc);
  uVar11 = *puVar13;
  *(uint *)(param_1 + 0x18) = uVar11;
  if (puVar13 != puVar12) {
    iVar10 = FUN_0021100c(local_4c + -4,0xffffffff);
    if (iVar10 < 1) {
      operator_delete(puVar13);
    }
    uVar11 = *(uint *)(param_1 + 0x18);
  }
  pvVar5 = operator_new__(uVar11);
  (**(code **)(*piVar2 + 0x14))(&local_48,piVar2);
  FUN_001eccb4(&local_48,pvVar5,*(undefined4 *)(param_1 + 0x18),0);
  if (((uint *)(local_48 + -0xc) != puVar12) &&
     (iVar10 = FUN_0021100c(local_48 + -4,0xffffffff), iVar10 < 1)) {
    operator_delete((uint *)(local_48 + -0xc));
  }
  iVar10 = *piVar2;
  *(void **)(param_1 + 0x14) = pvVar5;
  (**(code **)(iVar10 + 0x18))(&local_44,piVar2);
  puVar13 = (uint *)(local_44 + -0xc);
  uVar11 = *puVar13;
  *(uint *)(param_1 + 0x20) = uVar11;
  if (puVar13 != puVar12) {
    iVar10 = FUN_0021100c(local_44 + -4,0xffffffff);
    if (iVar10 < 1) {
      operator_delete(puVar13);
    }
    uVar11 = *(uint *)(param_1 + 0x20);
  }
  pvVar5 = operator_new__(uVar11);
  (**(code **)(*piVar2 + 0x18))(&local_40,piVar2);
  FUN_001eccb4(&local_40,pvVar5,*(undefined4 *)(param_1 + 0x20),0);
  if (((uint *)(local_40 + -0xc) != puVar12) &&
     (iVar10 = FUN_0021100c(local_40 + -4,0xffffffff), iVar10 < 1)) {
    operator_delete((uint *)(local_40 + -0xc));
  }
  iVar10 = *piVar2;
  *(void **)(param_1 + 0x1c) = pvVar5;
  (**(code **)(iVar10 + 0x1c))(&local_3c,piVar2);
  puVar13 = (uint *)(local_3c + -0xc);
  uVar11 = *puVar13;
  *(uint *)(param_1 + 0x28) = uVar11;
  if (puVar13 != puVar12) {
    iVar10 = FUN_0021100c(local_3c + -4,0xffffffff);
    if (iVar10 < 1) {
      operator_delete(puVar13);
    }
    uVar11 = *(uint *)(param_1 + 0x28);
  }
  pvVar5 = operator_new__(uVar11);
  (**(code **)(*piVar2 + 0x1c))(&local_38,piVar2);
  FUN_001eccb4(&local_38,pvVar5,*(undefined4 *)(param_1 + 0x28),0);
  if (((uint *)(local_38 + -0xc) != puVar12) &&
     (iVar10 = FUN_0021100c(local_38 + -4,0xffffffff), iVar10 < 1)) {
    operator_delete((uint *)(local_38 + -0xc));
  }
  iVar10 = *piVar2;
  *(void **)(param_1 + 0x24) = pvVar5;
  local_34 = (**(code **)(iVar10 + 0x24))(piVar2);
  *(undefined4 *)(param_1 + 0x30) = local_34;
  local_30 = local_34;
  local_30 = (**(code **)(*piVar2 + 0x28))(piVar2);
  *(undefined4 *)(param_1 + 0x34) = local_30;
  local_2c = local_30;
  piVar2 = (int *)FUN_001da5b8(param_2);
  pvVar5 = **(void ***)(DAT_001db480 + 0x1db1f0);
  if (*(char *)(piVar2 + 7) == '\x01') {
    memcpy((void *)(param_1 + 0x38),pvVar5,0xb);
  }
  else {
    if (*(char *)(piVar2 + 7) == '\0') {
      FUN_00204560();
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2,pvVar5,(int)pvVar5 + 0xb,(void *)(param_1 + 0x38));
  }
  return;
}


