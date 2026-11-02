/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2494  Symbol: FUN_001b2494 */

void FUN_001b2494(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  
  FUN_001b23d4();
  if (*(int *)(param_1 + 0x6c) == 0) {
    FUN_001b2318(param_1,0x7f,7);
    puVar3 = *(undefined **)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *puVar3 = 0xff;
    pcVar4 = puVar3 + 1;
    *(char **)(param_1 + 0x70) = pcVar4;
    iVar1 = *(int *)(param_1 + 0x74) + -1;
    *(int *)(param_1 + 0x74) = iVar1;
    if (iVar1 == 0) {
      FUN_001b223c(param_1);
      pcVar4 = *(char **)(param_1 + 0x70);
    }
    *pcVar4 = param_2 + -0x30;
    *(char **)(param_1 + 0x70) = pcVar4 + 1;
    iVar1 = *(int *)(param_1 + 0x74) + -1;
    *(int *)(param_1 + 0x74) = iVar1;
    if (iVar1 == 0) {
      FUN_001b223c(param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x168) == 0) {
    if (0 < *(int *)(iVar1 + 0x120)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(param_1 + 0x14) = 0;
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 4;
      } while (iVar2 < *(int *)(iVar1 + 0x120));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}


