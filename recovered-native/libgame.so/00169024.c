/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169024  Symbol: png_create_info_struct */

int png_create_info_struct(int param_1)

{
  int local_c [3];
  
  local_c[0] = 0;
  if (param_1 != 0) {
    local_c[0] = png_create_struct_2(2,*(undefined4 *)(param_1 + 0x304),
                                     *(undefined4 *)(param_1 + 0x300));
    if (local_c[0] != 0) {
      png_info_init_3(local_c,0x120);
    }
  }
  return local_c[0];
}


