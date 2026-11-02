/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188cb0  Symbol: FUN_00188cb0 */

int FUN_00188cb0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0017c0f0(param_3);
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    if (*piVar1 != *(int *)(DAT_00188d24 + 0x188cc4 + DAT_00188d28)) {
      (***(code ***)(DAT_00188d24 + 0x188cc4 + DAT_00188d2c))();
    }
    *piVar1 = param_1;
    FUN_0017c4fc(piVar1);
    if (param_2 != 0) {
      piVar1[1] = param_2;
    }
    FUN_00188468(piVar1);
    iVar2 = 0;
    if ((piVar1[3] == 0) && (iVar2 = piVar1[0x15], iVar2 == 0)) {
      iVar2 = -1;
    }
    if (param_1 != 0) {
      *piVar1 = 0;
    }
    if (piVar1[2] != 0) {
      FUN_0018ba54();
      piVar1[2] = 0;
    }
    FUN_00179908(piVar1);
  }
  return iVar2;
}


