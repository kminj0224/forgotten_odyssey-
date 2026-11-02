/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017744c  Symbol: png_write_tIME */

void png_write_tIME(undefined4 param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  undefined auStack_28 [2];
  undefined local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined4 local_20;
  undefined local_1c;
  
  puVar1 = (undefined4 *)(DAT_001774c4 + 0x177458 + DAT_001774c8);
  local_20 = *puVar1;
  local_1c = *(undefined *)(puVar1 + 1);
  if (((((byte)(*(char *)(param_2 + 1) - 1U) < 0xc) && (*(byte *)((int)param_2 + 3) < 0x20)) &&
      (*(byte *)((int)param_2 + 3) != 0)) &&
     ((*(byte *)(param_2 + 2) < 0x18 && (*(byte *)(param_2 + 3) < 0x3d)))) {
    png_save_uint_16(auStack_28,*param_2);
    local_26 = *(undefined *)(param_2 + 1);
    local_25 = *(undefined *)((int)param_2 + 3);
    local_24 = *(undefined *)(param_2 + 2);
    local_23 = *(undefined *)((int)param_2 + 5);
    local_22 = *(undefined *)(param_2 + 3);
    png_write_chunk(param_1,&local_20,auStack_28,7);
  }
  else {
    png_warning(param_1,DAT_001774c4 + 0x177458 + DAT_001774cc);
  }
  return;
}


