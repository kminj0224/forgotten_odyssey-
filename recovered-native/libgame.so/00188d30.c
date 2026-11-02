/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188d30  Symbol: FUN_00188d30 */

int FUN_00188d30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_0017c498();
  piVar1 = (int *)FUN_0017c0f0(param_2);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      if (*piVar1 != 0) {
        (***(code ***)(DAT_00188dd8 + 0x188d4e + DAT_00188ddc))();
      }
      *piVar1 = param_1;
    }
    FUN_0017c4fc(piVar1);
    if (param_4 != 0) {
      piVar1[0x44] = param_4;
    }
    if (piVar1[0x2d] == 0) {
      iVar3 = FUN_0018f794(param_2);
      piVar1[0x2d] = iVar3;
    }
    piVar1[0x48] = param_3;
    FUN_00188468(piVar1);
    if ((param_3 == 0) && (piVar1[3] == 0)) {
      FUN_0018ba54(piVar1[2]);
      iVar3 = 0;
      piVar1[2] = 0;
    }
    else {
      iVar3 = piVar1[2];
      if (iVar3 != 0) {
        iVar2 = *(int *)(*(int *)piVar1[9] + 0x18);
        if (0 < iVar2) {
          iVar2 = 9;
        }
        *(int *)(iVar3 + 0x24) = iVar2;
      }
    }
    if (param_1 != 0) {
      *piVar1 = 0;
    }
    FUN_00179908(piVar1);
  }
  return iVar3;
}


