/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175c44  Symbol: png_handle_gAMA */

void png_handle_gAMA(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  
  iVar3 = *(int *)(param_1 + 300);
  iVar4 = DAT_00175d44 + 0x175c54;
  if (-1 < iVar3 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar4 + DAT_00175d58);
  }
  iVar2 = DAT_00175d60;
  if (-1 < iVar3 << 0x1d) {
    if (iVar3 << 0x1e < 0) {
      png_warning(param_1,iVar4 + DAT_00175d5c);
    }
    if (((param_2 == 0) || (iVar2 = DAT_00175d64, (*(uint *)(param_2 + 8) & DAT_00175d48) != 1)) &&
       (iVar2 = DAT_00175d4c, param_3 == 4)) {
      png_crc_read(param_1,&local_1c,4);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = (uint)local_1c * 0x1000000 + (uint)local_1b * 0x10000 + (uint)local_19 +
              (uint)local_1a * 0x100;
      if (iVar3 != 0) {
        if (((param_2 != 0) && (*(int *)(param_2 + 8) << 0x14 < 0)) &&
           (1000 < (uint)(iVar3 + DAT_00175d50))) {
          png_warning(param_1,iVar4 + DAT_00175d6c);
          fprintf((FILE *)(*(int *)(iVar4 + DAT_00175d70) + 0xa8),(char *)(iVar4 + DAT_00175d74),
                  iVar3);
          return;
        }
        uVar1 = __floatsisf(iVar3);
        uVar1 = __divsf3(uVar1,DAT_00175d54);
        *(undefined4 *)(param_1 + 0x220) = uVar1;
        uVar5 = __extendsfdf2();
        png_set_gAMA(param_1,param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        png_set_gAMA_fixed(param_1,param_2,iVar3);
        return;
      }
      png_warning(param_1,iVar4 + DAT_00175d68);
      return;
    }
  }
  png_warning(param_1,iVar4 + iVar2);
  png_crc_finish(param_1,param_3);
  return;
}


