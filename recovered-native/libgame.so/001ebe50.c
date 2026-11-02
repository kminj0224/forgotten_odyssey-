/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ebe50  Symbol: FUN_001ebe50 */

int FUN_001ebe50(int *param_1,wchar_t *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  wchar_t wVar3;
  size_t __n;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    do {
      __n = param_3 + iVar2;
      sVar1 = param_1[3] - (int)(wchar_t *)param_1[2] >> 2;
      if (sVar1 != 0) {
        if ((int)sVar1 <= (int)__n) {
          __n = sVar1;
        }
        wmemcpy(param_2,(wchar_t *)param_1[2],__n);
        iVar4 = iVar4 + __n;
        param_1[2] = param_1[2] + __n * 4;
        if (param_3 <= iVar4) {
          return iVar4;
        }
        param_2 = param_2 + __n;
      }
      wVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (wVar3 == L'\xffffffff') {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      *param_2 = wVar3;
      param_2 = param_2 + 1;
      iVar2 = -iVar4;
    } while (iVar4 < param_3);
  }
  return iVar4;
}


