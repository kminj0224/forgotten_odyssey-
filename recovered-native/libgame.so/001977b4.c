/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001977b4  Symbol: FUN_001977b4 */

int FUN_001977b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00197840 + 0x1977c0;
  if (param_1 != 0) {
    uVar1 = FUN_0019c49c();
    param_1 = FUN_0019774c(param_1,uVar1);
    if ((param_1 != 0) && (param_2 != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x24) + 0x2c) != 0) {
        (***(code ***)(iVar2 + DAT_00197844))();
      }
      iVar3 = *(int *)(param_1 + 0x24);
      uVar1 = FUN_0019c904(param_2);
      *(undefined4 *)(iVar3 + 0x2c) = uVar1;
      iVar3 = FUN_001a3e20(param_2);
      if (iVar3 == -1) {
        iVar3 = FUN_001a4238(param_2,0xffffffff);
        if (iVar3 != 0) {
          FUN_00179f9c(param_1,iVar3);
          return param_1;
        }
      }
      else {
        FUN_00179fd4(param_1);
        if (*(int *)(param_1 + 0x54) != 0x20) {
          return param_1;
        }
      }
      FUN_00195ba4(param_1,0x20,iVar2 + DAT_00197848,param_2,0);
    }
  }
  return param_1;
}


