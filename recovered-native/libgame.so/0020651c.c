/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020651c  Symbol: FUN_0020651c */

undefined FUN_0020651c(undefined4 param_1,int *param_2,wchar_t *param_3,wchar_t *param_4,
                      wchar_t **param_5,char *param_6,char *param_7,char **param_8)

{
  size_t sVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  undefined uVar6;
  char acStack_28 [4];
  int local_24;
  
  local_24 = *param_2;
  pcVar2 = param_6;
  pwVar3 = param_3;
  if ((int)(param_6 + (((int)param_4 - (int)param_3 >> 2) - (int)param_7)) < 1) {
    if (param_3 < param_4) {
      do {
        sVar1 = wcrtomb(pcVar2,*pwVar3,(mbstate_t *)&local_24);
        param_3 = pwVar3 + 1;
        if (sVar1 == 0xffffffff) goto LAB_002065d8;
        *param_2 = local_24;
        param_6 = pcVar2 + sVar1;
        pcVar2 = param_6;
        pwVar3 = param_3;
      } while (param_3 < param_4);
    }
  }
  else if (param_3 < param_4 && param_6 < param_7) {
    do {
      sVar1 = wcrtomb(acStack_28,*pwVar3,(mbstate_t *)&local_24);
      param_3 = pwVar3 + 1;
      if (sVar1 == 0xffffffff) goto LAB_002065d8;
      if ((uint)((int)param_7 - (int)pcVar2) < sVar1) {
        uVar6 = 1;
        goto LAB_002065dc;
      }
      param_6 = pcVar2 + sVar1;
      memcpy(pcVar2,acStack_28,sVar1);
      bVar5 = param_3 <= param_4;
      bVar4 = param_4 == param_3;
      if (bVar5 && !bVar4) {
        bVar5 = param_6 <= param_7;
        bVar4 = param_7 == param_6;
      }
      *param_2 = local_24;
      pcVar2 = param_6;
      pwVar3 = param_3;
    } while (bVar5 && !bVar4);
  }
  uVar6 = param_3 < param_4;
  pcVar2 = param_6;
  pwVar3 = param_3;
LAB_002065dc:
  *param_5 = pwVar3;
  *param_8 = pcVar2;
  return uVar6;
LAB_002065d8:
  uVar6 = 2;
  goto LAB_002065dc;
}


