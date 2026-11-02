/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c87b4  Symbol: FUN_001c87b4 */

int FUN_001c87b4(void)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(DAT_001c8840 + 0x1c87c4) & 1) == 0) && (iVar1 = __cxa_guard_acquire(), iVar1 != 0)
     ) {
    FUN_001c7d38(DAT_001c8848 + 0x1c87f0);
    piVar2 = (int *)(DAT_001c8850 + 0x1c8808);
    iVar1 = DAT_001c8854 + 0x1c8810;
    *piVar2 = DAT_001c884c + 0x1c8808;
    __cxa_guard_release(iVar1);
    FUN_00201240(piVar2,DAT_001c8858 + 0x1c8828,*(undefined4 *)(DAT_001c885c + 0x1c882c));
  }
  return DAT_001c8844 + 0x1c87d8;
}


