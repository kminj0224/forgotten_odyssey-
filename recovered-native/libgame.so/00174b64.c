/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174b64  Symbol: png_handle_oFFs */

void png_handle_oFFs(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  
  iVar1 = DAT_00174c64;
  iVar4 = DAT_00174c60 + 0x174b74;
  local_1c = **(int **)(iVar4 + DAT_00174c64);
  if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar4 + DAT_00174c6c);
  }
  iVar2 = DAT_00174c74;
  if ((*(int *)(param_1 + 300) << 0x1d < 0) ||
     (((param_2 != 0 && (iVar2 = DAT_00174c70, *(int *)(param_2 + 8) << 0x17 < 0)) ||
      (iVar2 = DAT_00174c68, param_3 != 9)))) {
    png_warning(param_1,iVar4 + iVar2);
    png_crc_finish(param_1,param_3);
  }
  else {
    png_crc_read(param_1,&local_28,9);
    iVar2 = png_crc_finish(param_1,0);
    if (iVar2 == 0) {
      iVar2 = (uint)local_28 * 0x1000000;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)local_27 * 0x10000 + (uint)local_25 + (uint)local_26 * 0x100;
      }
      else {
        iVar2 = iVar2 + (uint)local_27 * 0x10000 + (uint)local_25 + (uint)local_26 * 0x100;
      }
      if ((int)((uint)local_24 * 0x1000000) < 0) {
        iVar3 = (uint)local_23 << 0x10;
      }
      else {
        iVar3 = (uint)local_23 * 0x10000;
      }
      png_set_oFFs(param_1,param_2,iVar2,
                   (uint)local_24 * 0x1000000 + iVar3 + (uint)local_21 + (uint)local_22 * 0x100,
                   local_20);
    }
  }
  if (local_1c != **(int **)(iVar4 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


