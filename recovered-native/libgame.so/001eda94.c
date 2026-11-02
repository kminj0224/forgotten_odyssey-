/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eda94  Symbol: FUN_001eda94 */

int * FUN_001eda94(int *param_1,int param_2,int param_3,uint param_4,byte param_5)

{
  if ((uint)((0x3ffffffc - *(int *)(*param_1 + -0xc)) + param_3) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001edb0c + DAT_001edb0c);
  }
  FUN_001ed6f8();
  if (param_4 != 0) {
    if (param_4 != 1) {
      memset((void *)(*param_1 + param_2),(uint)param_5,param_4);
      return param_1;
    }
    *(byte *)(*param_1 + param_2) = param_5;
  }
  return param_1;
}


