/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d162c  Symbol: FUN_001d162c */

void FUN_001d162c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_001f34ec(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else {
    uVar2 = FUN_001f1db0(param_2);
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  iVar1 = FUN_001f369c(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    uVar2 = FUN_001f24f4(param_2);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  iVar1 = FUN_001f3708(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_001f2560(param_2);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


