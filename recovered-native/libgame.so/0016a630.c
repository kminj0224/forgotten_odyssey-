/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a630  Symbol: png_get_oFFs */

undefined4
png_get_oFFs(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (((uVar1 = 0x100, (*(uint *)(param_2 + 8) & 0x100) == 0 || (param_5 == (uint *)0x0)) ||
      (param_4 == (undefined4 *)0x0)))) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 100);
    *param_4 = *(undefined4 *)(param_2 + 0x68);
    *param_5 = (uint)*(byte *)(param_2 + 0x6c);
  }
  return uVar1;
}


