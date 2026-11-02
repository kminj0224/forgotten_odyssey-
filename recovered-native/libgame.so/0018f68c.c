/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f68c  Symbol: FUN_0018f68c */

undefined4 FUN_0018f68c(char *param_1,int *param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = *param_4;
  pcVar6 = param_1 + *param_2;
  pcVar1 = param_1;
  for (pcVar5 = param_3; (pcVar1 < pcVar6 && (pcVar5 < param_3 + iVar3)); pcVar5 = pcVar5 + 1) {
    cVar2 = *pcVar5;
    if (cVar2 == '<') {
      if ((int)pcVar6 - (int)pcVar1 < 4) break;
      *pcVar1 = '&';
      cVar2 = 'l';
LAB_0018f6ca:
      pcVar1[1] = cVar2;
      pcVar1[2] = 't';
      pcVar4 = pcVar1;
LAB_0018f6d2:
      pcVar4[3] = ';';
      pcVar1 = pcVar4 + 4;
    }
    else {
      if (cVar2 == '>') {
        if (3 < (int)pcVar6 - (int)pcVar1) {
          *pcVar1 = '&';
          cVar2 = 'g';
          goto LAB_0018f6ca;
        }
        break;
      }
      if (cVar2 == '&') {
        if (4 < (int)pcVar6 - (int)pcVar1) {
          *pcVar1 = '&';
          pcVar4 = pcVar1 + 1;
          pcVar1[1] = 'a';
          pcVar1[2] = 'm';
          pcVar1[3] = 'p';
          goto LAB_0018f6d2;
        }
        break;
      }
      if (cVar2 == '\r') {
        if ((int)pcVar6 - (int)pcVar1 < 5) break;
        pcVar1[1] = '#';
        *pcVar1 = '&';
        pcVar1[2] = '1';
        pcVar1[3] = '3';
        pcVar1[4] = ';';
        pcVar1 = pcVar1 + 5;
      }
      else {
        *pcVar1 = cVar2;
        pcVar1 = pcVar1 + 1;
      }
    }
  }
  *param_2 = (int)pcVar1 - (int)param_1;
  *param_4 = (int)pcVar5 - (int)param_3;
  return 0;
}


