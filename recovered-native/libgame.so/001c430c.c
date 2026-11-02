/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c430c  Symbol: FUN_001c430c */

void FUN_001c430c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_001c4348 + 0x1c432c;
  *piVar1 = *(int *)(iVar2 + DAT_001c434c) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_001c4350),*(undefined4 *)(iVar2 + DAT_001c4354));
}


