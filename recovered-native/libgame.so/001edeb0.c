/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001edeb0  Symbol: FUN_001edeb0 */

char ** FUN_001edeb0(char **param_1,uint param_2,char *param_3)

{
  size_t __n;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t __n_00;
  char *__dest;
  uint uVar4;
  
  __n = strlen(param_3);
  pcVar2 = *param_1;
  uVar4 = *(uint *)(pcVar2 + -0xc);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0((int)&DAT_001edea8 + DAT_001edeac);
  }
  if (__n <= 0x3ffffffc - uVar4) {
    if (((param_3 < pcVar2) || (pcVar2 + uVar4 < param_3)) || (0 < *(int *)(pcVar2 + -4))) {
      param_1 = (char **)FUN_001ed870(param_1,param_2,0,param_3,__n);
    }
    else {
      FUN_001ed6f8(param_1,param_2,0);
      pcVar1 = *param_1;
      iVar3 = (int)param_3 - (int)pcVar2;
      pcVar2 = pcVar1 + iVar3;
      __dest = pcVar1 + param_2;
      if (__dest < pcVar2 + __n) {
        if (pcVar2 < __dest) {
          __n_00 = (int)__dest - (int)pcVar2;
          if (__n_00 == 1) {
            pcVar1[param_2] = pcVar1[iVar3];
          }
          else {
            memcpy(__dest,pcVar2,__n_00);
          }
          if (__n - __n_00 == 1) {
            __dest[__n_00] = __dest[__n];
          }
          else {
            memcpy(__dest + __n_00,__dest + __n,__n - __n_00);
          }
        }
        else if (__n == 1) {
          pcVar1[param_2] = pcVar2[1];
        }
        else {
          memcpy(__dest,pcVar2 + __n,__n);
        }
      }
      else if (__n == 1) {
        pcVar1[param_2] = pcVar1[iVar3];
      }
      else {
        memcpy(__dest,pcVar2,__n);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4558(DAT_001edea8 + 0x1ede9c);
}


