/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b0088  Symbol: jinit_arith_encoder */

void jinit_arith_encoder(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0xd0);
  iVar1 = DAT_001b00c8;
  *(int **)(param_1 + 0x1a4) = piVar2;
  iVar3 = 0;
  *piVar2 = iVar1 + 0x1b00a4 + DAT_001b00cc;
  piVar2[2] = iVar1 + 0x1b00a4 + DAT_001b00d0;
  piVar4 = piVar2 + 0x13;
  do {
    iVar3 = iVar3 + 1;
    *piVar4 = 0;
    piVar4[0x10] = 0;
    piVar4 = piVar4 + 1;
  } while (iVar3 != 0x10);
  *(undefined *)(piVar2 + 0x33) = 0x71;
  return;
}


