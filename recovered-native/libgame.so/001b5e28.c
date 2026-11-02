/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b5e28  Symbol: jinit_inverse_dct */

void jinit_inverse_dct(int param_1)

{
  int *piVar1;
  void *__s;
  void **ppvVar2;
  int iVar3;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x54);
  iVar3 = DAT_001b5e90;
  *(int **)(param_1 + 0x1d4) = piVar1;
  *piVar1 = iVar3 + 0x1b5e48 + DAT_001b5e94;
  if (0 < *(int *)(param_1 + 0x24)) {
    ppvVar2 = (void **)(*(int *)(param_1 + 0xd8) + 0x54);
    iVar3 = 0;
    do {
      __s = (void *)(***(code ***)(param_1 + 4))(param_1,1,0x100);
      *ppvVar2 = __s;
      memset(__s,0,0x100);
      piVar1[0xb] = -1;
      iVar3 = iVar3 + 1;
      ppvVar2 = ppvVar2 + 0x16;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}


