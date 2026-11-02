/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c074  Symbol: FUN_0017c074 */

int FUN_0017c074(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00179dd4();
  if (iVar1 == 0) {
    FUN_00179430(0,DAT_0017c0e8 + 0x17c086 + DAT_0017c0ec);
  }
  else {
    if (param_2 != 0) {
      FUN_0017b200(iVar1,param_2,0);
    }
    *(undefined4 *)(iVar1 + 0x118) = 1;
    iVar2 = FUN_00190060(param_1,0,iVar1,iVar1 + 0xfc,param_4);
    if (iVar2 == 0) {
      FUN_00179908(iVar1);
      iVar1 = 0;
    }
    else {
      piVar3 = (int *)(iVar1 + 0xb4);
      FUN_0017bfa0(iVar1,iVar2);
      if (((*piVar3 == 0) && (iVar2 = FUN_0018f794(param_1), iVar2 != 0)) && (*piVar3 == 0)) {
        *piVar3 = iVar2;
      }
    }
  }
  return iVar1;
}


