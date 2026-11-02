/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188bf8  Symbol: FUN_00188bf8 */

int FUN_00188bf8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0017c008(param_2,param_3,param_3,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_1 != 0) {
      if (*piVar1 != 0) {
        (***(code ***)(DAT_00188c70 + 0x188c0e + DAT_00188c74))();
      }
      *piVar1 = param_1;
    }
    FUN_0017c4fc(piVar1);
    if (param_5 != 0) {
      piVar1[0x44] = param_5;
    }
    piVar1[0x48] = param_4;
    FUN_00188468(piVar1);
    if ((param_4 == 0) && (piVar1[3] == 0)) {
      FUN_0018ba54(piVar1[2]);
      iVar2 = 0;
      piVar1[2] = 0;
    }
    else {
      iVar2 = piVar1[2];
    }
    if (param_1 != 0) {
      *piVar1 = 0;
    }
    FUN_00179908(piVar1);
  }
  return iVar2;
}


