/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169cfc  Symbol: png_set_PLTE */

void png_set_PLTE(int param_1,int param_2,void *param_3,uint param_4)

{
  void *__dest;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if (param_4 < 0x101) {
      png_free_data(param_1,param_2,0x1000,0);
      __dest = (void *)png_calloc(param_1,0x300);
      *(void **)(param_1 + 0x1d8) = __dest;
      memcpy(__dest,param_3,param_4 * 3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x1d8);
      *(short *)(param_1 + 0x1dc) = (short)param_4;
      *(short *)(param_2 + 0x14) = (short)param_4;
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x1000;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    }
    else {
      if (*(char *)(param_2 + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,DAT_00169d90 + 0x169d0e + DAT_00169d94);
      }
      png_warning(param_1,DAT_00169d90 + 0x169d0e + DAT_00169d94);
    }
  }
  return;
}


