/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176ec4  Symbol: png_write_tEXt */

void png_write_tEXt(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 local_24;
  undefined local_20;
  undefined4 local_1c;
  
  iVar2 = DAT_00176f54 + 0x176ed4 + DAT_00176f58;
  local_24 = *(undefined4 *)(iVar2 + 0x50);
  local_20 = *(undefined *)(iVar2 + 0x54);
  iVar2 = png_check_keyword(param_1,param_2,&local_1c);
  if (iVar2 != 0) {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      png_write_chunk_start(param_1,&local_24,iVar2 + 1);
      png_write_chunk_data(param_1,local_1c,iVar2 + 1);
    }
    else {
      sVar1 = strlen(param_3);
      png_write_chunk_start(param_1,&local_24,sVar1 + iVar2 + 1);
      png_write_chunk_data(param_1,local_1c,iVar2 + 1);
      if (sVar1 != 0) {
        png_write_chunk_data(param_1,param_3,sVar1);
      }
    }
    png_write_chunk_end(param_1);
    png_free(param_1,local_1c);
  }
  return;
}


