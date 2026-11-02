/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c42c  Symbol: FUN_0019c42c */

byte * FUN_0019c42c(byte *param_1,uint param_2)

{
  if (param_1 != (byte *)0x0) {
    for (; *param_1 != 0; param_1 = param_1 + 1) {
      if (*param_1 == param_2) {
        return param_1;
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}


