/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9c70  Symbol: FUN_001c9c70 */

int FUN_001c9c70(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = FUN_00207ebc(param_1 + 0x24);
  if (iVar1 == 0) {
    if (param_3 == 0 && param_2 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    else {
      bVar2 = param_2 < 0;
      bVar3 = param_2 != 0;
      if (bVar3) {
        bVar2 = param_3 < 0;
      }
      if ((bVar3 && param_3 != 0) && !bVar2) {
        *(int *)(param_1 + 0x3c) = param_2;
      }
      if ((bVar3 && param_3 != 0) && !bVar2) {
        *(int *)(param_1 + 0x40) = param_3;
      }
    }
  }
  return param_1;
}


