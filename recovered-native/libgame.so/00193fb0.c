/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193fb0  Symbol: FUN_00193fb0 */

bool FUN_00193fb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((((param_3 == 0) || ((param_1 == 0 && (param_1 = *(int *)(param_3 + 0x20), param_1 == 0)))) ||
      ((*(int *)(param_1 + 0x2c) == 0 && (*(int *)(param_1 + 0x30) == 0)))) ||
     (((*(int *)(param_1 + 4) == 0xd || (param_2 == 0)) ||
      ((iVar1 = FUN_00193f40(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_3 + 8)), iVar1 == 0 &&
       ((*(int *)(param_1 + 0x30) == 0 ||
        (iVar1 = FUN_00193f40(*(int *)(param_1 + 0x30),*(undefined4 *)(param_2 + 8),
                              *(undefined4 *)(param_3 + 8)), iVar1 == 0)))))))) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(iVar1 + 0x28) - 3U < 2;
  }
  return bVar2;
}


