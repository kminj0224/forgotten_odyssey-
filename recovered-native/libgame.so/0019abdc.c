/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019abdc  Symbol: FUN_0019abdc */

int FUN_0019abdc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0019ac3c + 0x19abe8;
  FUN_0017c498();
  if ((param_1 == 0) || (piVar1 = (int *)FUN_001977b4(param_1,param_2), piVar1 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      if (*piVar1 != 0) {
        (***(code ***)(iVar2 + DAT_0019ac40))();
      }
      *piVar1 = param_3;
      piVar1[1] = param_4;
    }
    FUN_0019a56c(piVar1);
    iVar2 = piVar1[2];
    if (param_3 != 0) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    FUN_00195b9c(piVar1);
  }
  return iVar2;
}


