/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200420  Symbol: FUN_00200420 */

void FUN_00200420(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + -0xc);
  if (0xffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_00200468 + DAT_00200468);
  }
  if (param_2 <= uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_001ff6cc(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_00200358(param_1,param_2 - uVar1);
  return;
}


