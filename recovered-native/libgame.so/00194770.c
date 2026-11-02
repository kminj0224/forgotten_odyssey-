/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194770  Symbol: FUN_00194770 */

undefined4 * FUN_00194770(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *__s;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00194820 + 0x19477c;
  if (((param_2 != 0) && (param_3 != 0)) && ((param_5 != 0 || (param_4 != 0)))) {
    iVar3 = *(int *)(param_2 + 0x24);
    if (iVar3 == 0) {
      uVar1 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x50);
      }
      iVar3 = FUN_0018f404(0,uVar1);
      *(int *)(param_2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        FUN_00194208(param_1,iVar2 + DAT_00194824);
        return (undefined4 *)0x0;
      }
    }
    __s = (undefined4 *)(***(code ***)(iVar2 + DAT_00194828))(0xc);
    if (__s == (undefined4 *)0x0) {
      FUN_00194208(param_1,iVar2 + DAT_0019482c);
      return (undefined4 *)0x0;
    }
    memset(__s,0,0xc);
    uVar1 = FUN_0019c904(param_3);
    *__s = uVar1;
    if (param_5 != 0) {
      uVar1 = FUN_0019c904(param_5);
      __s[2] = uVar1;
    }
    if (param_4 != 0) {
      uVar1 = FUN_0019c904(param_4);
      __s[1] = uVar1;
    }
    iVar2 = FUN_0018f240(iVar3,param_3,__s);
    if (iVar2 == 0) {
      return __s;
    }
    FUN_00193e74(__s);
  }
  return (undefined4 *)0x0;
}


