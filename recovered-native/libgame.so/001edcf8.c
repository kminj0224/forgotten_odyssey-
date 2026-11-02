/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001edcf8  Symbol: FUN_001edcf8 */

int * FUN_001edcf8(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 <= *(uint *)(*param_1 + -0xc)) {
    uVar1 = *(uint *)(*param_1 + -0xc) - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    FUN_001ed6f8(param_1,param_2,param_3,0);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_001edd38 + DAT_001edd38);
}


