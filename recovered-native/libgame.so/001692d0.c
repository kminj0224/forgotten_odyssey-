/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001692d0  Symbol: png_permit_mng_features */

uint png_permit_mng_features(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 & 5;
    *(uint *)(param_1 + 0x2f4) = uVar1;
  }
  return uVar1;
}


