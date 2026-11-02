/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d1d8  Symbol: png_write_image */

void png_write_image(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((param_1 != 0) && (iVar1 = png_set_interlace_handling(), 0 < iVar1)) {
    iVar5 = 0;
    do {
      if (*(int *)(param_1 + 400) != 0) {
        uVar3 = 0;
        puVar4 = param_2;
        do {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          png_write_row(param_1,uVar2);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 400));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}


