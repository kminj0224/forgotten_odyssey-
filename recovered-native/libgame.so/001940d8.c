/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001940d8  Symbol: FUN_001940d8 */

undefined4 FUN_001940d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00194158 + 0x1940e4;
  if ((((param_1 != 0) && (param_2 != 0)) && (iVar3 = *(int *)(param_1 + 0x44), iVar3 != 0)) &&
     (iVar1 = FUN_0018b544(param_1,*(undefined4 *)(param_2 + 0xc),1), iVar1 != 0)) {
    iVar2 = FUN_0018eb78(iVar3,iVar1);
    if (iVar2 != 0) {
      FUN_001a5bc8(iVar2,iVar4 + DAT_00194160);
      iVar2 = FUN_001a5a70(iVar2);
      if (iVar2 != 0) {
        FUN_0018ef28(iVar3,iVar1,0,iVar4 + DAT_00194164);
      }
      (***(code ***)(iVar4 + DAT_0019415c))(iVar1);
      return 0;
    }
    (***(code ***)(iVar4 + DAT_0019415c))(iVar1);
  }
  return 0xffffffff;
}


