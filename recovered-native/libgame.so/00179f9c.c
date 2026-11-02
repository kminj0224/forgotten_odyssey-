/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179f9c  Symbol: FUN_00179f9c */

undefined4 FUN_00179f9c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar1 = FUN_00179e24(param_1,*(int *)(param_1 + 0x24),param_2);
      *(undefined4 *)(param_1 + 0x100) = 1;
      return uVar1;
    }
    FUN_00179364(param_1,DAT_00179fcc + 0x179fa8 + DAT_00179fd0,0);
  }
  return 0xffffffff;
}


