/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193cd4  Symbol: FUN_00193cd4 */

int FUN_00193cd4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00191b94();
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    }
    iVar2 = FUN_001933bc(iVar1,param_1);
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_001919b8(iVar1);
  }
  return 0;
}


