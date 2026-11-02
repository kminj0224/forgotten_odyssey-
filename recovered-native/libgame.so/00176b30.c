/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176b30  Symbol: png_write_chunk_start */

void png_write_chunk_start(int param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  int local_24;
  
  iVar1 = DAT_00176bb8;
  iVar2 = DAT_00176bb4 + 0x176b42;
  local_24 = **(int **)(iVar2 + DAT_00176bb8);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x34c) = 0x22;
    png_save_uint_32(auStack_2c,param_3);
    memcpy(auStack_28,param_2,4);
    png_write_data(param_1,auStack_2c,8);
    memcpy((void *)(param_1 + 0x1e0),param_2,4);
    png_reset_crc(param_1);
    png_calculate_crc(param_1,param_2,4);
    *(undefined4 *)(param_1 + 0x34c) = 0x42;
  }
  if (local_24 == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


