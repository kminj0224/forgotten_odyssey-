/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020665c  Symbol: FUN_0020665c */

undefined FUN_0020665c(undefined4 param_1,int *param_2,char *param_3,char *param_4,char **param_5,
                      wchar_t *param_6,wchar_t *param_7,wchar_t **param_8)

{
  size_t sVar1;
  bool bVar2;
  undefined uVar3;
  bool bVar4;
  int local_1c;
  
  uVar3 = param_3 < param_4;
  local_1c = *param_2;
  if (param_6 < param_7 && param_3 < param_4) {
    do {
      sVar1 = mbrtowc(param_6,param_3,(int)param_4 - (int)param_3,(mbstate_t *)&local_1c);
      if (sVar1 == 0xffffffff) {
        uVar3 = 2;
        break;
      }
      if (sVar1 == 0xfffffffe) {
        uVar3 = 1;
        break;
      }
      if (sVar1 == 0) {
        *param_6 = L'\0';
        sVar1 = 1;
      }
      param_3 = param_3 + sVar1;
      param_6 = param_6 + 1;
      uVar3 = param_3 < param_4;
      bVar4 = param_6 <= param_7;
      bVar2 = param_7 == param_6;
      if (bVar4 && !bVar2) {
        bVar4 = param_3 <= param_4;
        bVar2 = param_4 == param_3;
      }
      *param_2 = local_1c;
    } while (bVar4 && !bVar2);
  }
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar3;
}


