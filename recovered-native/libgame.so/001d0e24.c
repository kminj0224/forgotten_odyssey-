/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d0e24  Symbol: FUN_001d0e24 */

void FUN_001d0e24(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x75) != '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0x7c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  uVar2 = param_1;
  if (*(char *)(piVar3 + 7) != '\0') {
    uVar2 = (uint)*(byte *)((int)piVar3 + 0x3d);
  }
  uVar1 = (undefined)uVar2;
  if (*(char *)(piVar3 + 7) == '\0') {
    FUN_00204560(piVar3);
    uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,0x20,param_3,*(code **)(*piVar3 + 0x18),param_4);
  }
  *(undefined *)(param_1 + 0x74) = uVar1;
  *(undefined *)(param_1 + 0x75) = 1;
  return;
}


