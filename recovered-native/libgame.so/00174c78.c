/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174c78  Symbol: png_handle_pHYs */

void png_handle_pHYs(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_00174d4c;
  iVar3 = DAT_00174d48 + 0x174c88;
  local_1c = **(int **)(iVar3 + DAT_00174d4c);
  if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar3 + DAT_00174d54);
  }
  iVar2 = DAT_00174d5c;
  if ((*(int *)(param_1 + 300) << 0x1d < 0) ||
     (((param_2 != 0 && (iVar2 = DAT_00174d58, *(int *)(param_2 + 8) << 0x18 < 0)) ||
      (iVar2 = DAT_00174d50, param_3 != 9)))) {
    png_warning(param_1,iVar3 + iVar2);
    png_crc_finish(param_1,param_3);
  }
  else {
    png_crc_read(param_1,&local_28,9);
    iVar2 = png_crc_finish(param_1,0);
    if (iVar2 == 0) {
      png_set_pHYs(param_1,param_2,
                   (uint)local_28 * 0x1000000 + (uint)local_27 * 0x10000 + (uint)local_25 +
                   (uint)local_26 * 0x100,
                   (uint)local_24 * 0x1000000 + (uint)local_23 * 0x10000 + (uint)local_21 +
                   (uint)local_22 * 0x100,local_20);
    }
  }
  if (local_1c != **(int **)(iVar3 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


