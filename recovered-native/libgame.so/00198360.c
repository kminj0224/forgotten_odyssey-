/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198360  Symbol: FUN_00198360 */

void FUN_00198360(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_1c [2];
  
  local_1c[0] = 0;
  param_1[0x32] = param_1[0x32] + 9;
  iVar4 = DAT_00198424;
  *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 9;
  iVar4 = iVar4 + 0x198386;
  *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 9;
  FUN_00196588(param_1);
  iVar1 = FUN_001981f8(param_1);
  if (iVar1 == 0) {
    FUN_00195ba4(param_1,0x44,iVar4 + DAT_00198428,0,0);
  }
  FUN_00196588(param_1);
  iVar2 = FUN_00197054(param_1,local_1c);
  FUN_00196588(param_1);
  if (**(char **)(param_1[9] + 0x10) != '>') {
    FUN_00195ba4(param_1,0x3d,iVar4 + DAT_0019842c,0,0);
  }
  FUN_0017a4a4(param_1);
  if ((((code **)*param_1 != (code **)0x0) && (pcVar3 = *(code **)*param_1, pcVar3 != (code *)0x0))
     && (param_1[0x35] == 0)) {
    (*pcVar3)(param_1[1],iVar1,local_1c[0],iVar2);
  }
  if (iVar2 != 0) {
    (***(code ***)(iVar4 + DAT_00198430))(iVar2);
  }
  if (local_1c[0] != 0) {
    (***(code ***)(iVar4 + DAT_00198430))();
  }
  return;
}


