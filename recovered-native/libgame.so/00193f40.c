/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193f40  Symbol: FUN_00193f40 */

undefined4 FUN_00193f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  iVar3 = DAT_00193fa8 + 0x193f4c;
  if (param_1 != 0) {
    local_1c[0] = 0;
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 != 0) {
      iVar1 = FUN_0018b188(param_3,local_1c);
      if (iVar1 != 0) {
        uVar2 = FUN_0018eae4(iVar4,iVar1,local_1c[0],param_2);
        if (local_1c[0] != 0) {
          (***(code ***)(iVar3 + DAT_00193fac))();
        }
        (***(code ***)(iVar3 + DAT_00193fac))(iVar1);
        return uVar2;
      }
      uVar2 = FUN_0018eae4(iVar4,param_3,0,param_2);
      return uVar2;
    }
  }
  return 0;
}


