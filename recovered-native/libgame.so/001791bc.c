/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001791bc  Symbol: png_default_write_data */

void png_default_write_data(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = DAT_001791e8 + 0x1791c8;
  if ((param_1 != 0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x118)), param_3 != sVar1)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar2 + DAT_001791ec);
  }
  return;
}


