/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d0fd8  Symbol: FUN_001d0fd8 */

void FUN_001d0fd8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_001dbe1c(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    uVar2 = FUN_001da5b8(param_2);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
  }
  iVar1 = FUN_001dbfcc(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else {
    uVar2 = FUN_001dada4(param_2);
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  iVar1 = FUN_001dc038(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_001dae10(param_2);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


