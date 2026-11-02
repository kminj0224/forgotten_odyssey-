/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001738f8  Symbol: FUN_001738f8 */

void FUN_001738f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char *__s;
  size_t __n;
  char *__format;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  char acStack_60 [52];
  int local_2c;
  
  iVar1 = DAT_00173a20;
  iVar5 = DAT_00173a1c + 0x173910;
  local_2c = **(int **)(iVar5 + DAT_00173a20);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  uVar4 = 0;
  do {
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
    uVar2 = inflate(param_1 + 0x138,0);
    sVar3 = *(int *)(param_1 + 0x174) - *(int *)(param_1 + 0x148);
    if ((uVar2 < 2) && (0 < (int)sVar3)) {
      if ((uVar4 < param_5) && (param_4 != 0)) {
        __n = param_5 - uVar4;
        if ((int)sVar3 < (int)(param_5 - uVar4)) {
          __n = sVar3;
        }
        memcpy((void *)(param_4 + uVar4),*(void **)(param_1 + 0x170),__n);
      }
      uVar4 = uVar4 + sVar3;
    }
  } while (uVar2 == 0);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  inflateReset(param_1 + 0x138);
  if (uVar2 != 1) {
    __s = *(char **)(param_1 + 0x150);
    if (__s == (char *)0x0) {
      if (uVar2 == 0xfffffffb) {
        __format = (char *)(DAT_00173a28 + iVar5);
      }
      else if (uVar2 == 0xfffffffd) {
        __format = (char *)(DAT_00173a2c + iVar5);
      }
      else {
        __format = (char *)(DAT_00173a24 + iVar5);
      }
      __s = acStack_60;
      snprintf(__s,0x34,__format,param_1 + 0x1e0);
    }
    png_warning(param_1,__s);
    uVar4 = 0;
  }
  if (local_2c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


