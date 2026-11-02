/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193dd4  Symbol: FUN_00193dd4 */

undefined4 FUN_00193dd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_3c [24];
  int local_24;
  
  iVar3 = DAT_00193e30 + 0x193de0;
  if (param_1 != 0) {
    iVar1 = FUN_00193d0c();
    if (iVar1 != 0) {
      FUN_001919b8();
      uVar2 = FUN_0019c904(param_1);
      return uVar2;
    }
    iVar1 = FUN_00193d34(param_1);
    if (iVar1 != 0) {
      memset(auStack_3c,0,0x2c);
      local_24 = iVar1;
      uVar2 = FUN_00191d4c(auStack_3c);
      (***(code ***)(iVar3 + DAT_00193e34))(iVar1);
      return uVar2;
    }
  }
  return 0;
}


