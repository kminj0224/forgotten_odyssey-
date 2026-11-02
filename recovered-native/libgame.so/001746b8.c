/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001746b8  Symbol: png_handle_tIME */

void png_handle_tIME(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined local_20 [8];
  
  uVar2 = *(uint *)(param_1 + 300);
  iVar3 = DAT_00174768 + 0x1746cc;
  if (-1 < (int)(uVar2 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar3 + DAT_00174770);
  }
  if ((param_2 == 0) || (iVar1 = DAT_00174774, -1 < *(int *)(param_2 + 8) << 0x16)) {
    if ((int)(uVar2 << 0x1d) < 0) {
      *(uint *)(param_1 + 300) = uVar2 | 8;
    }
    iVar1 = DAT_0017476c;
    if (param_3 == 7) {
      png_crc_read(param_1,local_20,7);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) {
        return;
      }
      png_set_tIME(param_1,param_2);
      return;
    }
  }
  png_warning(param_1,iVar3 + iVar1);
  png_crc_finish(param_1,param_3);
  return;
}


