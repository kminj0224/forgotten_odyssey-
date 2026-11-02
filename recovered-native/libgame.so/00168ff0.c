/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168ff0  Symbol: png_destroy_info_struct */

void png_destroy_info_struct(int param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (iVar1 = *param_2, iVar1 != 0)) {
    png_info_destroy(param_1,iVar1);
    png_destroy_struct_2(iVar1,*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x300));
    *param_2 = 0;
  }
  return;
}


