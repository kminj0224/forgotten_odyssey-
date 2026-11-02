/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017fbcc  Symbol: FUN_0017fbcc */

char * FUN_0017fbcc(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  pcVar4 = (char *)FUN_0017f6b8();
  iVar6 = DAT_0017fc98 + 0x17fbde;
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    if ((((cVar1 != 'X') && (cVar1 != 'x')) || ((cVar2 = pcVar4[1], cVar2 != 'M' && (cVar2 != 'm')))
        ) || ((cVar3 = pcVar4[2], cVar3 != 'L' && (cVar3 != 'l')))) {
LAB_0017fc8a:
      iVar5 = FUN_0019c42c(pcVar4,0x3a);
      if (iVar5 != 0) {
        FUN_0017bc54(param_1,0xcd,iVar6 + DAT_0017fca8,pcVar4,0,0);
      }
    }
    else if ((cVar1 != 'x') || (((cVar2 != 'm' || (cVar3 != 'l')) || (pcVar4[3] != '\0')))) {
      if (pcVar4[3] == '\0') {
        FUN_0017b7fc(param_1,0x40,0);
      }
      else {
        piVar7 = (int *)(iVar6 + DAT_0017fca0);
        do {
          if (*piVar7 == 0) {
            FUN_0017dcec(param_1,0x40,iVar6 + DAT_0017fca4,0);
            goto LAB_0017fc8a;
          }
          iVar5 = FUN_0019c30c(pcVar4);
          piVar7 = piVar7 + 1;
        } while (iVar5 == 0);
      }
    }
    else {
      FUN_0017bae0(param_1,0x40,iVar6 + DAT_0017fc9c);
    }
  }
  return pcVar4;
}


