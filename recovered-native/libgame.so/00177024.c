/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177024  Symbol: png_write_hIST */

void png_write_hIST(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined local_20;
  undefined auStack_1c [4];
  
  iVar1 = DAT_00177098 + 0x177034 + DAT_0017709c;
  local_24 = *(undefined4 *)(iVar1 + 0x60);
  local_20 = *(undefined *)(iVar1 + 100);
  if ((int)(uint)*(ushort *)(param_1 + 0x1dc) < param_3) {
    png_warning(param_1,DAT_00177098 + 0x177034 + DAT_001770a0);
  }
  else {
    png_write_chunk_start(param_1,&local_24,param_3 << 1);
    if (0 < param_3) {
      iVar1 = 0;
      do {
        png_save_uint_16(auStack_1c,*param_2);
        iVar1 = iVar1 + 1;
        png_write_chunk_data(param_1,auStack_1c,2);
        param_2 = param_2 + 1;
      } while (iVar1 < param_3);
    }
    png_write_chunk_end(param_1);
  }
  return;
}


