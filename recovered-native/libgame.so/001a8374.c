/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8374  Symbol: jpeg_set_quality */

void jpeg_set_quality(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = jpeg_quality_scaling(param_2);
  jpeg_set_linear_quality(param_1,uVar1,param_3);
  return;
}


