/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201db4  Symbol: __cxa_bad_cast */

void __cxa_bad_cast(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00201dec + 0x201dd0;
  *piVar1 = *(int *)(iVar2 + DAT_00201df0) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00201df4),*(undefined4 *)(iVar2 + DAT_00201df8),
              iVar2,in_r3);
}


