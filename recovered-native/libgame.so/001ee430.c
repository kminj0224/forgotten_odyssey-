/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee430  Symbol: FUN_001ee430 */

void FUN_001ee430(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + -0xc);
  if (0x3ffffffc < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ee478 + DAT_001ee478);
  }
  if (param_2 <= uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_001ed6f8(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_001ee368(param_1,param_2 - uVar1);
  return;
}


