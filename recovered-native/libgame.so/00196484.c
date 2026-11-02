/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196484  Symbol: FUN_00196484 */

undefined4 FUN_00196484(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
LAB_001964c2:
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_0019c30c(param_2,*(undefined4 *)(param_3 + 8));
    if (iVar1 == 0) {
      iVar1 = FUN_00196118(*(undefined4 *)(param_3 + 8),param_2);
      if (iVar1 != 0) goto LAB_001964c2;
      for (iVar1 = *(int *)(param_3 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar2 = FUN_00196484(param_1,param_2,iVar1);
        if (iVar2 != 0) goto LAB_001964c2;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


