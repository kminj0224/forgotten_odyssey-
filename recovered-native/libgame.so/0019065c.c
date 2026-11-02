/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019065c  Symbol: FUN_0019065c */

int FUN_0019065c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[7] != 0)) {
    return -1;
  }
  if (((param_1[5] != 0) && (param_1[3] != 0)) &&
     (iVar1 = FUN_001a39f0(param_1[3],param_1[5],param_1[4]), iVar1 < 0)) {
    FUN_00190594(0x608,0);
    param_1[7] = 0x608;
    return -1;
  }
  puVar3 = (undefined4 *)param_1[5];
  if (((puVar3 == (undefined4 *)0x0) || (param_1[3] == 0)) || ((code *)param_1[1] == (code *)0x0)) {
    iVar1 = 0;
    if ((code *)param_1[1] == (code *)0x0) goto LAB_001906d4;
    iVar1 = (*(code *)param_1[1])(*param_1,*(undefined4 *)param_1[4],((undefined4 *)param_1[4])[1]);
    if (iVar1 < 0) goto LAB_001906e4;
    uVar2 = param_1[4];
  }
  else {
    iVar1 = (*(code *)param_1[1])(*param_1,*puVar3,puVar3[1]);
    if (iVar1 < 0) {
LAB_001906e4:
      uVar2 = DAT_001906f4;
      FUN_00190594(DAT_001906f4,0);
      param_1[7] = uVar2;
      return iVar1;
    }
    uVar2 = param_1[5];
  }
  FUN_0018a7b0(uVar2,iVar1);
LAB_001906d4:
  param_1[6] = param_1[6] + iVar1;
  return iVar1;
}


