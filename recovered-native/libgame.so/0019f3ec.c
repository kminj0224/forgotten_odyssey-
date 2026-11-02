/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f3ec  Symbol: FUN_0019f3ec */

void FUN_0019f3ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) {
    if (*(int *)(param_1 + 0xd8) == 1) {
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
    }
    else {
      if (*(int *)(param_1 + 0xd8) != 2) {
        FUN_0019f1a8(param_1,1,DAT_0019f438 + 0x19f3f8 + DAT_0019f43c,param_2);
        return;
      }
      uVar1 = *(undefined4 *)(iVar2 + 0x30);
    }
    FUN_00195518(param_1 + 0x6c,uVar1,param_2,param_3,param_4);
  }
  return;
}


