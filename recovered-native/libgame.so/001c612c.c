/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c612c  Symbol: FUN_001c612c */

void FUN_001c612c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  void *pvVar11;
  void *pvVar12;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = FUN_001c60f4(param_2);
  if (*(int *)(param_1 + 8) - 1U < uVar1) {
    uVar9 = uVar1 + 4;
    pvVar12 = *(void **)(param_1 + 4);
    pvVar2 = operator_new__(uVar9 * 4);
    uVar8 = *(uint *)(param_1 + 8);
    if (uVar8 != 0) {
      iVar6 = 0;
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)((int)pvVar2 + iVar6) = *(undefined4 *)(*(int *)(param_1 + 4) + iVar6);
        iVar6 = iVar6 + 4;
      } while (uVar5 != uVar8);
    }
    if (uVar8 < uVar9) {
      puVar7 = (undefined4 *)((int)pvVar2 + uVar8 * 4);
      do {
        uVar8 = uVar8 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar8 < uVar9);
    }
    pvVar11 = *(void **)(param_1 + 0xc);
    pvVar3 = operator_new__(uVar9 * 4);
    uVar8 = *(uint *)(param_1 + 8);
    if (uVar8 != 0) {
      iVar6 = 0;
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)((int)pvVar3 + iVar6) = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6);
        iVar6 = iVar6 + 4;
      } while (uVar5 != uVar8);
    }
    if (uVar8 < uVar9) {
      puVar7 = (undefined4 *)((int)pvVar3 + uVar8 * 4);
      do {
        uVar8 = uVar8 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar8 < uVar9);
    }
    *(uint *)(param_1 + 8) = uVar9;
    *(void **)(param_1 + 4) = pvVar2;
    *(void **)(param_1 + 0xc) = pvVar3;
    if (pvVar12 != (void *)0x0) {
      operator_delete__(pvVar12);
    }
    if (pvVar11 != (void *)0x0) {
      operator_delete__(pvVar11);
    }
  }
  FUN_0021100c(param_3 + 4,1);
  iVar6 = *(int *)(param_1 + 4);
  piVar10 = *(int **)(iVar6 + uVar1 * 4);
  if ((piVar10 == (int *)0x0) || (iVar4 = FUN_0021100c(piVar10 + 1,0xffffffff), iVar4 != 1)) {
    uVar8 = *(uint *)(param_1 + 8);
    *(int *)(iVar6 + uVar1 * 4) = param_3;
    if (uVar8 == 0) {
      return;
    }
  }
  else {
    (**(code **)(*piVar10 + 4))(piVar10);
    uVar8 = *(uint *)(param_1 + 8);
    *(int *)(iVar6 + uVar1 * 4) = param_3;
    if (uVar8 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    piVar10 = *(int **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
    if (piVar10 != (int *)0x0) {
      iVar6 = FUN_0021100c(piVar10 + 1,0xffffffff);
      if (iVar6 == 1) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      uVar8 = *(uint *)(param_1 + 8);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < uVar8);
  return;
}


