/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cbe24  Symbol: FUN_001cbe24 */

int FUN_001cbe24(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00207ebc(param_1 + 0x24);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_001cb4b8(param_1);
  iVar1 = 1 - uVar2;
  if (1 < uVar2) {
    iVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x50) = 0;
  FUN_001cb268(param_1);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined *)(param_1 + 0x45) = 0;
  *(undefined *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  iVar3 = FUN_00207ee0(param_1 + 0x24);
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar1 != 0) {
    param_1 = 0;
  }
  return param_1;
}


