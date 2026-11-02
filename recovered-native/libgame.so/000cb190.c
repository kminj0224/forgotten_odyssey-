/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb190  Symbol: vFindScriptPos */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* vFindScriptPos() */

void vFindScriptPos(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  ppcVar4 = *(char ***)(DAT_000cb208 + 0xcb198);
  pcVar2 = *ppcVar4;
  if (pcVar2 != (char *)0x0) {
    pcVar7 = *(char **)((int)ppcVar4 + DAT_000cb20c);
    if (*pcVar2 == '\x01') {
      *(char *)((int)ppcVar4 + DAT_000cb210) = pcVar2[1];
    }
    ppcVar4[1] = (char *)0x0;
    iVar1 = DAT_000cb214;
    pcVar3 = (char *)0x1;
    pcVar6 = (char *)0x0;
    do {
      do {
        do {
          pcVar5 = pcVar6;
          if ((int)pcVar7 <= (int)pcVar5) goto LAB_000cb1fa;
          pcVar8 = pcVar5 + 1;
          pcVar6 = pcVar8;
        } while (pcVar5[(int)pcVar2] != '\r');
        if ((int)pcVar7 <= (int)pcVar8) goto LAB_000cb1fa;
        pcVar6 = pcVar5 + 2;
      } while (pcVar2[(int)pcVar8] != '\n');
      ppcVar4[(int)(pcVar3 + 1)] = pcVar6;
      if ((int)pcVar7 <= (int)pcVar6) break;
      if (pcVar2[(int)pcVar6] == '\x01') {
        ((char *)((int)ppcVar4 + (int)pcVar3))[0xfa4] = (pcVar2 + (int)pcVar6)[1];
      }
      pcVar3 = pcVar3 + 1;
    } while ((int)pcVar3 <= iVar1);
LAB_000cb1fa:
    ppcVar4[0x560] = pcVar3;
    ppcVar4[(int)(pcVar3 + 1)] = pcVar7;
  }
  return;
}


