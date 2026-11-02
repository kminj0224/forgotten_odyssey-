/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b6fcc  Symbol: jinit_huff_decoder */

void jinit_huff_decoder(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0xd8);
  iVar3 = DAT_001b7044;
  *(int **)(param_1 + 0x1d0) = piVar1;
  *piVar1 = iVar3 + 0x1b6fe8 + DAT_001b7048;
  if (*(int *)(param_1 + 0xe0) == 0) {
    piVar1[0x14] = 0;
    piVar1[0x10] = 0;
    piVar1[0x15] = 0;
    piVar1[0x11] = 0;
    piVar1[0x16] = 0;
    piVar1[0x12] = 0;
    piVar1[0x17] = 0;
    piVar1[0x13] = 0;
  }
  else {
    puVar2 = (undefined4 *)(***(code ***)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    *(undefined4 **)(param_1 + 0xa0) = puVar2;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar3 = 0;
      do {
        puVar4 = puVar2 + 0x40;
        do {
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (puVar2 != puVar4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x24));
    }
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
  }
  return;
}


