/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188a1c  Symbol: FUN_00188a1c */

undefined4 FUN_00188a1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((-1 < param_1) && (iVar1 = FUN_0018fc60(param_1,0), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar2 = FUN_00179dd4();
    if (iVar2 == 0) {
      FUN_0018ff94(iVar1);
    }
    else {
      iVar3 = FUN_0017a148(iVar2,iVar1,0);
      if (iVar3 != 0) {
        FUN_0017bfa0(iVar2,iVar3);
        uVar4 = FUN_00188794(iVar2,param_2,param_3,param_4,0);
        return uVar4;
      }
      FUN_0018ff94(iVar1);
      FUN_00179908(iVar2);
    }
  }
  return 0;
}


