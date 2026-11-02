/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed5a0  Symbol: FUN_001ed5a0 */

size_t * FUN_001ed5a0(size_t param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t *psVar1;
  
  if (param_1 != 0) {
    psVar1 = (size_t *)FUN_001ed51c(param_1,0,param_3,param_4,param_4);
    if (param_1 == 1) {
      *(char *)(psVar1 + 3) = (char)param_2;
    }
    else {
      memset(psVar1 + 3,param_2,param_1);
    }
    if (psVar1 != (size_t *)(DAT_001ed61c + 0x1ed600)) {
      psVar1[2] = 0;
      *psVar1 = param_1;
      *(undefined *)((int)psVar1 + param_1 + 0xc) = 0;
    }
    return psVar1 + 3;
  }
  return (size_t *)(DAT_001ed618 + 0x1ed5c8);
}


