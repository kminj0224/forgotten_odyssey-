/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016c54  Symbol: __cxa_bad_typeid */

void __cxa_bad_typeid(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00016c8c + 0x16c70;
  *piVar1 = *(int *)(iVar2 + DAT_00016c90) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00016c94),*(undefined4 *)(iVar2 + DAT_00016c98),
              iVar2,in_r3);
}


