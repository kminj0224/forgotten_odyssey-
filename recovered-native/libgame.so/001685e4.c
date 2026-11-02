/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001685e4  Symbol: png_64bit_product */

void png_64bit_product(uint param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & DAT_00168610) * (param_1 & DAT_00168610);
  uVar1 = (param_2 >> 0x10) * (param_1 & DAT_00168610) +
          (param_1 >> 0x10) * (param_2 & DAT_00168610) + (uVar2 >> 0x10);
  uVar2 = DAT_00168610 & uVar2;
  *param_3 = (uVar1 >> 0x10) + (param_1 >> 0x10) * (param_2 >> 0x10);
  *param_4 = uVar2 | uVar1 * 0x10000;
  return;
}


