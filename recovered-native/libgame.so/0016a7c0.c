/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a7c0  Symbol: png_get_tIME */

undefined4 png_get_tIME(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (int *)0x0)) ||
     (uVar1 = 0x200, (*(uint *)(param_2 + 8) & 0x200) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = param_2 + 0x3c;
  }
  return uVar1;
}


