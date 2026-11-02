/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177344  Symbol: png_write_PLTE */

void png_write_PLTE(int param_1,undefined *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_24;
  undefined local_20;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  
  iVar1 = DAT_00177418 + 0x177354;
  local_24 = *(undefined4 *)(iVar1 + DAT_0017741c + 0x78);
  local_20 = *(undefined *)(iVar1 + DAT_0017741c + 0x7c);
  if (((param_3 == 0) && (-1 < *(int *)(param_1 + 0x2f4) << 0x1f)) || (0x100 < param_3)) {
    if (*(char *)(param_1 + 0x1ea) == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar1 + DAT_00177420);
    }
    png_warning(param_1,iVar1 + DAT_00177420);
  }
  else if ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1e) < 0) {
    *(short *)(param_1 + 0x1dc) = (short)param_3;
    png_write_chunk_start(param_1,&local_24,param_3 * 3);
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        local_1c = *param_2;
        local_1b = param_2[1];
        uVar2 = uVar2 + 1;
        local_1a = param_2[2];
        param_2 = param_2 + 3;
        png_write_chunk_data(param_1,&local_1c,3);
      } while (uVar2 < param_3);
    }
    png_write_chunk_end(param_1);
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 2;
  }
  else {
    png_warning(param_1,iVar1 + DAT_00177424);
  }
  return;
}


