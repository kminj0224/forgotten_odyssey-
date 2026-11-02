/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172d1c  Symbol: png_chunk_error */

void png_chunk_error(int param_1,undefined4 param_2)

{
  undefined auStack_70 [84];
  undefined4 local_1c;
  
  local_1c = **(undefined4 **)(DAT_00172d5c + 0x172d28 + DAT_00172d60);
  if (param_1 != 0) {
    FUN_00172b6c(param_1,auStack_70);
                    /* WARNING: Subroutine does not return */
    png_error(param_1,auStack_70);
  }
                    /* WARNING: Subroutine does not return */
  png_error(0,param_2,param_2);
}


