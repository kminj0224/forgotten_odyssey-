/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019a380  Symbol: FUN_0019a380 */

void FUN_0019a380(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_0019a554 + 0x19a38c;
  if ((param_1 == (int *)0x0) || (param_1[9] == 0)) {
    FUN_00195ba4(param_1,1,iVar7 + DAT_0019a558,0,0);
    return;
  }
  iVar3 = FUN_00198fbc(param_1);
  iVar8 = param_1[0x2e];
  if ((iVar3 == -1) || (iVar8 == 0)) {
    if (**(char **)(param_1[9] + 0x10) != '>') {
      return;
    }
    FUN_0017a4a4(param_1);
    return;
  }
  iVar3 = FUN_00196b60(iVar8);
  if (iVar3 == 0) {
    FUN_00195ba4(param_1,DAT_0019a560,iVar7 + DAT_0019a55c,iVar8,0);
  }
  iVar4 = param_1[9];
  cVar1 = **(char **)(iVar4 + 0x10);
  if (cVar1 == '/') {
    if ((*(char **)(iVar4 + 0x10))[1] == '>') {
      param_1[0x32] = param_1[0x32] + 2;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 2;
      *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
LAB_0019a496:
      if ((*param_1 != 0) && (pcVar5 = *(code **)(*param_1 + 0x3c), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1[1],iVar8);
      }
      FUN_001958b0(param_1);
      return;
    }
  }
  else if (cVar1 == '>') {
    FUN_0017a4a4(param_1);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 7) == '\0')) {
      iVar3 = FUN_0019c904(param_1[0x2e]);
      iVar8 = param_1[0x2f];
      while( true ) {
        pbVar6 = *(byte **)(param_1[9] + 0x10);
        bVar2 = *pbVar6;
        if (((1 < (byte)(bVar2 - 9)) && (bVar2 != 0xd)) && (bVar2 < 0x20)) break;
        FUN_0019a0dc(param_1);
        if ((pbVar6 == *(byte **)(param_1[9] + 0x10)) || (param_1[0x2f] < iVar8)) break;
      }
      if ((iVar3 != 0) && (param_1[0x11] != 0)) {
        FUN_001794d8(param_1);
      }
      bVar2 = **(byte **)(param_1[9] + 0x10);
      if (((1 < (byte)(bVar2 - 9)) && (bVar2 != 0xd)) && (bVar2 < 0x20)) {
        FUN_0019594c(param_1);
      }
      if (iVar3 == 0) {
        return;
      }
      (***(code ***)(iVar7 + DAT_0019a568))(iVar3);
      return;
    }
    goto LAB_0019a496;
  }
  FUN_00195ba4(param_1,0x49,iVar7 + DAT_0019a564,iVar8,0);
  iVar7 = FUN_0019c30c(iVar8,param_1[0x2e]);
  if (iVar7 != 0) {
    FUN_0017ad68(param_1);
    FUN_001958b0(param_1);
  }
  if (param_1[0x11] != 0) {
    FUN_001794d8(param_1);
  }
  return;
}


