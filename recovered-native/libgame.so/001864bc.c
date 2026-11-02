/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001864bc  Symbol: FUN_001864bc */

undefined4 FUN_001864bc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  pcVar3 = *(char **)(iVar2 + 0x10);
  iVar4 = DAT_00186688 + 0x1864ce;
  if (*pcVar3 == '#') {
    cVar1 = pcVar3[1];
    if (cVar1 == 'R') {
      if ((((pcVar3[2] == 'E') && (pcVar3[3] == 'Q')) && (pcVar3[4] == 'U')) &&
         (((pcVar3[5] == 'I' && (pcVar3[6] == 'R')) && ((pcVar3[7] == 'E' && (pcVar3[8] == 'D'))))))
      {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 9;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 9;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 9;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
          FUN_0017c6c4(param_1);
        }
        return 2;
      }
    }
    else if (cVar1 == 'I') {
      if ((((pcVar3[2] == 'M') && (pcVar3[3] == 'P')) && (pcVar3[4] == 'L')) &&
         (((pcVar3[5] == 'I' && (pcVar3[6] == 'E')) && (pcVar3[7] == 'D')))) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 8;
        *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8;
        if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
          FUN_0017dd5c(param_1);
        }
        if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
           (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
          FUN_0017c6c4(param_1);
        }
        return 3;
      }
    }
    else if ((((cVar1 == 'F') && (pcVar3[2] == 'I')) && (pcVar3[3] == 'X')) &&
            ((pcVar3[4] == 'E' && (pcVar3[5] == 'D')))) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 6;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if ((*pcVar3 == '\0') &&
         (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa,0,pcVar3,param_4), iVar2 < 1)) {
        FUN_0017c6c4(param_1);
      }
      cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
        FUN_0017bae0(param_1,0x41,iVar4 + DAT_0018668c);
      }
      FUN_0017ff44(param_1);
      uVar5 = 4;
      goto LAB_00186658;
    }
  }
  uVar5 = 1;
LAB_00186658:
  iVar2 = FUN_0018480c(param_1);
  *(undefined4 *)(param_1 + 0xac) = 3;
  if (iVar2 == 0) {
    FUN_0017bae0(param_1,*(undefined4 *)(param_1 + 0x54),iVar4 + DAT_00186690);
  }
  else {
    *param_2 = iVar2;
  }
  return uVar5;
}


