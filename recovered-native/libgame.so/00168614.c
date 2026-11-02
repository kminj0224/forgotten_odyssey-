/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168614  Symbol: png_check_cHRM_fixed */

undefined4
png_check_cHRM_fixed
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
          int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  
  iVar1 = DAT_0016872c + 0x168630;
  if (param_1 != 0) {
    if (((((param_3 < 1) || (param_2 < 0)) || (param_5 < 0)) || ((param_4 < 0 || (param_7 < 0)))) ||
       ((param_6 < 0 || ((param_9 < 0 || (uVar2 = 1, param_8 < 0)))))) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_00168730);
    }
    if (DAT_00168734 - param_3 < param_2) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_00168744);
    }
    if (DAT_00168734 - param_5 < param_4) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_00168740);
    }
    if (DAT_00168734 - param_7 < param_6) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_0016873c);
    }
    if (DAT_00168734 - param_9 < param_8) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_00168738);
    }
    png_64bit_product(param_6 - param_4,param_9 - param_5,local_2c,&local_30);
    png_64bit_product(param_7 - param_5,param_8 - param_4,&local_34,&local_38);
    if ((local_2c[0] == local_34) && (local_30 == local_38)) {
      uVar2 = 0;
      png_warning(param_1,iVar1 + DAT_00168748);
    }
    return uVar2;
  }
  return 0;
}


