/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001942e8  Symbol: FUN_001942e8 */

undefined4 FUN_001942e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00194358 + 0x1942f4;
  if ((((param_1 != 0) && (param_2 != 0)) && (iVar4 = *(int *)(param_1 + 0x40), iVar4 != 0)) &&
     (iVar1 = FUN_0018b544(param_1,*(undefined4 *)(param_2 + 0xc),1), iVar1 != 0)) {
    iVar2 = FUN_0018eb78(iVar4,iVar1);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 8), iVar2 == param_2)) {
      FUN_0018ec88(iVar4,iVar1,iVar3 + DAT_00194360);
      (***(code ***)(iVar3 + DAT_0019435c))(iVar1);
      *(undefined4 *)(iVar2 + 0x28) = 0;
      return 0;
    }
    (***(code ***)(iVar3 + DAT_0019435c))(iVar1);
  }
  return 0xffffffff;
}


