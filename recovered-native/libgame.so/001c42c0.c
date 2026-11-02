/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c42c0  Symbol: FUN_001c42c0 */

void FUN_001c42c0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_001c42fc + 0x1c42e0;
  *piVar1 = *(int *)(iVar2 + DAT_001c4300) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_001c4304),*(undefined4 *)(iVar2 + DAT_001c4308));
}


