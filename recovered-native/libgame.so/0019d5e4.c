/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d5e4  Symbol: FUN_0019d5e4 */

undefined4 FUN_0019d5e4(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0019d608 + 0x19d5ee + DAT_0019d60c);
  if (*piVar2 == 0) {
    iVar1 = FUN_0019c2c4();
    piVar2[1] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    *piVar2 = 1;
  }
  return 1;
}


