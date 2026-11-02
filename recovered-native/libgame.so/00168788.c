/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168788  Symbol: png_check_IHDR */

void png_check_IHDR(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                   int param_7,int param_8)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_001689a8 + 0x1687a2;
  if (param_2 == 0) {
    png_warning(param_1,iVar1 + DAT_001689ec);
  }
  if (param_3 == 0) {
    png_warning(param_1,iVar1 + DAT_001689e8);
  }
  bVar2 = param_3 == 0 || param_2 == 0;
  if ((DAT_001689ac < param_2) || (*(uint *)(param_1 + 800) < param_2)) {
    png_warning(param_1,iVar1 + DAT_001689b0);
    bVar2 = true;
  }
  if ((DAT_001689ac < param_3) || (*(uint *)(param_1 + 0x324) < param_3)) {
    png_warning(param_1,iVar1 + DAT_001689b4);
    bVar2 = true;
  }
  if ((int)param_2 < 0) {
    png_warning(param_1,iVar1 + DAT_001689d4);
    bVar2 = true;
  }
  if ((int)param_3 < 0) {
    png_warning(param_1,iVar1 + DAT_001689d8);
    bVar2 = true;
  }
  if (DAT_001689b8 < param_2) {
    png_warning(param_1,iVar1 + DAT_001689dc);
  }
  if ((((1 < param_4 - 1U) && (param_4 != 4)) && (param_4 != 0x10)) && (param_4 != 8)) {
    png_warning(param_1,iVar1 + DAT_001689bc);
    bVar2 = true;
  }
  if (((param_5 == 1) || (param_5 < 0)) || ((6 < param_5 || (param_5 == 5)))) {
    png_warning(param_1,iVar1 + DAT_001689c0);
    bVar2 = true;
    if (param_5 != 3) goto LAB_00168840;
LAB_00168928:
    if (param_4 < 9) goto LAB_00168852;
  }
  else {
    if (param_5 == 3) goto LAB_00168928;
LAB_00168840:
    if ((((param_5 != 4) && (param_5 != 2)) && (param_5 != 6)) || (7 < param_4)) goto LAB_00168852;
  }
  png_warning(param_1,iVar1 + DAT_001689e0);
  bVar2 = true;
LAB_00168852:
  if (1 < param_6) {
    png_warning(param_1,iVar1 + DAT_001689c4);
    bVar2 = true;
  }
  if (param_7 != 0) {
    png_warning(param_1,iVar1 + DAT_001689e4);
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 300) << 0x13 < 0) && (*(int *)(param_1 + 0x2f4) != 0)) {
    png_warning(param_1,iVar1 + DAT_001689f0);
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && (*(int *)(param_1 + 0x2f4) << 0x1d < 0)) &&
       (-1 < *(int *)(param_1 + 300) << 0x13)) && ((param_5 == 6 || (param_5 == 2)))))) {
    if (!bVar2) {
      return;
    }
  }
  else {
    png_warning(param_1,iVar1 + DAT_001689c8);
    if (*(int *)(param_1 + 300) << 0x13 < 0) {
      png_warning(param_1,iVar1 + DAT_001689cc);
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,iVar1 + DAT_001689d0);
}


