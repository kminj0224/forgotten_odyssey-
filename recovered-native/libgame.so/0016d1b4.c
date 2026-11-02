/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d1b4  Symbol: png_write_rows */

void png_write_rows(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar2 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      png_write_row(param_1,uVar1);
    } while (uVar2 < param_3);
  }
  return;
}


