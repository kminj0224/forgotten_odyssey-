/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001571b8  Symbol: FUN_001571b8 */

int FUN_001571b8(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = DAT_001571f8;
  puVar3 = (uint *)(DAT_001571f8 + 0x1571c2);
  if (((*puVar3 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar3), iVar2 != 0)) {
    *(undefined4 *)(iVar1 + 0x1571c6) = 0;
    *(undefined4 *)(iVar1 + 0x1571ca) = 0;
    *(undefined4 *)(iVar1 + 0x1571ce) = 0;
    __cxa_guard_release(puVar3);
    FUN_00201240(iVar1 + 0x1571c6,*(undefined4 *)(DAT_001571fc + 0x1571e6),
                 *(undefined4 *)(DAT_00157200 + 0x1571e8));
  }
  return (int)&DAT_001571f8 + DAT_00157204;
}


