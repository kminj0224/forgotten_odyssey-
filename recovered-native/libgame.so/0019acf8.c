/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019acf8  Symbol: FUN_0019acf8 */

undefined4 FUN_0019acf8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0019ad20 + 0x19ad04 + DAT_0019ad24);
  do {
    if (*piVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_0019c398(*piVar2,param_1);
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0);
  return 1;
}


