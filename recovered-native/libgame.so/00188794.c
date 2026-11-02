/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188794  Symbol: FUN_00188794 */

undefined4 FUN_00188794(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0017b200(param_1,param_4);
  if ((param_3 != 0) && (iVar1 = FUN_001a4238(param_3), iVar1 != 0)) {
    FUN_00179f9c(param_1,iVar1);
  }
  if (((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x24), iVar1 != 0)) &&
     (*(int *)(iVar1 + 4) == 0)) {
    uVar2 = FUN_0019c904(param_2);
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  FUN_00188468(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        FUN_0018ba54();
      }
      uVar2 = 0;
      goto LAB_001887f6;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
LAB_001887f6:
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_5 == 0) {
    FUN_00179908(param_1);
  }
  return uVar2;
}


