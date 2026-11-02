/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2ca0  Symbol: jinit_huff_encoder */

void jinit_huff_encoder(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x8c);
  iVar1 = DAT_001b2ce8;
  *(int **)(param_1 + 0x1a4) = piVar2;
  iVar3 = 0;
  *piVar2 = iVar1 + 0x1b2cbc + DAT_001b2cec;
  piVar4 = piVar2 + 0xb;
  do {
    iVar3 = iVar3 + 1;
    piVar4[4] = 0;
    *piVar4 = 0;
    piVar4[0xc] = 0;
    piVar4[8] = 0;
    piVar4 = piVar4 + 1;
  } while (iVar3 != 4);
  if (*(int *)(param_1 + 0x108) != 0) {
    piVar2[0x22] = 0;
  }
  return;
}


