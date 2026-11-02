/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad4c8  Symbol: FUN_001ad4c8 */

void FUN_001ad4c8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 < 0) {
    iVar1 = *(int *)(iVar2 + 0x6c);
    if ((iVar1 == 0) || (2 < *(int *)(iVar2 + 0x68))) {
      (**(code **)(iVar2 + 8))();
      iVar1 = *(int *)(iVar2 + 0x6c);
    }
    *(int *)(iVar2 + 0x6c) = iVar1 + 1;
  }
  else if (param_2 <= *(int *)(iVar2 + 0x68)) {
    (**(code **)(iVar2 + 8))();
  }
  return;
}


