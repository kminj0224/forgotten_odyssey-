/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1d1c  Symbol: FUN_001a1d1c */

char * FUN_001a1d1c(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = DAT_001a1e08 + 0x1a1d28;
  pcVar7 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar7 = (char *)(***(code ***)(iVar9 + DAT_001a1e0c))(1000);
    iVar1 = DAT_001a1e10;
    iVar2 = DAT_001a1e14;
    if (pcVar7 == (char *)0x0) {
LAB_001a1d6e:
      FUN_001a1d04(iVar9 + iVar2);
    }
    else {
      iVar10 = 1000;
      pcVar6 = pcVar7;
      for (; *param_2 != '\0'; param_2 = param_2 + 1) {
        iVar8 = (int)pcVar6 - (int)pcVar7;
        pcVar5 = pcVar6;
        if (iVar10 + -9 <= iVar8) {
          iVar10 = iVar10 * 2;
          pcVar7 = (char *)(***(code ***)(iVar9 + iVar1))(pcVar7,iVar10);
          iVar2 = DAT_001a1e18;
          if (pcVar7 == (char *)0x0) goto LAB_001a1d6e;
          pcVar5 = pcVar7 + iVar8;
        }
        cVar3 = *param_2;
        pcVar6 = pcVar5;
        if (cVar3 == '<') {
          *pcVar5 = '&';
          pcVar4 = pcVar5 + 1;
          cVar3 = 'l';
LAB_001a1d94:
          pcVar6[1] = cVar3;
          pcVar6 = pcVar4 + 1;
          cVar3 = 't';
LAB_001a1d9a:
          pcVar4[1] = cVar3;
          pcVar6[1] = ';';
          pcVar6 = pcVar6 + 2;
        }
        else {
          if (cVar3 == '>') {
            *pcVar5 = '&';
            pcVar4 = pcVar5 + 1;
            cVar3 = 'g';
            goto LAB_001a1d94;
          }
          if (cVar3 == '&') {
            *pcVar5 = '&';
            pcVar5[1] = 'a';
            pcVar4 = pcVar5 + 2;
            pcVar5[2] = 'm';
            cVar3 = 'p';
            pcVar6 = pcVar5 + 3;
            goto LAB_001a1d9a;
          }
          if (cVar3 == '\"') {
            *pcVar5 = '&';
            pcVar5[1] = 'q';
            pcVar6 = pcVar5 + 2;
            pcVar5[2] = 'u';
            cVar3 = 'o';
            pcVar4 = pcVar5 + 3;
            goto LAB_001a1d94;
          }
          pcVar6 = pcVar5 + 1;
          if (cVar3 == '\r') {
            pcVar5[1] = '#';
            *pcVar5 = '&';
            pcVar4 = pcVar5 + 2;
            pcVar5[2] = '1';
            pcVar6 = pcVar5 + 3;
            cVar3 = '3';
            goto LAB_001a1d9a;
          }
          *pcVar5 = cVar3;
        }
      }
      *pcVar6 = '\0';
    }
  }
  return pcVar7;
}


