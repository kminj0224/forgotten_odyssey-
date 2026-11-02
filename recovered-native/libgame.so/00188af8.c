/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188af8  Symbol: FUN_00188af8 */

int FUN_00188af8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (piVar1 = (int *)FUN_0017c588(param_2), piVar1 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *piVar1;
      piVar1[1] = 0;
      *piVar1 = param_1;
    }
    FUN_0017c4fc(piVar1);
    FUN_00188468(piVar1);
    if ((param_3 == 0) && (piVar1[3] == 0)) {
      FUN_0018ba54(piVar1[2]);
      piVar1[2] = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = piVar1[2];
    }
    if (param_1 != 0) {
      *piVar1 = iVar3;
    }
    FUN_00179908(piVar1);
  }
  return iVar2;
}


