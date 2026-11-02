/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b21d8  Symbol: jinit_forward_dct */

void jinit_forward_dct(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x9c);
  iVar2 = DAT_001b2214;
  *(int **)(param_1 + 0x1a0) = piVar1;
  iVar2 = iVar2 + 0x1b21f4 + DAT_001b2218;
  piVar1[0x23] = 0;
  piVar1[0x24] = 0;
  piVar1[0x25] = 0;
  *piVar1 = iVar2;
  piVar1[0x15] = 0;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  piVar1[0x18] = 0;
  piVar1[0x26] = 0;
  return;
}


