/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3b08  Symbol: jinit_arith_decoder */

void jinit_arith_decoder(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0xbc);
  iVar3 = DAT_001b3b80;
  *(int **)(param_1 + 0x1d0) = piVar1;
  iVar4 = 0;
  *piVar1 = iVar3 + 0x1b3b24 + DAT_001b3b84;
  piVar6 = piVar1 + 0xe;
  do {
    iVar4 = iVar4 + 1;
    *piVar6 = 0;
    piVar6[0x10] = 0;
    piVar6 = piVar6 + 1;
  } while (iVar4 != 0x10);
  *(undefined *)(piVar1 + 0x2e) = 0x71;
  if (*(int *)(param_1 + 0xe0) != 0) {
    puVar2 = (undefined4 *)(***(code ***)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    *(undefined4 **)(param_1 + 0xa0) = puVar2;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar3 = 0;
      do {
        puVar5 = puVar2 + 0x40;
        do {
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (puVar5 != puVar2);
        iVar3 = iVar3 + 1;
        puVar2 = puVar5;
      } while (iVar3 < *(int *)(param_1 + 0x24));
    }
  }
  return;
}


