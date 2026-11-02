/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7d78  Symbol: jpeg_quality_scaling */

int jpeg_quality_scaling(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  else {
    if (100 < param_1) {
      return 0;
    }
    if (0x31 < param_1) {
      return (100 - param_1) * 2;
    }
  }
  iVar1 = __divsi3(DAT_001a7d9c,param_1);
  return iVar1;
}


