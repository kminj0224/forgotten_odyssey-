/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001895e8  Symbol: FUN_001895e8 */

uint FUN_001895e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      iVar1 = param_1;
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      iVar2 = *(int *)(iVar1 + 4);
      if ((((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 8)) || (iVar2 == 7)) {
        return (uint)*(ushort *)(iVar1 + 0x38);
      }
      param_1 = *(int *)(iVar1 + 0x1c);
    } while ((param_1 != 0) &&
            (((iVar2 = *(int *)(param_1 + 4), iVar2 == 3 || (iVar2 == 1)) ||
             ((iVar2 == 8 || (iVar2 == 7))))));
    param_1 = *(int *)(iVar1 + 0x14);
    if (param_1 == 0) {
      return 0xffffffff;
    }
  } while (*(int *)(param_1 + 4) == 1);
  return 0xffffffff;
}


