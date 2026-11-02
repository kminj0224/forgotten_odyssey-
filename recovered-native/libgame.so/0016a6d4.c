/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a6d4  Symbol: png_get_sCAL */

undefined4
png_get_sCAL(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (((param_2 == 0) || (param_1 == 0)) || (uVar1 = 0x4000, (*(uint *)(param_2 + 8) & 0x4000) == 0)
     ) {
    uVar1 = 0;
  }
  else {
    *param_3 = (uint)*(byte *)(param_2 + 0xdc);
    uVar2 = *(undefined4 *)(param_2 + 0xe4);
    *param_4 = *(undefined4 *)(param_2 + 0xe0);
    param_4[1] = uVar2;
    uVar2 = *(undefined4 *)(param_2 + 0xec);
    *param_5 = *(undefined4 *)(param_2 + 0xe8);
    param_5[1] = uVar2;
  }
  return uVar1;
}


