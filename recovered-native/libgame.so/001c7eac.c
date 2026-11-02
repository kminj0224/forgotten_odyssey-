/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7eac  Symbol: FUN_001c7eac */

int FUN_001c7eac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (param_1 == *(int *)(iVar2 + 0xc)) {
      do {
        param_1 = iVar2;
        iVar2 = *(int *)(param_1 + 4);
      } while (*(int *)(iVar2 + 0xc) == param_1);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = 0;
    }
    if (iVar2 == iVar1) {
      iVar2 = param_1;
    }
    return iVar2;
  }
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar1 + 8);
  } while (iVar2 != 0);
  return iVar1;
}


