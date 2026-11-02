/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5bc8  Symbol: FUN_001c5bc8 */

int FUN_001c5bc8(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        piVar5 = *(int **)((int)pvVar1 + uVar4 * 4);
        if (piVar5 != (int *)0x0) {
          iVar2 = FUN_0021100c(piVar5 + 1,0xffffffff);
          if (iVar2 == 1) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          pvVar1 = *(void **)(param_1 + 4);
          uVar3 = *(uint *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      if (pvVar1 == (void *)0x0) goto LAB_001c5c28;
    }
    operator_delete__(pvVar1);
  }
LAB_001c5c28:
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        piVar5 = *(int **)((int)pvVar1 + uVar4 * 4);
        if (piVar5 != (int *)0x0) {
          iVar2 = FUN_0021100c(piVar5 + 1,0xffffffff);
          if (iVar2 == 1) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          pvVar1 = *(void **)(param_1 + 0xc);
          uVar3 = *(uint *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      if (pvVar1 == (void *)0x0) goto LAB_001c5cb0;
    }
    operator_delete__(pvVar1);
  }
LAB_001c5cb0:
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    iVar2 = 0;
    do {
      if (*(void **)((int)pvVar1 + iVar2) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar1 + iVar2));
        pvVar1 = *(void **)(param_1 + 0x10);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x18);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return param_1;
}


