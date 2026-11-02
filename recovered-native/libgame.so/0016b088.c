/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016b088  Symbol: png_destroy_read_struct */

void png_destroy_read_struct(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (int *)0x0) && (iVar3 = *param_1, iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x308);
    iVar4 = 0;
    uVar2 = *(undefined4 *)(iVar3 + 0x300);
    if (param_2 != (int *)0x0) {
      iVar4 = *param_2;
    }
    iVar5 = 0;
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
    }
    png_read_destroy(iVar3,iVar4,iVar5);
    if (iVar4 != 0) {
      png_free_data(iVar3,iVar4,0x4000,0xffffffff);
      png_destroy_struct_2(iVar4,uVar1,uVar2);
      *param_2 = 0;
    }
    if (iVar5 != 0) {
      png_free_data(iVar3,iVar5,0x4000,0xffffffff);
      png_destroy_struct_2(iVar5,uVar1,uVar2);
      *param_3 = 0;
    }
    png_destroy_struct_2(iVar3,uVar1,uVar2);
    *param_1 = 0;
  }
  return;
}


