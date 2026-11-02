/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015717c  Symbol: FUN_0015717c */

void FUN_0015717c(undefined4 param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)png_get_io_ptr();
  iVar2 = piVar1[2];
  if ((int)(param_3 + iVar2) <= piVar1[1]) {
    memcpy(param_2,(void *)(*piVar1 + iVar2),param_3);
    piVar1[2] = piVar1[2] + param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,DAT_001571b4 + 0x1571b0,piVar1[1],iVar2,param_4);
}


