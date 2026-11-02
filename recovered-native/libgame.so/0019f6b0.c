/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f6b0  Symbol: FUN_0019f6b0 */

uint FUN_0019f6b0(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x100) {
    if (((param_1 - 0x61 < 0x1a) || (param_1 - 0x41 < 0x1a)) || (param_1 - 0xc0 < 0x17)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)(param_1 - 0xd8 < 0x1f || 0xf7 < param_1);
    }
  }
  else {
    uVar1 = FUN_0019f630(param_1,DAT_0019f6f8 + 0x19f6b8 + DAT_0019f6fc);
  }
  return uVar1;
}


