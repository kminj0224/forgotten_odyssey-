/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194024  Symbol: FUN_00194024 */

undefined4 FUN_00194024(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  iVar3 = DAT_00194084 + 0x194030;
  if ((param_2 != 0) && (param_1 != 0)) {
    local_1c[0] = 0;
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      iVar1 = FUN_0018b188(param_2,local_1c);
      if (iVar1 != 0) {
        param_2 = iVar1;
      }
      uVar2 = FUN_0018eb6c(iVar4,param_2,local_1c[0]);
      if (local_1c[0] != 0) {
        (***(code ***)(iVar3 + DAT_00194088))();
      }
      if (iVar1 == 0) {
        return uVar2;
      }
      (***(code ***)(iVar3 + DAT_00194088))(iVar1);
      return uVar2;
    }
  }
  return 0;
}


