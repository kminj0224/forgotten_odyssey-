/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188468  Symbol: FUN_00188468 */

undefined4 FUN_00188468(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  iVar5 = DAT_001886bc + 0x188474;
  FUN_0017c498();
  if ((param_1 != (int *)0x0) && (iVar2 = param_1[9], iVar2 != 0)) {
    if ((param_1[0x49] == 0) && (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) < 0xfa)) {
      FUN_0017c738(param_1);
    }
    FUN_0017c4fc(param_1);
    if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x2c), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1[1],*(undefined4 *)(iVar5 + DAT_001886c0));
    }
    if (param_1[6] == 0) {
      iVar2 = param_1[9];
      if (3 < *(int *)(iVar2 + 0x14) - (int)*(undefined **)(iVar2 + 0x10)) {
        local_14 = **(undefined **)(iVar2 + 0x10);
        local_13 = *(undefined *)(*(int *)(iVar2 + 0x10) + 1);
        local_12 = *(undefined *)(*(int *)(iVar2 + 0x10) + 2);
        local_11 = *(undefined *)(*(int *)(iVar2 + 0x10) + 3);
        iVar2 = FUN_001a2fd8(&local_14,4);
        if (iVar2 != 0) {
          FUN_00179fd4(param_1,iVar2);
        }
      }
    }
    if (**(char **)(param_1[9] + 0x10) == '\0') {
      FUN_0017b7fc(param_1,4,0);
    }
    if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa))
    {
      FUN_0017c738(param_1);
    }
    pcVar4 = *(char **)(param_1[9] + 0x10);
    if (((((*pcVar4 == '<') && (pcVar4[1] == '?')) && (pcVar4[2] == 'x')) &&
        ((pcVar4[3] == 'm' && (pcVar4[4] == 'l')))) &&
       ((cVar1 = pcVar4[5], (byte)(cVar1 - 9U) < 2 || ((cVar1 == ' ' || (cVar1 == '\r')))))) {
      FUN_00180f14(param_1);
      if (param_1[0x15] == 0x20) {
        return 0xffffffff;
      }
      param_1[7] = *(int *)(param_1[9] + 0x34);
      FUN_0017ff44(param_1);
    }
    else {
      iVar2 = FUN_0019c870(iVar5 + DAT_001886c4);
      param_1[5] = iVar2;
    }
    if (((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x30), pcVar3 != (code *)0x0)) &&
       (param_1[0x35] == 0)) {
      (*pcVar3)(param_1[1]);
    }
    if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa))
    {
      FUN_0017c738(param_1);
    }
    FUN_00181d68(param_1);
    if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa))
    {
      FUN_0017c738(param_1);
    }
    pcVar4 = *(char **)(param_1[9] + 0x10);
    if (((((*pcVar4 == '<') && (pcVar4[1] == '!')) && (pcVar4[2] == 'D')) &&
        (((pcVar4[3] == 'O' && (pcVar4[4] == 'C')) &&
         ((pcVar4[5] == 'T' && ((pcVar4[6] == 'Y' && (pcVar4[7] == 'P')))))))) && (pcVar4[8] == 'E')
       ) {
      param_1[0x36] = 1;
      FUN_001816a4(param_1);
      if (**(char **)(param_1[9] + 0x10) == '[') {
        param_1[0x2b] = 3;
        FUN_00187390(param_1);
      }
      param_1[0x36] = 2;
      if (((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x68), pcVar3 != (code *)0x0)) &&
         (param_1[0x35] == 0)) {
        (*pcVar3)(param_1[1],param_1[0x37],param_1[0x39],param_1[0x38]);
      }
      param_1[0x36] = 0;
      FUN_0017d3a4(param_1);
      param_1[0x2b] = 4;
      FUN_00181d68(param_1);
    }
    if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa))
    {
      FUN_0017c738(param_1);
    }
    if (**(char **)(param_1[9] + 0x10) == '<') {
      param_1[0x2b] = 7;
      FUN_00184c4c(param_1);
      param_1[0x2b] = 0xe;
      FUN_00181d68(param_1);
      if (**(char **)(param_1[9] + 0x10) != '\0') {
        FUN_0017b7fc(param_1,5,0);
      }
      param_1[0x2b] = -1;
    }
    else {
      FUN_0017bae0(param_1,4,iVar5 + DAT_001886c8);
    }
    if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x34), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1[1]);
    }
    if ((param_1[2] != 0) &&
       (iVar5 = FUN_0019c30c(*(undefined4 *)(param_1[2] + 0x38),iVar5 + DAT_00188790), iVar5 != 0))
    {
      FUN_0018ba54(param_1[2]);
      param_1[2] = 0;
    }
    if ((param_1[3] != 0) && (iVar5 = param_1[2], iVar5 != 0)) {
      *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) | 1;
      if (param_1[0x19] != 0) {
        *(uint *)(param_1[2] + 0x5c) = *(uint *)(param_1[2] + 0x5c) | 8;
      }
      if (param_1[0x59] != 0) {
        *(uint *)(param_1[2] + 0x5c) = *(uint *)(param_1[2] + 0x5c) | 2;
      }
      if (param_1[0x5a] << 0xe < 0) {
        *(uint *)(param_1[2] + 0x5c) = *(uint *)(param_1[2] + 0x5c) | 4;
      }
    }
    if (param_1[3] != 0) {
      return 0;
    }
    param_1[0x19] = 0;
  }
  return 0xffffffff;
}


