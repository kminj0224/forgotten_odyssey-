/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172a40  Symbol: png_malloc */

int png_malloc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00172a88 + 0x172a4a;
  if ((param_2 == 0) || (param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(code **)(param_1 + 0x304) == (code *)0x0) {
      iVar2 = png_malloc_default();
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x304))();
    }
    if (iVar2 == 0) {
      if (-1 < *(int *)(param_1 + 0x130) << 0xb) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar1 + DAT_00172a8c);
      }
    }
  }
  return iVar2;
}


