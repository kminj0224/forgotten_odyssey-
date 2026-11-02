/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff574  Symbol: FUN_001ff574 */

size_t * FUN_001ff574(size_t param_1,wchar_t param_2,undefined4 param_3,undefined4 param_4)

{
  size_t *psVar1;
  
  if (param_1 != 0) {
    psVar1 = (size_t *)FUN_001ff4e0(param_1,0,param_3,param_4,param_4);
    if (param_1 == 1) {
      psVar1[3] = param_2;
    }
    else {
      wmemset((wchar_t *)(psVar1 + 3),param_2,param_1);
    }
    if (psVar1 != (size_t *)(DAT_001ff5f0 + 0x1ff5d4)) {
      psVar1[2] = 0;
      *psVar1 = param_1;
      psVar1[param_1 + 3] = 0;
    }
    return psVar1 + 3;
  }
  return (size_t *)(DAT_001ff5ec + 0x1ff59c);
}


