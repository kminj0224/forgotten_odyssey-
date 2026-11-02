/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016528  Symbol: __cxa_bad_typeid */

void __cxa_bad_typeid(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00016560 + 0x16544;
  *piVar1 = *(int *)(iVar2 + DAT_00016564) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00016568),*(undefined4 *)(iVar2 + DAT_0001656c),
              iVar2,in_r3);
}


