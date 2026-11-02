/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b33d0  Symbol: FUN_001b33d0 */

void FUN_001b33d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_48 [4];
  int local_38 [5];
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_001b23d4(iVar3);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    piVar7 = (int *)(param_1 + 0x124);
    iVar6 = 0;
    do {
      iVar4 = *piVar7;
      if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x170) == 0)) {
        iVar2 = *(int *)(iVar4 + 0x14);
        if (local_38[iVar2] == 0) {
          iVar5 = (iVar2 + 0x1e) * 4;
          iVar1 = *(int *)(iVar5 + param_1);
          if (iVar1 == 0) {
            iVar1 = jpeg_alloc_huff_table(param_1);
            *(int *)(iVar5 + param_1) = iVar1;
          }
          FUN_001b3144(param_1,iVar1,*(undefined4 *)(iVar3 + (iVar2 + 0x12) * 4 + 4));
          local_38[iVar2] = 1;
        }
      }
      if (*(int *)(param_1 + 0x16c) != 0) {
        iVar4 = *(int *)(iVar4 + 0x18);
        if (local_48[iVar4] == 0) {
          iVar1 = (iVar4 + 0x22) * 4;
          iVar2 = *(int *)(iVar1 + param_1);
          if (iVar2 == 0) {
            iVar2 = jpeg_alloc_huff_table(param_1);
            *(int *)(iVar1 + param_1) = iVar2;
          }
          FUN_001b3144(param_1,iVar2,*(undefined4 *)(iVar3 + (iVar4 + 0x16) * 4 + 4));
          local_48[iVar4] = 1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x120));
  }
  return;
}


