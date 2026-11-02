/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ca480  Symbol: FUN_001ca480 */

int FUN_001ca480(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[0xb];
  if ((int *)param_1[0x15] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x18))();
  if (((iVar1 != 0) && ((uVar4 & 0x10) != 0)) && (*(char *)((int)param_1 + 0x45) == '\0')) {
    iVar1 = param_1[6] - param_1[5];
    if ((*(char *)((int)param_1 + 0x46) == '\0') && (1 < (uint)param_1[0x10])) {
      iVar1 = param_1[0x10] - 1;
    }
    if (0x3ff < iVar1) {
      iVar1 = 0x400;
    }
    if (iVar1 <= param_3) {
      iVar5 = param_1[5] - param_1[4];
      iVar1 = FUN_00207fc8(param_1 + 9,param_1[4],iVar5,param_2,param_3);
      if (iVar1 == iVar5 + param_3) {
        iVar2 = param_1[0xf];
        param_1[1] = iVar2;
        param_1[2] = iVar2;
        param_1[3] = iVar2;
        if (((param_1[0xb] & 0x10U) == 0) || ((uint)param_1[0x10] < 2)) {
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[6] = 0;
        }
        else {
          param_1[5] = iVar2;
          param_1[4] = iVar2;
          param_1[6] = iVar2 + (param_1[0x10] - 1U);
        }
        *(undefined *)((int)param_1 + 0x46) = 1;
      }
      if (iVar5 < iVar1) {
        iVar1 = iVar1 - iVar5;
      }
      else {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  iVar5 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      __n = param_3 + iVar1;
      sVar3 = param_1[6] - (int)(void *)param_1[5];
      if (sVar3 != 0) {
        if ((int)sVar3 <= (int)__n) {
          __n = sVar3;
        }
        memcpy((void *)param_1[5],param_2,__n);
        iVar5 = iVar5 + __n;
        param_1[5] = param_1[5] + __n;
        if (param_3 <= iVar5) {
          return iVar5;
        }
        param_2 = param_2 + __n;
      }
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
      param_2 = param_2 + 1;
      if (iVar1 == -1) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar1 = -iVar5;
    } while (iVar5 < param_3);
  }
  return iVar5;
}


