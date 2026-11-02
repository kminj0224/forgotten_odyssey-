/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190ee8  Symbol: FUN_00190ee8 */

int FUN_00190ee8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00190e4c();
  iVar3 = DAT_00190f20 + 0x190ef8;
  if ((iVar1 == 0) && (iVar2 = FUN_00191be0(param_1,0,0), iVar2 != 0)) {
    iVar1 = FUN_00190e4c();
    (***(code ***)(iVar3 + DAT_00190f24))(iVar2);
  }
  return iVar1;
}


