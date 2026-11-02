/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6960  Symbol: FUN_001a6960 */

void FUN_001a6960(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  byte local_4c [16];
  byte local_3c [16];
  int local_2c;
  
  iVar3 = DAT_001a6bfc;
  iVar5 = DAT_001a6bf8 + 0x1a6976;
  local_2c = **(int **)(iVar5 + DAT_001a6bfc);
  iVar7 = *(int *)(param_1 + 0x194);
  if (*(int *)(param_1 + 0xd4) == 0) {
    if (0 < *(int *)(param_1 + 0x120)) {
      piVar9 = (int *)(param_1 + 0x124);
      iVar8 = 0;
      do {
        iVar4 = *piVar9;
        if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x170) == 0)) {
          FUN_001a65b8(param_1,*(undefined4 *)(iVar4 + 0x14),0);
        }
        if (*(int *)(param_1 + 0x16c) != 0) {
          FUN_001a65b8(param_1,*(undefined4 *)(iVar4 + 0x18),1);
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x120));
    }
  }
  else {
    iVar8 = 0;
    do {
      local_4c[iVar8] = 0;
      local_3c[iVar8] = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x10);
    iVar8 = *(int *)(param_1 + 0x120);
    if (0 < iVar8) {
      iVar13 = *(int *)(param_1 + 0x168);
      iVar4 = *(int *)(param_1 + 0x16c);
      piVar9 = (int *)(param_1 + 0x124);
      do {
        iVar6 = *piVar9;
        if ((iVar13 == 0) && (*(int *)(param_1 + 0x170) == 0)) {
          local_3c[*(int *)(iVar6 + 0x14)] = 1;
        }
        if (iVar4 != 0) {
          local_4c[*(int *)(iVar6 + 0x18)] = 1;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != (int *)(param_1 + iVar8 * 4 + 0x124));
    }
    iVar4 = 0;
    iVar8 = 0;
    do {
      pbVar10 = local_4c + iVar8;
      pbVar1 = local_3c + iVar8;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + (uint)*pbVar10 + (uint)*pbVar1;
    } while (iVar8 != 0x10);
    if (iVar4 != 0) {
      FUN_001a6490(param_1,0xcc);
      FUN_001a64a8(param_1,(iVar4 + 1) * 2);
      pbVar10 = (byte *)(param_1 + 0x98);
      iVar8 = 0;
      do {
        if (local_3c[iVar8] == 0) {
          bVar2 = local_4c[iVar8];
        }
        else {
          FUN_001a645c(param_1,iVar8);
          FUN_001a645c(param_1,(uint)pbVar10[0x10] * 0x10 + (uint)*pbVar10);
          bVar2 = local_4c[iVar8];
        }
        if (bVar2 != 0) {
          FUN_001a645c(param_1,iVar8 + 0x10);
          FUN_001a645c(param_1,pbVar10[0x20]);
        }
        iVar8 = iVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (iVar8 != 0x10);
    }
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(iVar7 + 0x1c)) {
    FUN_001a6490(param_1,0xdd);
    FUN_001a64a8(param_1,4);
    FUN_001a64a8(param_1,*(undefined4 *)(param_1 + 0xec));
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(param_1 + 0xec);
  }
  FUN_001a6490(param_1,0xda);
  FUN_001a64a8(param_1,(*(int *)(param_1 + 0x120) + 3) * 2);
  FUN_001a645c(param_1,*(undefined4 *)(param_1 + 0x120));
  if (0 < *(int *)(param_1 + 0x120)) {
    puVar11 = (undefined4 *)(param_1 + 0x124);
    iVar7 = 0;
    do {
      puVar12 = (undefined4 *)*puVar11;
      FUN_001a645c(param_1,*puVar12);
      if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x170) == 0)) {
        iVar8 = puVar12[5] << 4;
      }
      else {
        iVar8 = 0;
      }
      iVar4 = 0;
      if (*(int *)(param_1 + 0x16c) != 0) {
        iVar4 = puVar12[6];
      }
      FUN_001a645c(param_1,iVar4 + iVar8);
      iVar7 = iVar7 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x120));
  }
  FUN_001a645c(param_1,*(undefined4 *)(param_1 + 0x168));
  FUN_001a645c(param_1,*(undefined4 *)(param_1 + 0x16c));
  FUN_001a645c(param_1,*(int *)(param_1 + 0x170) * 0x10 + *(int *)(param_1 + 0x174));
  if (local_2c != **(int **)(iVar5 + iVar3)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


