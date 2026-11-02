/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000174f4  Symbol: FUN_000174f4 */

undefined4 FUN_000174f4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      uVar1 = _Unwind_GetTextRelBase(param_2,param_2,param_3,param_4);
      return uVar1;
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = _Unwind_GetRegionStart(param_2,param_2,param_3,param_4);
        return uVar1;
      }
      if (param_1 != 0x50) {
        if (param_1 != 0x30) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = _Unwind_GetDataRelBase(param_2,param_2,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


