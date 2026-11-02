/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179130  Symbol: png_set_write_fn */

void png_set_write_fn(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00179194 + 0x179138;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x118) = param_2;
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar2 + DAT_001791a0);
    }
    else {
      *(int *)(param_1 + 0x110) = param_3;
    }
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar2 + DAT_001791a4);
    }
    else {
      *(int *)(param_1 + 0x210) = param_4;
    }
    if (*(int *)(param_1 + 0x114) != 0) {
      iVar1 = iVar2 + DAT_00179198;
      *(undefined4 *)(param_1 + 0x114) = 0;
      png_warning(param_1,iVar1);
      png_warning(param_1,iVar2 + DAT_0017919c);
    }
    return;
  }
  return;
}


