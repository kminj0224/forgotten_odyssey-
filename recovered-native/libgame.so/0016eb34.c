/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016eb34  Symbol: png_build_grayscale_palette */

void png_build_grayscale_palette(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 != 0) && (param_1 - 1U < 8)) {
    iVar2 = (param_1 - 1U) * 4;
    iVar4 = DAT_0016eb74 + 0x16eb3c + DAT_0016eb78;
    iVar3 = *(int *)(iVar2 + iVar4);
    iVar2 = *(int *)(iVar4 + iVar2 + 0x20);
    if (0 < iVar3) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        uVar1 = (undefined)iVar4;
        iVar6 = param_2 + iVar5;
        *(undefined *)(param_2 + iVar5) = uVar1;
        iVar5 = iVar5 + 3;
        *(undefined *)(iVar6 + 1) = uVar1;
        *(undefined *)(iVar6 + 2) = uVar1;
        iVar4 = iVar4 + iVar2;
      } while (iVar5 != iVar3 * 3);
    }
  }
  return;
}


