/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ebff8  Symbol: FUN_001ebff8 */

int FUN_001ebff8(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      __n = param_3 + iVar1;
      sVar3 = param_1[3] - (int)(void *)param_1[2];
      if (sVar3 != 0) {
        if ((int)sVar3 <= (int)__n) {
          __n = sVar3;
        }
        memcpy(param_2,(void *)param_1[2],__n);
        iVar2 = iVar2 + __n;
        param_1[2] = param_1[2] + __n;
        if (param_3 <= iVar2) {
          return iVar2;
        }
        param_2 = param_2 + __n;
      }
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar1 == -1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      *param_2 = (char)iVar1;
      param_2 = param_2 + 1;
      iVar1 = -iVar2;
    } while (iVar2 < param_3);
  }
  return iVar2;
}


