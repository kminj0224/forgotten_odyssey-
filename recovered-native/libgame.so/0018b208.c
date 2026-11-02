/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b208  Symbol: FUN_0018b208 */

int FUN_0018b208(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_1 + 4) != 1)) {
    iVar2 = 0;
  }
  else {
    for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      iVar3 = FUN_0019c30c(*(undefined4 *)(iVar2 + 8),param_2);
      if (iVar3 != 0) {
        return iVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x20);
    iVar2 = 0;
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != 0)) &&
        ((iVar1 = FUN_00193f40(*(int *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 8),param_2),
         iVar1 != 0 ||
         ((*(int *)(iVar3 + 0x30) != 0 &&
          (iVar1 = FUN_00193f40(*(int *)(iVar3 + 0x30),*(undefined4 *)(param_1 + 8),param_2),
          iVar1 != 0)))))) && (*(int *)(iVar1 + 0x30) != 0)) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}


