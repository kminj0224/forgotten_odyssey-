/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001adf8c  Symbol: FUN_001adf8c */

void FUN_001adf8c(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_48;
  int local_34;
  
  iVar6 = *(int *)(param_1 + 0x1e0);
  iVar11 = *(int *)(param_1 + 0x78);
  iVar10 = *(int *)(param_1 + 0x70);
  if (0 < param_4) {
    local_48 = 0;
    local_34 = 0;
    do {
      jzero_far(*(undefined4 *)(param_3 + local_48),iVar10);
      iVar7 = *(int *)(iVar6 + 0x30);
      if (0 < iVar11) {
        iVar12 = 0;
        iVar13 = iVar6;
        do {
          iVar2 = *(int *)(param_3 + local_48);
          iVar4 = *(int *)(iVar12 * 4 + *(int *)(iVar6 + 0x18));
          iVar8 = *(int *)(iVar13 + 0x34);
          if (iVar10 != 0) {
            pbVar3 = (byte *)(*(int *)(param_2 + local_48) + iVar12);
            iVar9 = 0;
            uVar5 = 0;
            do {
              bVar1 = *pbVar3;
              pbVar3 = pbVar3 + iVar11;
              *(char *)(iVar2 + iVar9) =
                   *(char *)(*(int *)(uVar5 * 4 + iVar7 * 0x40 + iVar8) + iVar4 + (uint)bVar1) +
                   *(char *)(iVar2 + iVar9);
              iVar9 = iVar9 + 1;
              uVar5 = uVar5 + 1 & 0xf;
            } while (iVar10 != iVar9);
          }
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 4;
        } while (iVar12 != iVar11);
      }
      *(uint *)(iVar6 + 0x30) = iVar7 + 1U & 0xf;
      local_34 = local_34 + 1;
      local_48 = local_48 + 4;
    } while (local_34 < param_4);
  }
  return;
}


