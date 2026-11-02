/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016c0c  Symbol: __cxa_bad_cast */

void __cxa_bad_cast(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00016c44 + 0x16c28;
  *piVar1 = *(int *)(iVar2 + DAT_00016c48) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00016c4c),*(undefined4 *)(iVar2 + DAT_00016c50),
              iVar2,in_r3);
}


