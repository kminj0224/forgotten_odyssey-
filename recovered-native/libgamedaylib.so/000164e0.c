/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000164e0  Symbol: __cxa_bad_cast */

void __cxa_bad_cast(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00016518 + 0x164fc;
  *piVar1 = *(int *)(iVar2 + DAT_0001651c) + 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar1,*(undefined4 *)(iVar2 + DAT_00016520),*(undefined4 *)(iVar2 + DAT_00016524),
              iVar2,in_r3);
}


