/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019dc60  Symbol: FUN_0019dc60 */

void FUN_0019dc60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 0x18) != 0) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x3c) == 0)) {
      *(int *)(iVar2 + 0x3c) = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if ((((*(int **)(param_1 + 0x30) != (int *)0x0) && (0 < *(int *)(param_1 + 0x28))) &&
        ((iVar2 = **(int **)(param_1 + 0x30), iVar2 != 0 &&
         ((*(int *)(iVar2 + 0x2c) != 0 && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)))))) &&
       (*(int *)(iVar2 + 0x3c) == 0)) {
      uVar1 = FUN_0019c904();
      *(undefined4 *)(iVar2 + 0x3c) = uVar1;
    }
    if (((*(int *)(param_1 + 0x100) != 0) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x4c) == 0)) {
      *(int *)(iVar2 + 0x4c) = *(int *)(param_1 + 0x100);
    }
  }
  return;
}


