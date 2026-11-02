/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f2638  Symbol: FUN_001f2638 */

void FUN_001f2638(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
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
  byte *pbVar8;
  
  *(undefined *)(param_1 + 0x6c) = 1;
  piVar1 = (int *)FUN_001f25cc(param_2);
  uVar2 = (**(code **)(*piVar1 + 8))();
  pcVar6 = *(code **)(*piVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (*pcVar6)(piVar1);
  pcVar6 = *(code **)(*piVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (*pcVar6)(piVar1);
  pcVar6 = *(code **)(*piVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  (*pcVar6)(&local_54,piVar1);
  puVar14 = (uint *)(local_54 + -0xc);
  uVar10 = *puVar14;
  puVar12 = *(uint **)(DAT_001f2b94 + 0x1f26c0);
  *(uint *)(param_1 + 0xc) = uVar10;
  if (puVar14 != puVar12) {
    iVar9 = FUN_0021100c(local_54 + -4,0xffffffff);
    if (iVar9 < 1) {
      operator_delete(puVar14);
    }
    uVar10 = *(uint *)(param_1 + 0xc);
  }
  pbVar3 = (byte *)operator_new__(uVar10);
  if (uVar10 != 0) {
    pbVar8 = pbVar3;
    do {
      pbVar7 = pbVar8 + 1;
      *pbVar8 = 0;
      pbVar8 = pbVar7;
    } while (pbVar7 != pbVar3 + uVar10);
  }
  (**(code **)(*piVar1 + 0x10))(&local_50,piVar1);
  FUN_001eccb4(&local_50,pbVar3,*(undefined4 *)(param_1 + 0xc),0);
  if (((uint *)(local_50 + -0xc) != puVar12) &&
     (iVar9 = FUN_0021100c(local_50 + -4,0xffffffff), iVar9 < 1)) {
    operator_delete((uint *)(local_50 + -0xc));
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(byte **)(param_1 + 8) = pbVar3;
  if (iVar9 != 0) {
    uVar10 = (uint)*pbVar3;
    if (uVar10 == 0 || (int)(uVar10 * 0x1000000) < 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = uVar10 - 0xff;
      if (iVar9 != 0) {
        iVar9 = 1;
      }
    }
  }
  iVar5 = *piVar1;
  *(char *)(param_1 + 0x10) = (char)iVar9;
  (**(code **)(iVar5 + 0x14))(&local_4c,piVar1);
  piVar13 = (int *)(local_4c + -0xc);
  iVar9 = *piVar13;
  piVar11 = *(int **)(DAT_001f2b98 + 0x1f2788);
  *(int *)(param_1 + 0x20) = iVar9;
  if (piVar13 != piVar11) {
    iVar9 = FUN_0021100c(local_4c + -4,0xffffffff);
    if (iVar9 < 1) {
      operator_delete(piVar13);
    }
    iVar9 = *(int *)(param_1 + 0x20);
  }
  pvVar4 = operator_new__(iVar9 << 2);
  (**(code **)(*piVar1 + 0x14))(&local_48,piVar1);
  FUN_001fec04(&local_48,pvVar4,*(undefined4 *)(param_1 + 0x20),0);
  if (((int *)(local_48 + -0xc) != piVar11) &&
     (iVar9 = FUN_0021100c(local_48 + -4,0xffffffff), iVar9 < 1)) {
    operator_delete((int *)(local_48 + -0xc));
  }
  iVar9 = *piVar1;
  *(void **)(param_1 + 0x1c) = pvVar4;
  (**(code **)(iVar9 + 0x18))(&local_44,piVar1);
  piVar13 = (int *)(local_44 + -0xc);
  iVar9 = *piVar13;
  *(int *)(param_1 + 0x28) = iVar9;
  if (piVar13 != piVar11) {
    iVar9 = FUN_0021100c(local_44 + -4,0xffffffff);
    if (iVar9 < 1) {
      operator_delete(piVar13);
    }
    iVar9 = *(int *)(param_1 + 0x28);
  }
  pvVar4 = operator_new__(iVar9 << 2);
  (**(code **)(*piVar1 + 0x18))(&local_40,piVar1);
  FUN_001fec04(&local_40,pvVar4,*(undefined4 *)(param_1 + 0x28),0);
  if (((int *)(local_40 + -0xc) != piVar11) &&
     (iVar9 = FUN_0021100c(local_40 + -4,0xffffffff), iVar9 < 1)) {
    operator_delete((int *)(local_40 + -0xc));
  }
  iVar9 = *piVar1;
  *(void **)(param_1 + 0x24) = pvVar4;
  (**(code **)(iVar9 + 0x1c))(&local_3c,piVar1);
  piVar13 = (int *)(local_3c + -0xc);
  iVar9 = *piVar13;
  *(int *)(param_1 + 0x30) = iVar9;
  if (piVar13 != piVar11) {
    iVar9 = FUN_0021100c(local_3c + -4,0xffffffff);
    if (iVar9 < 1) {
      operator_delete(piVar13);
    }
    iVar9 = *(int *)(param_1 + 0x30);
  }
  pvVar4 = operator_new__(iVar9 << 2);
  (**(code **)(*piVar1 + 0x1c))(&local_38,piVar1);
  FUN_001fec04(&local_38,pvVar4,*(undefined4 *)(param_1 + 0x30),0);
  if (((int *)(local_38 + -0xc) != piVar11) &&
     (iVar9 = FUN_0021100c(local_38 + -4,0xffffffff), iVar9 < 1)) {
    operator_delete((int *)(local_38 + -0xc));
  }
  iVar9 = *piVar1;
  *(void **)(param_1 + 0x2c) = pvVar4;
  local_34 = (**(code **)(iVar9 + 0x24))(piVar1);
  *(undefined4 *)(param_1 + 0x38) = local_34;
  local_30 = local_34;
  local_30 = (**(code **)(*piVar1 + 0x28))(piVar1);
  *(undefined4 *)(param_1 + 0x3c) = local_30;
  local_2c = local_30;
  piVar1 = (int *)FUN_001f1db0(param_2);
  (**(code **)(*piVar1 + 0x2c))
            (piVar1,**(int **)(DAT_001f2b9c + 0x1f2950),**(int **)(DAT_001f2b9c + 0x1f2950) + 0xb,
             param_1 + 0x40);
  return;
}


