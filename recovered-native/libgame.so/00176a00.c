/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176a00  Symbol: png_write_sig */

void png_write_sig(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_00176a64;
  iVar2 = DAT_00176a60 + 0x176a0c;
  local_1c = **(int **)(iVar2 + DAT_00176a64);
  local_24 = *(undefined4 *)(iVar2 + DAT_00176a68 + 0x38);
  local_20 = *(undefined4 *)(iVar2 + DAT_00176a68 + 0x3c);
  *(undefined4 *)(param_1 + 0x34c) = 0x12;
  png_write_data(param_1,(int)&local_24 + (uint)*(byte *)(param_1 + 0x1f0),
                 8 - (uint)*(byte *)(param_1 + 0x1f0));
  if (*(byte *)(param_1 + 0x1f0) < 3) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x1000;
  }
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


