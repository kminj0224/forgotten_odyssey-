/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a5b0  Symbol: png_get_iCCP */

undefined4
png_get_iCCP(int param_1,int param_2,undefined4 *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (((uVar1 = 0x1000, (*(uint *)(param_2 + 8) & 0x1000) == 0 || (param_6 == (undefined4 *)0x0)) ||
      (param_5 == (undefined4 *)0x0)))) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xc4);
    *param_5 = *(undefined4 *)(param_2 + 200);
    *param_6 = *(undefined4 *)(param_2 + 0xcc);
    *param_4 = (uint)*(byte *)(param_2 + 0xd0);
  }
  return uVar1;
}


