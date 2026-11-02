/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193ef8  Symbol: FUN_00193ef8 */

int FUN_00193ef8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_1 + 0x40) == 0)) ||
     (iVar1 = FUN_0018eb78(), iVar1 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = param_1;
    }
  }
  return iVar2;
}


