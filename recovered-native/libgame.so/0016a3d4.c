/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a3d4  Symbol: png_get_bKGD */

undefined4 png_get_bKGD(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (int *)0x0)) ||
     (-1 < *(int *)(param_2 + 8) << 0x1a)) {
    uVar1 = 0;
  }
  else {
    *param_3 = param_2 + 0x5a;
    uVar1 = 0x20;
  }
  return uVar1;
}


