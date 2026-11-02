/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189818  Symbol: FUN_00189818 */

undefined4 FUN_00189818(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    if (((param_2 == 0) || (iVar1 = *(int *)(param_2 + 4), iVar1 - 5U < 2)) || (iVar1 == 0x11))
    break;
    if (iVar1 == 1) {
      for (puVar2 = *(undefined4 **)(param_2 + 0x30); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        iVar1 = puVar2[3];
        if (param_4 == 0) {
          if (iVar1 == 0) {
            return 0;
          }
        }
        else if ((iVar1 != 0) && (iVar1 = FUN_0019c30c(iVar1,param_4), iVar1 != 0)) {
          return 0;
        }
      }
    }
    param_2 = *(int *)(param_2 + 0x14);
  }
  return 0xffffffff;
}


