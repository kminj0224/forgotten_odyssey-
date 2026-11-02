/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177bbc  Symbol: png_write_sRGB */

void png_write_sRGB(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined local_18;
  undefined local_14 [4];
  
  iVar1 = DAT_00177bf8 + 0x177bc8 + DAT_00177bfc;
  local_1c = *(undefined4 *)(iVar1 + 0x48);
  local_18 = *(undefined *)(iVar1 + 0x4c);
  if (3 < param_2) {
    png_warning(param_1,DAT_00177bf8 + 0x177bc8 + DAT_00177c00);
  }
  local_14[0] = (undefined)param_2;
  png_write_chunk(param_1,&local_1c,local_14,1);
  return;
}


