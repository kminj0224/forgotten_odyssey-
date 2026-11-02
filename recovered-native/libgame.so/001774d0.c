/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001774d0  Symbol: png_write_pHYs */

void png_write_pHYs(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined local_3c;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_00177550;
  iVar2 = DAT_0017754c + 0x1774e6;
  local_2c = **(int **)(iVar2 + DAT_00177550);
  local_40 = *(undefined4 *)(iVar2 + DAT_00177554 + 8);
  local_3c = *(undefined *)(iVar2 + DAT_00177554 + 0xc);
  if (1 < param_4) {
    png_warning(param_1,iVar2 + DAT_00177558);
  }
  png_save_uint_32(auStack_38,param_2);
  png_save_uint_32(auStack_34,param_3);
  local_30 = (undefined)param_4;
  png_write_chunk(param_1,&local_40,auStack_38,9);
  if (local_2c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


