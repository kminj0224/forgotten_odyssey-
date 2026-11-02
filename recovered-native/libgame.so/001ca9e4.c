/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ca9e4  Symbol: FUN_001ca9e4 */

int FUN_001ca9e4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x18))();
  if (((iVar1 != 0) && ((uVar4 & 0x10) != 0)) && (*(char *)(param_1 + 0x45) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    if ((*(char *)(param_1 + 0x46) == '\0') && (1 < *(uint *)(param_1 + 0x40))) {
      iVar1 = *(uint *)(param_1 + 0x40) - 1;
    }
    if (0x3ff < iVar1) {
      iVar1 = 0x400;
    }
    if (iVar1 <= param_3) {
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
      iVar2 = FUN_00207fc8(param_1 + 0x24,*(int *)(param_1 + 0x10),iVar1,param_2,param_3);
      if (iVar2 == iVar1 + param_3) {
        iVar3 = *(int *)(param_1 + 0x3c);
        *(int *)(param_1 + 4) = iVar3;
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0xc) = iVar3;
        if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) || (*(uint *)(param_1 + 0x40) < 2)) {
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        else {
          *(int *)(param_1 + 0x14) = iVar3;
          *(int *)(param_1 + 0x10) = iVar3;
          *(uint *)(param_1 + 0x18) = iVar3 + (*(uint *)(param_1 + 0x40) - 1) * 4;
        }
        *(undefined *)(param_1 + 0x46) = 1;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  iVar1 = FUN_001ebda0(param_1,param_2,param_3);
  return iVar1;
}


