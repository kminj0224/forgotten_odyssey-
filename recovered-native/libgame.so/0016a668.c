/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a668  Symbol: png_get_pCAL */

undefined4
png_get_pCAL(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  
  if ((((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
       ((-1 < *(int *)(param_2 + 8) << 0x15 || (param_5 == (undefined4 *)0x0)))) ||
      ((param_4 == (undefined4 *)0x0 || ((param_7 == (uint *)0x0 || (param_6 == (uint *)0x0)))))) ||
     ((param_9 == (undefined4 *)0x0 || (param_8 == (undefined4 *)0x0)))) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xa0);
    *param_4 = *(undefined4 *)(param_2 + 0xa4);
    *param_5 = *(undefined4 *)(param_2 + 0xa8);
    *param_6 = (uint)*(byte *)(param_2 + 0xb4);
    *param_7 = (uint)*(byte *)(param_2 + 0xb5);
    *param_8 = *(undefined4 *)(param_2 + 0xac);
    *param_9 = *(undefined4 *)(param_2 + 0xb0);
    uVar1 = 0x400;
  }
  return uVar1;
}


