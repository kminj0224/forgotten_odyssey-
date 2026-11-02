/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a790  Symbol: png_get_text */

int png_get_text(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  if (((param_2 == 0) || (param_1 == 0)) || (iVar1 = *(int *)(param_2 + 0x30), iVar1 < 1)) {
    iVar1 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x38);
      iVar1 = *(int *)(param_2 + 0x30);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1;
      iVar1 = *(int *)(param_2 + 0x30);
    }
  }
  return iVar1;
}


