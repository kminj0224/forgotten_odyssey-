/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eec14  Symbol: FUN_001eec14 */

size_t * FUN_001eec14(undefined *param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t *psVar1;
  size_t *__dest;
  size_t __n;
  
  if (param_1 == param_2) {
    return (size_t *)(DAT_001eecd4 + 0x1eec98);
  }
  if (param_1 == (undefined *)0x0) {
    if (param_2 != (undefined *)0x0) {
      FUN_001c43f0(DAT_001eecd8 + 0x1eeca8);
    }
    psVar1 = (size_t *)FUN_001ed51c();
    __dest = psVar1 + 3;
    __n = 0;
  }
  else {
    __n = (int)param_2 - (int)param_1;
    psVar1 = (size_t *)FUN_001ed51c(__n,0,param_3,param_4,param_4);
    __dest = psVar1 + 3;
    if (__n == 1) {
      *(undefined *)(psVar1 + 3) = *param_1;
      goto LAB_001eec5c;
    }
  }
  memcpy(__dest,param_1,__n);
LAB_001eec5c:
  if (psVar1 != (size_t *)(DAT_001eecd0 + 0x1eec68)) {
    psVar1[2] = 0;
    *psVar1 = __n;
    *(undefined *)((int)__dest + __n) = 0;
  }
  return __dest;
}


