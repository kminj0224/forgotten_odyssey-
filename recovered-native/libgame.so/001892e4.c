/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001892e4  Symbol: FUN_001892e4 */

void FUN_001892e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  FUN_0017c4fc();
  iVar5 = DAT_001894a8 + 0x1892fe;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (3 < *(int *)(iVar3 + 0x14) - (int)*(undefined **)(iVar3 + 0x10)) {
      local_1c = **(undefined **)(iVar3 + 0x10);
      local_1b = *(undefined *)(*(int *)(iVar3 + 0x10) + 1);
      local_1a = *(undefined *)(*(int *)(iVar3 + 0x10) + 2);
      local_19 = *(undefined *)(*(int *)(iVar3 + 0x10) + 3);
      iVar3 = FUN_001a2fd8(&local_1c,4);
      if (iVar3 != 0) {
        FUN_00179fd4(param_1,iVar3);
      }
    }
  }
  pcVar4 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (((((*pcVar4 == '<') && (pcVar4[1] == '?')) && (pcVar4[2] == 'x')) &&
      ((pcVar4[3] == 'm' && (pcVar4[4] == 'l')))) &&
     (FUN_0018113c(param_1), *(int *)(param_1 + 0x54) == 0x20)) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = FUN_0018a24c(iVar5 + DAT_001894ac);
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 == 0) {
        FUN_00179430(param_1,iVar5 + DAT_001894b0);
        return;
      }
      *(undefined4 *)(iVar3 + 0x5c) = 0x40;
    }
    iVar5 = *(int *)(param_1 + 8);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2c) == 0)) {
      FUN_0018a2f4(iVar5,0,param_2,param_3);
    }
    *(undefined4 *)(param_1 + 0xac) = 3;
    *(undefined4 *)(param_1 + 0x60) = 1;
    do {
      iVar5 = *(int *)(param_1 + 0x24);
      pcVar4 = *(char **)(iVar5 + 0x10);
      cVar1 = *pcVar4;
      if (cVar1 == '<') {
        if ((pcVar4[1] != '!') && (pcVar4[1] != '?')) {
LAB_0018947c:
          if ((1 < (byte)(cVar1 - 9U)) && ((cVar1 != ' ' && (cVar1 != '\r')))) goto LAB_00189490;
        }
      }
      else if (cVar1 != '%') goto LAB_0018947c;
      iVar3 = *(int *)(iVar5 + 0x24);
      if ((*(int *)(param_1 + 0x124) == 0) && (*(int *)(iVar5 + 0x14) - (int)pcVar4 < 0xfa)) {
        FUN_0017c738(param_1);
      }
      pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      cVar1 = *pcVar2;
      if (((cVar1 == '<') && (pcVar2[1] == '!')) && (pcVar2[2] == '[')) {
        FUN_00188e0c(param_1);
      }
      else if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (cVar1 == '\r')) {
        FUN_0017a4a4(param_1);
      }
      else if (cVar1 == '%') {
        FUN_00181300(param_1);
      }
      else {
        FUN_001872c8(param_1);
      }
      while( true ) {
        pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
        if ((*pcVar2 != '\0') || (*(int *)(param_1 + 0x28) < 2)) break;
        FUN_0017c6c4(param_1);
      }
    } while ((pcVar2 != pcVar4) || (iVar3 != *(int *)(*(int *)(param_1 + 0x24) + 0x24)));
    FUN_0017b7fc(param_1,0x3c,0);
LAB_00189490:
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\0') {
      FUN_0017b7fc(param_1,0x3c,0);
    }
  }
  return;
}


