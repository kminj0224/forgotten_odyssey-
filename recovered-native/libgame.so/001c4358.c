/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4358  Symbol: FUN_001c4358 */

void FUN_001c4358(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_001c4394 + 0x1c4378;
  *piVar1 = *(int *)(iVar2 + DAT_001c4398) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_001c439c),*(undefined4 *)(iVar2 + DAT_001c43a0));
}


