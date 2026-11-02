/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c49f4  Symbol: FUN_001c49f4 */

void FUN_001c49f4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_001c4a30 + 0x1c4a14;
  *piVar1 = *(int *)(iVar2 + DAT_001c4a34) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_001c4a38),*(undefined4 *)(iVar2 + DAT_001c4a3c));
}


