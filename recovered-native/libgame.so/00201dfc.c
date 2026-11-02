/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201dfc  Symbol: __cxa_bad_typeid */

void __cxa_bad_typeid(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00201e34 + 0x201e18;
  *piVar1 = *(int *)(iVar2 + DAT_00201e38) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00201e3c),*(undefined4 *)(iVar2 + DAT_00201e40),
              iVar2,in_r3);
}


