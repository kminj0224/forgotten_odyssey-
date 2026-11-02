/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176f5c  Symbol: png_write_zTXt */

void png_write_zTXt(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                   int param_5)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined4 local_28;
  undefined local_24 [8];
  
  iVar3 = DAT_0017701c + 0x176f7a + DAT_00177020;
  local_30 = *(undefined4 *)(iVar3 + 0x58);
  local_2c = *(undefined *)(iVar3 + 0x5c);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar3 = png_check_keyword(param_1,param_2,&local_28);
  if (iVar3 != 0) {
    if (((param_3 != (char *)0x0) && (param_5 != -1)) && (*param_3 != '\0')) {
      sVar1 = strlen(param_3);
      iVar2 = FUN_00176524(param_1,param_3,sVar1,param_5,&local_44);
      png_write_chunk_start(param_1,&local_30,iVar3 + 2 + iVar2);
      png_write_chunk_data(param_1,local_28,iVar3 + 1);
      png_free(param_1,local_28);
      local_24[0] = (undefined)param_5;
      png_write_chunk_data(param_1,local_24,1);
      FUN_00176a90(param_1,&local_44);
      png_write_chunk_end(param_1);
      return;
    }
    png_write_tEXt(param_1,local_28,param_3,0);
  }
  png_free(param_1,local_28);
  return;
}


