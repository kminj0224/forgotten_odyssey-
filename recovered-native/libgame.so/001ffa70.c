/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ffa70  Symbol: FUN_001ffa70 */

int * FUN_001ffa70(int *param_1,int param_2,int param_3,uint param_4,wchar_t param_5)

{
  if ((uint)((0xffffffe - *(int *)(*param_1 + -0xc)) + param_3) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ffae8 + DAT_001ffae8);
  }
  FUN_001ff6cc();
  if (param_4 != 0) {
    if (param_4 != 1) {
      wmemset((wchar_t *)(*param_1 + param_2 * 4),param_5,param_4);
      return param_1;
    }
    *(wchar_t *)(*param_1 + param_2 * 4) = param_5;
  }
  return param_1;
}


