/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172d64  Symbol: png_get_uint_31 */

int png_get_uint_31(undefined4 param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = (uint)param_2[3] + (uint)*param_2 * 0x1000000 + (uint)param_2[1] * 0x10000 +
          (uint)param_2[2] * 0x100;
  if (-1 < iVar1) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,DAT_00172d90 + 0x172d76 + DAT_00172d94);
}


