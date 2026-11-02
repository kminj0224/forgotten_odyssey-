/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5d6c  Symbol: jpeg_suppress_tables */

void jpeg_suppress_tables(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 100) + 0x80) = param_2;
  }
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = 0;
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x114) = param_2;
    }
    if (piVar1[4] != 0) {
      *(undefined4 *)(piVar1[4] + 0x114) = param_2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 4);
  return;
}


