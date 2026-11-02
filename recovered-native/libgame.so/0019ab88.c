/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ab88  Symbol: FUN_0019ab88 */

int FUN_0019ab88(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0017c498();
  piVar1 = (int *)FUN_00197520(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *piVar1;
      piVar1[1] = param_4;
      *piVar1 = param_3;
    }
    FUN_0019a56c(piVar1);
    iVar3 = piVar1[2];
    if (param_3 != 0) {
      *piVar1 = iVar2;
      piVar1[1] = 0;
    }
    FUN_00195b9c(piVar1);
  }
  return iVar3;
}


