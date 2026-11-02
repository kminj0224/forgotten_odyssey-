/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177788  Symbol: png_write_tRNS */

void png_write_tRNS(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char local_28 [2];
  char local_26 [2];
  char local_24 [4];
  undefined4 local_20;
  undefined local_1c;
  
  iVar1 = DAT_00177870 + 0x177798;
  local_20 = *(undefined4 *)(iVar1 + DAT_00177874 + 0x28);
  local_1c = *(undefined *)(iVar1 + DAT_00177874 + 0x2c);
  if (param_5 == 3) {
    if ((param_4 < 1) || ((int)(uint)*(ushort *)(param_1 + 0x1dc) < param_4)) {
      png_warning(param_1,iVar1 + DAT_00177884);
    }
    else {
      png_write_chunk(param_1,&local_20,param_2);
    }
  }
  else if (param_5 == 0) {
    if ((int)(uint)*(ushort *)(param_3 + 8) < 1 << *(sbyte *)(param_1 + DAT_0017787c)) {
      png_save_uint_16(local_28);
      png_write_chunk(param_1,&local_20,local_28,2);
    }
    else {
      png_warning(param_1,iVar1 + DAT_00177880);
    }
  }
  else if (param_5 == 2) {
    png_save_uint_16(local_28,*(undefined2 *)(param_3 + 2));
    png_save_uint_16(local_26,*(undefined2 *)(param_3 + 4));
    png_save_uint_16(local_24,*(undefined2 *)(param_3 + 6));
    if ((*(char *)(param_1 + DAT_0017787c) == '\b') &&
       (((local_26[0] != '\0' || (local_28[0] != '\0')) || (local_24[0] != '\0')))) {
      png_warning(param_1,iVar1 + DAT_00177888);
    }
    else {
      png_write_chunk(param_1,&local_20,local_28,6);
    }
  }
  else {
    png_warning(param_1,iVar1 + DAT_00177878);
  }
  return;
}


