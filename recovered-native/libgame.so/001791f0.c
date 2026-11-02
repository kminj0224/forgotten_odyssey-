/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001791f0  Symbol: png_write_data */

void png_write_data(int param_1)

{
  if (*(code **)(param_1 + 0x110) != (code *)0x0) {
    (**(code **)(param_1 + 0x110))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,DAT_00179210 + 0x1791fe + DAT_00179214);
}


