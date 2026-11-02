/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019a0dc  Symbol: FUN_0019a0dc */

void FUN_0019a0dc(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = FUN_0019c904(*(undefined4 *)(param_1 + 0xb8));
  iVar11 = *(int *)(param_1 + 0xbc);
  iVar10 = DAT_0019a35c + 0x19a0fe;
  iVar6 = iVar10 + DAT_0019a360;
  iVar8 = iVar10 + DAT_0019a364;
LAB_0019a106:
  iVar7 = *(int *)(param_1 + 200);
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (iVar4 = *(int *)(param_1 + 0x24), *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) < 0xfa)) {
    FUN_0017a2bc(iVar4,0xfa);
  }
  pcVar9 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (*pcVar9 == '<') {
    cVar1 = pcVar9[1];
    if (cVar1 == '/') {
      iVar7 = FUN_00196d0c(param_1);
      if (iVar7 != 0) {
        if (iVar3 != 0) goto LAB_0019a34c;
        if (*(int *)(param_1 + 0xbc) == 0) {
          return;
        }
      }
      goto LAB_0019a106;
    }
    if ((((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')) &&
       (cVar1 != ':')) goto LAB_0019a1da;
    iVar4 = FUN_001966d4(param_1);
    if (iVar4 == 0) {
      FUN_00195ba4(param_1,0x44,iVar10 + DAT_0019a368,0,0);
      while ((((bVar2 = **(byte **)(*(int *)(param_1 + 0x24) + 0x10), (byte)(bVar2 - 9) < 2 ||
               (bVar2 == 0xd)) || (0x1f < bVar2)) && (bVar2 != 0x3e))) {
        FUN_0017a4a4(param_1);
      }
LAB_0019a348:
      if (iVar3 != 0) {
LAB_0019a34c:
        (***(code ***)(iVar10 + DAT_0019a37c))(iVar3);
      }
      return;
    }
    if ((*(int *)(param_1 + 0xb8) != 0) && (iVar5 = FUN_00196118(), iVar5 == 1)) {
      FUN_00196190(param_1,iVar4);
      goto LAB_0019a106;
    }
  }
LAB_0019a1da:
  if (((0 < *(int *)(param_1 + 0xbc)) && (*(int *)(param_1 + 0xbc) <= iVar11)) &&
     (iVar4 = FUN_0019c30c(iVar3,*(undefined4 *)(param_1 + 0xb8)), iVar4 == 0)) goto LAB_0019a348;
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') ||
     ((iVar4 = FUN_0019c30c(iVar3,iVar10 + DAT_0019a36c), iVar4 == 0 &&
      (iVar4 = FUN_0019c30c(iVar3,iVar10 + DAT_0019a370), iVar4 == 0)))) {
    pcVar9 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (((*pcVar9 == '<') &&
        ((pcVar9[1] == '!' &&
         (iVar4 = **(int **)(iVar10 + DAT_0019a374),
         *(short *)(((byte)pcVar9[2] + 1) * 2 + iVar4) == 0x44)))) &&
       (((*(short *)(((byte)pcVar9[3] + 1) * 2 + iVar4) == 0x4f &&
         (((*(short *)(((byte)pcVar9[4] + 1) * 2 + iVar4) == 0x43 &&
           (*(short *)(((byte)pcVar9[5] + 1) * 2 + iVar4) == 0x54)) &&
          (*(short *)(((byte)pcVar9[6] + 1) * 2 + iVar4) == 0x59)))) &&
        ((*(short *)(((byte)pcVar9[7] + 1) * 2 + iVar4) == 0x50 &&
         (*(short *)(((byte)pcVar9[8] + 1) * 2 + iVar4) == 0x45)))))) {
      FUN_00195ba4(param_1,800,iVar6,iVar8,0);
      FUN_00198360(param_1);
    }
    pcVar9 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    cVar1 = *pcVar9;
    if (cVar1 == '<') {
      if (pcVar9[1] == '!') {
        if ((pcVar9[2] == '-') && (pcVar9[3] == '-')) {
          FUN_00197cb8(param_1);
        }
        else {
LAB_0019a2dc:
          FUN_0019a380(param_1);
        }
      }
      else {
        if (pcVar9[1] != '?') goto LAB_0019a2dc;
        FUN_00198434(param_1);
      }
    }
    else if (cVar1 == '&') {
      FUN_001993d0(param_1);
    }
    else {
      if (cVar1 == '\0') {
        FUN_0019594c(param_1);
        goto LAB_0019a348;
      }
      FUN_00198760(param_1);
    }
    if (iVar7 == *(int *)(param_1 + 200)) {
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_00195ba4(param_1,1,iVar10 + DAT_0019a378,0,0);
      }
      goto LAB_0019a348;
    }
  }
  else {
    FUN_00197ac4(param_1);
  }
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (iVar7 = *(int *)(param_1 + 0x24), *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) < 0xfa)) {
    FUN_0017a2bc(iVar7,0xfa);
  }
  goto LAB_0019a106;
}


