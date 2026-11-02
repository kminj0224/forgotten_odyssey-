/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a5f4  Symbol: png_get_sPLT */

undefined4 png_get_sPLT(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xd4);
    uVar1 = *(undefined4 *)(param_2 + 0xd8);
  }
  return uVar1;
}


