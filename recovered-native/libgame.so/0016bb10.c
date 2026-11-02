/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016bb10  Symbol: png_read_image */

void png_read_image(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar1 = png_set_interlace_handling();
    uVar5 = *(uint *)(param_1 + 400);
    *(uint *)(param_1 + 0x194) = uVar5;
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        if (uVar5 != 0) {
          uVar3 = 0;
          puVar4 = param_2;
          do {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            uVar3 = uVar3 + 1;
            png_read_row(param_1,uVar2,0);
          } while (uVar3 < uVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}


