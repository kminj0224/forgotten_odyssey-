/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178048  Symbol: png_write_filtered_row */

void png_write_filtered_row(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x1c8) + 1;
  iVar3 = DAT_00178130 + 0x17807e + DAT_00178134;
  do {
    while( true ) {
      iVar1 = deflate(param_1 + 0x138,0);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1);
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar3);
      }
      if (*(int *)(param_1 + 0x148) != 0) break;
      png_write_IDAT(param_1,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
      if (*(int *)(param_1 + 0x13c) == 0) goto LAB_001780de;
    }
  } while (*(int *)(param_1 + 0x13c) != 0);
LAB_001780de:
  if (*(int *)(param_1 + 0x1ac) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1b0);
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  }
  png_write_finish_row(param_1);
  uVar4 = *(int *)(param_1 + 0x218) + 1;
  *(uint *)(param_1 + 0x218) = uVar4;
  if ((*(uint *)(param_1 + 0x214) != 0) && (*(uint *)(param_1 + 0x214) <= uVar4)) {
    png_write_flush(param_1);
  }
  return;
}


