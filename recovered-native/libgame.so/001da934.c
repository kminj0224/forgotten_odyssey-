/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001da934  Symbol: FUN_001da934 */

void FUN_001da934(int param_1,undefined4 param_2)

{
  undefined uVar1;
  int *piVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  byte *pbVar7;
  
  *(undefined *)(param_1 + 100) = 1;
  piVar2 = (int *)FUN_001da8c8(param_2);
  (**(code **)(*piVar2 + 0x10))(&local_40,piVar2);
  puVar11 = (uint *)(local_40 + -0xc);
  uVar9 = *puVar11;
  puVar10 = *(uint **)(DAT_001dad98 + 0x1da984);
  *(uint *)(param_1 + 0xc) = uVar9;
  if (puVar11 != puVar10) {
    iVar8 = FUN_0021100c(local_40 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(puVar11);
    }
    uVar9 = *(uint *)(param_1 + 0xc);
  }
  pbVar3 = (byte *)operator_new__(uVar9);
  if (uVar9 != 0) {
    pbVar7 = pbVar3;
    do {
      pbVar6 = pbVar7 + 1;
      *pbVar7 = 0;
      pbVar7 = pbVar6;
    } while (pbVar6 != pbVar3 + uVar9);
  }
  (**(code **)(*piVar2 + 0x10))(&local_3c,piVar2);
  FUN_001eccb4(&local_3c,pbVar3,*(undefined4 *)(param_1 + 0xc),0);
  if (((uint *)(local_3c + -0xc) != puVar10) &&
     (iVar8 = FUN_0021100c(local_3c + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((uint *)(local_3c + -0xc));
  }
  iVar8 = *(int *)(param_1 + 0xc);
  *(byte **)(param_1 + 8) = pbVar3;
  if (iVar8 != 0) {
    uVar9 = (uint)*pbVar3;
    if (uVar9 == 0 || (int)(uVar9 * 0x1000000) < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = uVar9 - 0xff;
      if (iVar8 != 0) {
        iVar8 = 1;
      }
    }
  }
  iVar5 = *piVar2;
  *(char *)(param_1 + 0x10) = (char)iVar8;
  (**(code **)(iVar5 + 0x14))(&local_38,piVar2);
  puVar11 = (uint *)(local_38 + -0xc);
  uVar9 = *puVar11;
  *(uint *)(param_1 + 0x18) = uVar9;
  if (puVar11 != puVar10) {
    iVar8 = FUN_0021100c(local_38 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(puVar11);
    }
    uVar9 = *(uint *)(param_1 + 0x18);
  }
  pvVar4 = operator_new__(uVar9);
  (**(code **)(*piVar2 + 0x14))(&local_34,piVar2);
  FUN_001eccb4(&local_34,pvVar4,*(undefined4 *)(param_1 + 0x18),0);
  if (((uint *)(local_34 + -0xc) != puVar10) &&
     (iVar8 = FUN_0021100c(local_34 + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((uint *)(local_34 + -0xc));
  }
  iVar8 = *piVar2;
  *(void **)(param_1 + 0x14) = pvVar4;
  (**(code **)(iVar8 + 0x18))(&local_30,piVar2);
  puVar11 = (uint *)(local_30 + -0xc);
  uVar9 = *puVar11;
  *(uint *)(param_1 + 0x20) = uVar9;
  if (puVar11 != puVar10) {
    iVar8 = FUN_0021100c(local_30 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(puVar11);
    }
    uVar9 = *(uint *)(param_1 + 0x20);
  }
  pvVar4 = operator_new__(uVar9);
  (**(code **)(*piVar2 + 0x18))(local_2c,piVar2);
  FUN_001eccb4(local_2c,pvVar4,*(undefined4 *)(param_1 + 0x20),0);
  if (((uint *)(local_2c[0] + -0xc) != puVar10) &&
     (iVar8 = FUN_0021100c(local_2c[0] + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((uint *)(local_2c[0] + -0xc));
  }
  iVar8 = *piVar2;
  *(void **)(param_1 + 0x1c) = pvVar4;
  uVar1 = (**(code **)(iVar8 + 8))(piVar2);
  *(undefined *)(param_1 + 0x24) = uVar1;
  uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2);
  *(undefined *)(param_1 + 0x25) = uVar1;
  piVar2 = (int *)FUN_001da5b8(param_2);
  pvVar4 = **(void ***)(DAT_001dad9c + 0x1dab40);
  if (*(char *)(piVar2 + 7) == '\x01') {
    memcpy((void *)(param_1 + 0x26),pvVar4,0x24);
  }
  else {
    if (*(char *)(piVar2 + 7) == '\0') {
      FUN_00204560();
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2,pvVar4,(int)pvVar4 + 0x24,(void *)(param_1 + 0x26));
  }
  pvVar4 = **(void ***)(DAT_001dada0 + 0x1dab88);
  if (*(char *)(piVar2 + 7) == '\x01') {
    memcpy((void *)(param_1 + 0x4a),pvVar4,0x1a);
  }
  else {
    if (*(char *)(piVar2 + 7) == '\0') {
      FUN_00204560(piVar2);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2,pvVar4,(int)pvVar4 + 0x1a,(void *)(param_1 + 0x4a));
  }
  return;
}


