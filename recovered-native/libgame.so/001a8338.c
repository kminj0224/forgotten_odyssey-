/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8338  Symbol: jpeg_set_linear_quality */

void jpeg_set_linear_quality(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_001a8368 + 0x1a8346;
  jpeg_add_quant_table(param_1,0,iVar1 + DAT_001a836c,param_2,param_3);
  jpeg_add_quant_table(param_1,1,iVar1 + DAT_001a8370,param_2,param_3);
  return;
}


