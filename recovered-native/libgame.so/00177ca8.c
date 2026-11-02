/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177ca8  Symbol: png_write_IEND */

void png_write_IEND(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined local_c;
  
  iVar1 = DAT_00177cdc + 0x177cb4 + DAT_00177ce0;
  local_10 = *(undefined4 *)(iVar1 + 0x60);
  local_c = *(undefined *)(iVar1 + 100);
  png_write_chunk(param_1,&local_10,0,0);
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x10;
  return;
}


