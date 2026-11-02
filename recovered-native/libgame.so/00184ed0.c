/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00184ed0  Symbol: FUN_00184ed0 */

void FUN_00184ed0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = DAT_00185020 + 0x184edc;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  do {
    pcVar6 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    cVar1 = *pcVar6;
    if (cVar1 == '\0') {
      return;
    }
    if ((cVar1 == '<') && (pcVar6[1] == '/')) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == -1) {
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x24);
    if (cVar1 == '<') {
      if (pcVar6[1] == '?') {
        FUN_00181988(param_1);
      }
      else if (pcVar6[1] == '!') {
        if (pcVar6[2] == '[') {
          if (((((pcVar6[3] != 'C') || (pcVar6[4] != 'D')) || (pcVar6[5] != 'A')) ||
              ((pcVar6[6] != 'T' || (pcVar6[7] != 'A')))) || (pcVar6[8] != '[')) goto LAB_00184f5c;
          FUN_0017e15c(param_1);
        }
        else {
          if ((pcVar6[2] != '-') || (pcVar6[3] != '-')) goto LAB_00184f5c;
          FUN_0017e97c(param_1);
          *(int *)(param_1 + 0xac) = 7;
        }
      }
      else {
LAB_00184f5c:
        FUN_00184c4c(param_1);
      }
    }
    else if (cVar1 == '&') {
      FUN_00186000(param_1);
    }
    else {
      FUN_00182b9c(param_1,0);
    }
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x24);
      pcVar5 = *(char **)(iVar4 + 0x10);
      if ((*pcVar5 != '\0') || (*(int *)(param_1 + 0x28) < 2)) break;
      FUN_0017c6c4(param_1);
    }
    if ((*(int *)(param_1 + 0x124) == 0) &&
       ((500 < (int)pcVar5 - *(int *)(iVar4 + 0xc) &&
        (*(int *)(iVar4 + 0x14) - (int)pcVar5 <= DAT_00185024)))) {
      FUN_0017cc50(param_1);
    }
    if ((iVar2 == *(int *)(*(int *)(param_1 + 0x24) + 0x24)) &&
       (pcVar6 == *(char **)(*(int *)(param_1 + 0x24) + 0x10))) {
      FUN_0017b7fc(param_1,1,iVar3 + DAT_00185028);
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      return;
    }
  } while( true );
}


