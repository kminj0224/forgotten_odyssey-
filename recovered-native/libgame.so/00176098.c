/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176098  Symbol: png_read_chunk_header */

void png_read_chunk_header(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined auStack_24 [4];
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00176108 + 0x1760a8 + DAT_0017610c);
  local_1c = *piVar3;
  *(undefined4 *)(param_1 + 0x34c) = 0x21;
  png_read_data(param_1,auStack_24,8);
  uVar1 = png_get_uint_31(param_1,auStack_24);
  puVar2 = (undefined4 *)(param_1 + 0x1e0);
  *puVar2 = local_20;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,puVar2,4);
  png_check_chunk_name(param_1,puVar2);
  *(undefined4 *)(param_1 + 0x34c) = 0x41;
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


