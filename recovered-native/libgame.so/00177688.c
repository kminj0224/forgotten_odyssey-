/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177688  Symbol: png_write_bKGD */

void png_write_bKGD(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte local_28 [2];
  char local_26 [2];
  char local_24 [4];
  undefined4 local_20;
  undefined local_1c;
  
  iVar1 = DAT_00177770 + 0x177698;
  local_20 = *(undefined4 *)(iVar1 + DAT_00177774 + 0x20);
  local_1c = *(undefined *)(iVar1 + DAT_00177774 + 0x24);
  if (param_3 != 3) {
    if (-1 < param_3 << 0x1e) {
      if ((int)(uint)*(ushort *)(param_2 + 8) < 1 << *(sbyte *)(param_1 + DAT_00177778)) {
        png_save_uint_16(local_28);
        png_write_chunk(param_1,&local_20,local_28,2);
        return;
      }
      png_warning(param_1,iVar1 + DAT_00177780);
      return;
    }
    png_save_uint_16(local_28,*(undefined2 *)(param_2 + 2));
    png_save_uint_16(local_26,*(undefined2 *)(param_2 + 4));
    png_save_uint_16(local_24,*(undefined2 *)(param_2 + 6));
    if ((*(char *)(param_1 + DAT_00177778) == '\b') &&
       (((local_26[0] != '\0' || (local_28[0] != 0)) || (local_24[0] != '\0')))) {
      png_warning(param_1,iVar1 + DAT_0017777c);
      return;
    }
    png_write_chunk(param_1,&local_20,local_28,6);
    return;
  }
  if (*(ushort *)(param_1 + 0x1dc) == 0) {
    if (-1 < *(int *)(param_1 + 0x2f4) << 0x1f) goto LAB_00177744;
    local_28[0] = *param_2;
  }
  else {
    local_28[0] = *param_2;
    if (*(ushort *)(param_1 + 0x1dc) <= (ushort)local_28[0]) {
LAB_00177744:
      png_warning(param_1,iVar1 + DAT_00177784);
      return;
    }
  }
  png_write_chunk(param_1,&local_20,local_28,1);
  return;
}


