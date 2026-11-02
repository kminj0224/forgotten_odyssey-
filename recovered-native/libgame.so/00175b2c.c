/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175b2c  Symbol: png_handle_sBIT */

void png_handle_sBIT(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  local_19 = 0;
  local_1a = 0;
  local_1b = 0;
  local_1c = 0;
  iVar2 = *(int *)(param_1 + 300);
  iVar4 = DAT_00175c24 + 0x175b4e;
  if (-1 < iVar2 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar4 + DAT_00175c34);
  }
  iVar1 = DAT_00175c40;
  if (-1 < iVar2 << 0x1d) {
    if (iVar2 << 0x1e < 0) {
      png_warning(param_1,iVar4 + DAT_00175c38);
    }
    if ((param_2 == 0) || (iVar1 = DAT_00175c3c, -1 < *(int *)(param_2 + 8) << 0x1e)) {
      uVar3 = 3;
      if (*(char *)(param_1 + 0x1ea) != '\x03') {
        uVar3 = (uint)*(byte *)(param_1 + 0x1ee);
      }
      iVar1 = DAT_00175c28;
      if ((param_3 == uVar3) && (param_3 < 5)) {
        png_crc_read(param_1,&local_1c,param_3);
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 != 0) {
          return;
        }
        if ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1e) < 0) {
          *(undefined *)(param_1 + 0x240) = local_1c;
          iVar2 = DAT_00175c30;
          *(undefined *)(param_1 + DAT_00175c30) = local_1b;
          *(undefined *)(param_1 + iVar2 + 1) = local_1a;
          *(undefined *)(param_1 + 0x244) = local_19;
        }
        else {
          *(undefined *)(param_1 + DAT_00175c2c) = local_1c;
          *(undefined *)(param_1 + 0x240) = local_1c;
          iVar2 = DAT_00175c30;
          *(undefined *)(param_1 + DAT_00175c30) = local_1c;
          *(undefined *)(param_1 + iVar2 + 1) = local_1c;
          *(undefined *)(param_1 + 0x244) = local_1b;
        }
        png_set_sBIT(param_1,param_2,param_1 + 0x240);
        return;
      }
    }
  }
  png_warning(param_1,iVar4 + iVar1);
  png_crc_finish(param_1,param_3);
  return;
}


