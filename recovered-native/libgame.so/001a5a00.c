/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5a00  Symbol: FUN_001a5a00 */

int FUN_001a5a00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    while (iVar1 = FUN_001a59c0(param_1,param_2), iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


