/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00185cf8  Symbol: FUN_00185cf8 */

int FUN_00185cf8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0017c0f0(param_2);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_1 != 0) {
      if (*piVar1 != 0) {
        (***(code ***)(DAT_00185d54 + 0x185d0a + DAT_00185d58))();
      }
      *piVar1 = param_1;
      piVar1[1] = 0;
    }
    FUN_00185b64(piVar1);
    iVar2 = piVar1[2];
    if (piVar1[3] == 0) {
      FUN_0018ba54();
      iVar2 = 0;
      piVar1[2] = 0;
    }
    if (param_1 != 0) {
      *piVar1 = 0;
    }
    FUN_00179908(piVar1);
  }
  return iVar2;
}


