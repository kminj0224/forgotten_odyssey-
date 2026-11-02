/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001b2c8  Symbol: FUN_0001b2c8 */

int FUN_0001b2c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_14 [2];
  
  local_14[0] = 0;
  if (**(char **)(param_1 + 0xc) == 'E') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uVar2 = FUN_00018710(param_1,0x2a,0,0);
    return uVar2;
  }
  piVar3 = local_14;
  while( true ) {
    iVar1 = FUN_0001ad50(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00018710(param_1,0x2a,iVar1,0);
    *piVar3 = iVar1;
    if (iVar1 == 0) break;
    piVar3 = (int *)(iVar1 + 8);
    if (**(char **)(param_1 + 0xc) == 'E') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      return local_14[0];
    }
  }
  return 0;
}


