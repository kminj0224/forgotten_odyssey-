/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ce14  Symbol: png_destroy_write_struct */

void png_destroy_write_struct(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    iVar3 = *param_1;
    uVar1 = *(undefined4 *)(iVar3 + 0x308);
    uVar2 = *(undefined4 *)(iVar3 + 0x300);
  }
  if ((param_2 != (int *)0x0) && (iVar4 = *param_2, iVar4 != 0)) {
    if (iVar3 != 0) {
      png_free_data(iVar3,iVar4,DAT_0016ceac,0xffffffff);
      if (*(int *)(iVar3 + 0x2e4) != 0) {
        png_free(iVar3,*(undefined4 *)(iVar3 + 0x2e8));
        *(undefined4 *)(iVar3 + 0x2e4) = 0;
      }
    }
    png_destroy_struct_2(iVar4,uVar1,uVar2);
    *param_2 = 0;
  }
  if (iVar3 != 0) {
    png_write_destroy(iVar3);
    png_destroy_struct_2(iVar3,uVar1,uVar2);
    *param_1 = 0;
  }
  return;
}


