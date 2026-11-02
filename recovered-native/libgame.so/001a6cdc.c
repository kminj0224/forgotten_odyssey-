/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6cdc  Symbol: FUN_001a6cdc */

void FUN_001a6cdc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0x33] == 0) {
    iVar3 = param_1[0x13];
    if (4 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x13];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
      iVar3 = param_1[0x13];
    }
    param_1[0x48] = iVar3;
    if (0 < iVar3) {
      iVar5 = param_1[0x15];
      piVar2 = param_1 + 0x49;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        *piVar2 = iVar5;
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + 0x58;
      } while (iVar4 < iVar3);
    }
  }
  else {
    piVar2 = (int *)(param_1[0x33] + *(int *)(param_1[0x61] + 0x20) * 0x24);
    param_1[0x48] = *piVar2;
    if (0 < *piVar2) {
      iVar5 = param_1[0x15];
      piVar1 = param_1 + 0x49;
      iVar3 = 0;
      do {
        iVar4 = iVar3 + 1;
        iVar3 = iVar3 + 1;
        *piVar1 = iVar5 + piVar2[iVar4] * 0x58;
        piVar1 = piVar1 + 1;
      } while (iVar3 < *piVar2);
    }
    if (param_1[0x42] != 0) {
      param_1[0x5a] = piVar2[5];
      param_1[0x5b] = piVar2[6];
      param_1[0x5c] = piVar2[7];
      param_1[0x5d] = piVar2[8];
      return;
    }
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = param_1[0x5e] * param_1[0x5e] + -1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  return;
}


