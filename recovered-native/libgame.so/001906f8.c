/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001906f8  Symbol: FUN_001906f8 */

int FUN_001906f8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00190768 + 0x190702;
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
    if (param_1[1] != 0) {
      FUN_0019065c();
    }
    iVar1 = 0;
    if ((code *)param_1[2] != (code *)0x0) {
      iVar1 = (*(code *)param_1[2])(*param_1);
    }
    iVar3 = param_1[6];
    if (param_1[5] != 0) {
      FUN_001896a4();
      param_1[5] = 0;
    }
    if (param_1[3] != 0) {
      FUN_001a3260();
    }
    if (param_1[4] != 0) {
      FUN_001896a4();
      param_1[4] = 0;
    }
    if (param_1[7] != 0) {
      iVar1 = -1;
    }
    (***(code ***)(iVar2 + DAT_0019076c))(param_1);
    if (iVar1 != 0) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}


