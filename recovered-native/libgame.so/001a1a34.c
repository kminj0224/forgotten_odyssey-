/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1a34  Symbol: FUN_001a1a34 */

int FUN_001a1a34(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_001a1940(param_2,param_3,param_3,param_4,param_4);
  iVar4 = DAT_001a1a94 + 0x1a1a4a;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_001a4238(param_2);
    if (iVar2 == 0) {
      (***(code ***)(iVar4 + DAT_001a1a98))(iVar1);
      return 0;
    }
  }
  iVar3 = FUN_0018f9f8(param_1,iVar2);
  if (iVar3 == 0) {
    (***(code ***)(iVar4 + DAT_001a1a98))(iVar1);
    if (iVar2 != 0) {
      FUN_001a3260(iVar2);
    }
    return 0;
  }
  *(int *)(iVar1 + 0x18) = iVar3;
  return iVar1;
}


