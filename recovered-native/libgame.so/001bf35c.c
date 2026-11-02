/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bf35c  Symbol: jpeg_idct_1x1 */

void jpeg_idct_1x1(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  *(undefined *)(*param_4 + param_5) =
       *(undefined *)
        (*(int *)(param_1 + 0x14c) +
         ((uint)(((int)*param_3 * **(int **)(param_2 + 0x54) + 4) * 0x80000) >> 0x16) + 0x80);
  return;
}


