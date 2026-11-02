/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d2e8  Symbol: FUN_0017d2e8 */

char * FUN_0017d2e8(int param_1,char *param_2,size_t *param_3)

{
  char cVar1;
  char *__s;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((((param_2 != (char *)0x0) && (param_1 != 0)) && (param_3 != (size_t *)0x0)) &&
     (sVar3 = *param_3, 0 < (int)sVar3)) {
    iVar2 = 0;
    pcVar5 = param_2;
    while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 == ' ') {
      iVar2 = iVar2 + 1;
    }
    for (; pcVar5[-1] != '\0'; pcVar5 = pcVar5 + 1) {
      if ((pcVar5[-1] == ' ') && ((*pcVar5 == '\0' || (*pcVar5 == ' ')))) {
        __s = (char *)FUN_0019c88c(param_2 + iVar2,(sVar3 + 1) - iVar2);
        pcVar5 = __s;
        if (__s == (char *)0x0) {
          FUN_00179430(param_1,0);
          return (char *)0x0;
        }
        for (; pcVar4 = __s, *pcVar5 == ' '; pcVar5 = pcVar5 + 1) {
        }
        while (cVar1 = *pcVar5, cVar1 != '\0') {
          if (cVar1 == ' ') {
            for (; *pcVar5 == ' '; pcVar5 = pcVar5 + 1) {
            }
            if (*pcVar5 != '\0') {
              *pcVar4 = ' ';
              pcVar4 = pcVar4 + 1;
            }
          }
          else {
            *pcVar4 = cVar1;
            pcVar5 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
          }
        }
        *pcVar4 = '\0';
        sVar3 = strlen(__s);
        *param_3 = sVar3;
        return __s;
      }
    }
    if (iVar2 != 0) {
      *param_3 = sVar3 - iVar2;
      memmove(param_2,param_2 + iVar2,(sVar3 - iVar2) + 1);
      return param_2;
    }
  }
  return (char *)0x0;
}


