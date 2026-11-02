/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5c20  Symbol: FUN_001a5c20 */

undefined4 FUN_001a5c20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_2 == (int *)0x0) || (param_1 == 0)) {
LAB_001a5c46:
    uVar2 = 1;
  }
  else {
    for (puVar3 = *(undefined4 **)*param_2; puVar3 != (undefined4 *)*param_2;
        puVar3 = (undefined4 *)*puVar3) {
      iVar1 = FUN_001a58d8(param_1,puVar3[2]);
      if (iVar1 != 0) {
        FUN_001a5a44(param_1);
        goto LAB_001a5c46;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


