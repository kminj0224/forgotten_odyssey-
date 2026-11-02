/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001816a4  Symbol: FUN_001816a4 */

void FUN_001816a4(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int local_1c [2];
  
  iVar2 = DAT_00181790;
  local_1c[0] = 0;
  param_1[0x32] = param_1[0x32] + 9;
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 9;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 9;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(param_1[9] + 0x10) == '\0') && (iVar1 = FUN_0017a2bc(param_1[9],0xfa), iVar1 < 1)
     ) {
    FUN_0017c6c4(param_1);
  }
  FUN_0017ff44(param_1);
  iVar1 = FUN_0017f6b8(param_1);
  if (iVar1 == 0) {
    FUN_0017bae0(param_1,0x44,iVar2 + 0x1816c2 + DAT_00181794);
  }
  param_1[0x37] = iVar1;
  FUN_0017ff44(param_1);
  iVar2 = FUN_00181464(param_1,local_1c,1);
  if ((iVar2 != 0) || (local_1c[0] != 0)) {
    param_1[0x16] = 1;
  }
  param_1[0x38] = iVar2;
  param_1[0x39] = local_1c[0];
  FUN_0017ff44(param_1);
  if ((((code **)*param_1 != (code **)0x0) && (pcVar3 = *(code **)*param_1, pcVar3 != (code *)0x0))
     && (param_1[0x35] == 0)) {
    (*pcVar3)(param_1[1],iVar1,local_1c[0],iVar2);
  }
  if (**(char **)(param_1[9] + 0x10) != '[') {
    if (**(char **)(param_1[9] + 0x10) != '>') {
      FUN_0017b7fc(param_1,0x3d,0);
    }
    FUN_0017a4a4(param_1);
  }
  return;
}


