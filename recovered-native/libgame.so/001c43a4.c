/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c43a4  Symbol: FUN_001c43a4 */

void FUN_001c43a4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_001c43e0 + 0x1c43c4;
  *piVar1 = *(int *)(iVar2 + DAT_001c43e4) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_001c43e8),*(undefined4 *)(iVar2 + DAT_001c43ec));
}


