/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001ac34  Symbol: FUN_0001ac34 */

undefined4 FUN_0001ac34(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  pcVar6 = *(char **)(param_1 + 0xc);
  if (*pcVar6 != 'L') {
    return 0;
  }
  *(char **)(param_1 + 0xc) = pcVar6 + 1;
  if (pcVar6[1] == '_' || pcVar6[1] == 'Z') {
    uVar8 = FUN_0001aacc(param_1,0);
  }
  else {
    piVar2 = (int *)FUN_000192a8();
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if ((*piVar2 == 0x23) && (*(int *)(piVar2[1] + 0x10) != 0)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - *(int *)(piVar2[1] + 4);
    }
    pcVar6 = *(char **)(param_1 + 0xc);
    cVar1 = *pcVar6;
    if (cVar1 == 'n') {
      *(char **)(param_1 + 0xc) = pcVar6 + 1;
      cVar1 = pcVar6[1];
      uVar8 = 0x36;
      pcVar6 = pcVar6 + 1;
    }
    else {
      uVar8 = 0x35;
    }
    if (cVar1 == 'E') {
      iVar5 = 0;
    }
    else {
      pcVar4 = pcVar6;
      pcVar7 = pcVar6;
      if (cVar1 == '\0') {
        return 0;
      }
      while( true ) {
        pcVar4 = pcVar4 + 1;
        *(char **)(param_1 + 0xc) = pcVar4;
        cVar1 = pcVar7[1];
        if (cVar1 == 'E') break;
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
      }
      iVar5 = (int)pcVar4 - (int)pcVar6;
    }
    uVar3 = FUN_000188ac(param_1,pcVar6,iVar5);
    uVar8 = FUN_00018710(param_1,uVar8,piVar2,uVar3);
  }
  if (**(char **)(param_1 + 0xc) == 'E') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


