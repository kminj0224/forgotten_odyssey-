/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed8d0  Symbol: FUN_001ed8d0 */

undefined4 * FUN_001ed8d0(undefined4 *param_1,undefined *param_2,size_t param_3)

{
  undefined4 *puVar1;
  undefined *__dest;
  
  __dest = (undefined *)*param_1;
  if (0x3ffffffc < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ed9bc + DAT_001ed9c0);
  }
  if (((param_2 < __dest) || (__dest + *(int *)(__dest + -0xc) < param_2)) ||
     (0 < *(int *)(__dest + -4))) {
    puVar1 = (undefined4 *)FUN_001ed870(param_1,0,*(int *)(__dest + -0xc),param_2,param_3);
    return puVar1;
  }
  if ((uint)((int)param_2 - (int)__dest) < param_3) {
    if (param_2 == __dest) goto LAB_001ed944;
    if (param_3 != 1) {
      memmove(__dest,param_2,param_3);
      __dest = (undefined *)*param_1;
      goto LAB_001ed944;
    }
  }
  else if (param_3 != 1) {
    memcpy(__dest,param_2,param_3);
    __dest = (undefined *)*param_1;
    goto LAB_001ed944;
  }
  *__dest = *param_2;
  __dest = (undefined *)*param_1;
LAB_001ed944:
  if (__dest + -0xc != (undefined *)(DAT_001ed9bc + 0x1ed954)) {
    *(undefined4 *)(__dest + -4) = 0;
    *(size_t *)(__dest + -0xc) = param_3;
    __dest[param_3] = 0;
  }
  return param_1;
}


