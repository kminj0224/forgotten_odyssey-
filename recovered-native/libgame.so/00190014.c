/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190014  Symbol: FUN_00190014 */

undefined4 FUN_00190014(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = DAT_00190054 + 0x190020;
  if (param_1 != 0) {
    iVar2 = FUN_0019c3dc(param_1,iVar3 + DAT_00190058,0x11);
    if (iVar2 == 0) {
      param_1 = param_1 + 0x10;
    }
    else {
      iVar3 = FUN_0019c3dc(param_1,iVar3 + DAT_0019005c,8);
      if (iVar3 == 0) {
        param_1 = param_1 + 7;
      }
    }
    uVar1 = FUN_0018ffe4(param_1);
  }
  return uVar1;
}


