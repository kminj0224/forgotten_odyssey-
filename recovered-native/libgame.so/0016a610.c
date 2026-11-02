/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a610  Symbol: png_get_hIST */

undefined4 png_get_hIST(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (-1 < *(int *)(param_2 + 8) << 0x19)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x40;
    *param_3 = *(undefined4 *)(param_2 + 0x7c);
  }
  return uVar1;
}


