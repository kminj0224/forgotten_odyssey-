/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015cf4  Symbol: FUN_00015cf4 */

void FUN_00015cf4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar4 = DAT_00015d24 + 0x15d18;
  iVar2 = DAT_00015d28 + 0x15d1c;
  iVar3 = DAT_00015d2c + 0x15d20;
  *piVar1 = iVar4;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,iVar2,iVar3,iVar4,in_r3);
}


