/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018eae4  Symbol: FUN_0018eae4 */

undefined4 FUN_0018eae4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar1 = FUN_0018e83c();
    puVar3 = (undefined4 *)(*param_1 + iVar1 * 0x18);
    if (puVar3[5] != 0) {
      puVar2 = puVar3;
      if (param_1[3] != 0) {
        for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          if (((puVar2[1] == param_2) && (puVar2[2] == param_3)) && (puVar2[3] == param_4)) {
            return puVar2[4];
          }
        }
      }
      for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
        iVar1 = FUN_0019c30c(puVar3[1],param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_0019c30c(puVar3[2],param_3), iVar1 != 0)) &&
           (iVar1 = FUN_0019c30c(puVar3[3],param_4), iVar1 != 0)) {
          return puVar3[4];
        }
      }
    }
  }
  return 0;
}


