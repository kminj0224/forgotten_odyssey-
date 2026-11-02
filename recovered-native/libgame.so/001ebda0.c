/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ebda0  Symbol: FUN_001ebda0 */

int FUN_001ebda0(int *param_1,wchar_t *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    do {
      __n = param_3 + iVar2;
      sVar1 = param_1[6] - (int)(wchar_t *)param_1[5] >> 2;
      if (sVar1 != 0) {
        if ((int)sVar1 <= (int)__n) {
          __n = sVar1;
        }
        wmemcpy((wchar_t *)param_1[5],param_2,__n);
        iVar3 = iVar3 + __n;
        param_1[5] = param_1[5] + __n * 4;
        if (param_3 <= iVar3) {
          return iVar3;
        }
        param_2 = param_2 + __n;
      }
      iVar2 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
      param_2 = param_2 + 1;
      if (iVar2 == -1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = -iVar3;
    } while (iVar3 < param_3);
  }
  return iVar3;
}


