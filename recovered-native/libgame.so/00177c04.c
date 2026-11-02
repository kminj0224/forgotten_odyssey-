/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177c04  Symbol: png_write_gAMA_fixed */

void png_write_gAMA_fixed(undefined4 param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined local_18;
  undefined auStack_14 [4];
  
  iVar1 = DAT_00177c38 + 0x177c10 + DAT_00177c3c;
  local_1c = *(undefined4 *)(iVar1 + 0x50);
  local_18 = *(undefined *)(iVar1 + 0x54);
  png_save_uint_32(auStack_14);
  png_write_chunk(param_1,&local_1c,auStack_14,4);
  return;
}


