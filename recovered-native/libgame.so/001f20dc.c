/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f20dc  Symbol: FUN_001f20dc */

void FUN_001f20dc(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  byte *pbVar7;
  
  *(undefined *)(param_1 + 0x124) = 1;
  piVar1 = (int *)FUN_001f2070(param_2);
  iVar9 = DAT_001f24e0 + 0x1f2108;
  (**(code **)(*piVar1 + 0x10))(&local_40,piVar1);
  iVar8 = DAT_001f24e4;
  puVar12 = (uint *)(local_40 + -0xc);
  uVar10 = *puVar12;
  *(uint *)(param_1 + 0xc) = uVar10;
  puVar13 = *(uint **)(iVar9 + iVar8);
  if (puVar12 != puVar13) {
    iVar8 = FUN_0021100c(local_40 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(puVar12);
    }
    uVar10 = *(uint *)(param_1 + 0xc);
  }
  pbVar2 = (byte *)operator_new__(uVar10);
  if (uVar10 != 0) {
    pbVar7 = pbVar2;
    do {
      pbVar6 = pbVar7 + 1;
      *pbVar7 = 0;
      pbVar7 = pbVar6;
    } while (pbVar6 != pbVar2 + uVar10);
  }
  (**(code **)(*piVar1 + 0x10))(&local_3c,piVar1);
  FUN_001eccb4(&local_3c,pbVar2,*(undefined4 *)(param_1 + 0xc),0);
  if (((uint *)(local_3c + -0xc) != puVar13) &&
     (iVar8 = FUN_0021100c(local_3c + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((uint *)(local_3c + -0xc));
  }
  iVar8 = *(int *)(param_1 + 0xc);
  *(byte **)(param_1 + 8) = pbVar2;
  if (iVar8 != 0) {
    uVar10 = (uint)*pbVar2;
    if (uVar10 == 0 || (int)(uVar10 * 0x1000000) < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = uVar10 - 0xff;
      if (iVar8 != 0) {
        iVar8 = 1;
      }
    }
  }
  iVar5 = *piVar1;
  *(char *)(param_1 + 0x10) = (char)iVar8;
  (**(code **)(iVar5 + 0x14))(&local_38,piVar1);
  iVar8 = DAT_001f24e8;
  piVar14 = (int *)(local_38 + -0xc);
  iVar5 = *piVar14;
  *(int *)(param_1 + 0x18) = iVar5;
  piVar11 = *(int **)(iVar9 + iVar8);
  if (piVar14 != piVar11) {
    iVar8 = FUN_0021100c(local_38 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(piVar14);
    }
    iVar5 = *(int *)(param_1 + 0x18);
  }
  pvVar3 = operator_new__(iVar5 << 2);
  (**(code **)(*piVar1 + 0x14))(&local_34,piVar1);
  FUN_001fec04(&local_34,pvVar3,*(undefined4 *)(param_1 + 0x18),0);
  if (((int *)(local_34 + -0xc) != piVar11) &&
     (iVar8 = FUN_0021100c(local_34 + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((int *)(local_34 + -0xc));
  }
  iVar8 = *piVar1;
  *(void **)(param_1 + 0x14) = pvVar3;
  (**(code **)(iVar8 + 0x18))(&local_30,piVar1);
  piVar14 = (int *)(local_30 + -0xc);
  iVar8 = *piVar14;
  *(int *)(param_1 + 0x20) = iVar8;
  if (piVar14 != piVar11) {
    iVar8 = FUN_0021100c(local_30 + -4,0xffffffff);
    if (iVar8 < 1) {
      operator_delete(piVar14);
    }
    iVar8 = *(int *)(param_1 + 0x20);
  }
  pvVar3 = operator_new__(iVar8 << 2);
  (**(code **)(*piVar1 + 0x18))(local_2c,piVar1);
  FUN_001fec04(local_2c,pvVar3,*(undefined4 *)(param_1 + 0x20),0);
  if (((int *)(local_2c[0] + -0xc) != piVar11) &&
     (iVar8 = FUN_0021100c(local_2c[0] + -4,0xffffffff), iVar8 < 1)) {
    operator_delete((int *)(local_2c[0] + -0xc));
  }
  iVar8 = *piVar1;
  *(void **)(param_1 + 0x1c) = pvVar3;
  uVar4 = (**(code **)(iVar8 + 8))(piVar1);
  iVar8 = *piVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  uVar4 = (**(code **)(iVar8 + 0xc))(piVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  piVar1 = (int *)FUN_001f1db0(param_2);
  (**(code **)(*piVar1 + 0x2c))
            (piVar1,**(int **)(iVar9 + DAT_001f24ec),**(int **)(iVar9 + DAT_001f24ec) + 0x24,
             param_1 + 0x2c);
  (**(code **)(*piVar1 + 0x2c))
            (piVar1,**(int **)(iVar9 + DAT_001f24f0),**(int **)(iVar9 + DAT_001f24f0) + 0x1a,
             param_1 + 0xbc);
  return;
}


