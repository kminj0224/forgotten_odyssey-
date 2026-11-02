/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a58c  Symbol: png_get_sRGB */

undefined4 png_get_sRGB(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (uint *)0x0)) ||
     (uVar1 = 0x800, (*(uint *)(param_2 + 8) & 0x800) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = (uint)*(byte *)(param_2 + 0x2c);
  }
  return uVar1;
}


