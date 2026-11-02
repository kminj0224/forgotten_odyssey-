/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197054  Symbol: FUN_00197054 */

int FUN_00197054(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x24);
  pbVar4 = *(byte **)(iVar3 + 0x10);
  iVar6 = DAT_001971f0 + 0x197066;
  iVar5 = **(int **)(iVar6 + DAT_001971f4);
  sVar2 = *(short *)((*pbVar4 + 1) * 2 + iVar5);
  if (sVar2 == 0x53) {
    if ((((*(short *)((pbVar4[1] + 1) * 2 + iVar5) == 0x59) &&
         (*(short *)((pbVar4[2] + 1) * 2 + iVar5) == 0x53)) &&
        (*(short *)((pbVar4[3] + 1) * 2 + iVar5) == 0x54)) &&
       ((*(short *)((pbVar4[4] + 1) * 2 + iVar5) == 0x45 &&
        (*(short *)((pbVar4[5] + 1) * 2 + iVar5) == 0x4d)))) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 6;
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
      cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if ((1 < (byte)(cVar1 - 9U)) && ((cVar1 != ' ' && (cVar1 != '\r')))) {
        FUN_00195ba4(param_1,0x41,iVar6 + DAT_001971f8,0,0);
      }
      FUN_00196588(param_1);
      iVar3 = FUN_00196f88(param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_00195ba4(param_1,0x46,iVar6 + DAT_001971fc,0,0);
      return 0;
    }
  }
  else if (((((sVar2 == 0x50) && (*(short *)((pbVar4[1] + 1) * 2 + iVar5) == 0x55)) &&
            (*(short *)((pbVar4[2] + 1) * 2 + iVar5) == 0x42)) &&
           ((*(short *)((pbVar4[3] + 1) * 2 + iVar5) == 0x4c &&
            (*(short *)((pbVar4[4] + 1) * 2 + iVar5) == 0x49)))) &&
          (*(short *)((pbVar4[5] + 1) * 2 + iVar5) == 0x43)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 6;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 6;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 6;
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
      FUN_00195ba4(param_1,0x41,iVar6 + DAT_00197200,0,0);
    }
    FUN_00196588(param_1);
    iVar3 = FUN_00196ec8(param_1);
    *param_2 = iVar3;
    if (iVar3 == 0) {
      FUN_00195ba4(param_1,0x47,iVar6 + DAT_00197204,0,0);
    }
    FUN_00196588(param_1);
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((cVar1 == '\'') || (cVar1 == '\"')) {
      iVar3 = FUN_00196f88(param_1);
      return iVar3;
    }
  }
  return 0;
}


