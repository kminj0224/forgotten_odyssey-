/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b17b8  Symbol: FUN_001b17b8 */

void FUN_001b17b8(int param_1,byte **param_2,int *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = *(uint *)(param_1 + 0x1c);
  iVar6 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  param_4 = param_4 << 2;
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    pbVar5 = *param_2;
    param_2 = param_2 + 1;
    iVar7 = *(int *)(*param_3 + param_4);
    iVar8 = *(int *)(param_3[1] + param_4);
    iVar9 = *(int *)(param_3[2] + param_4);
    iVar10 = *(int *)(param_3[3] + param_4);
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        iVar2 = -(uint)*pbVar5;
        iVar3 = -(uint)pbVar5[1];
        iVar4 = -(uint)pbVar5[2];
        pbVar1 = pbVar5 + 3;
        pbVar5 = pbVar5 + 4;
        *(byte *)(iVar10 + uVar11) = *pbVar1;
        *(char *)(iVar7 + uVar11) =
             (char)((uint)(*(int *)((iVar3 + 0x1ff) * 4 + iVar6) +
                           *(int *)((iVar4 + 0x2ff) * 4 + iVar6) +
                          *(int *)((iVar2 + 0xff) * 4 + iVar6)) >> 0x10);
        *(char *)(iVar8 + uVar11) =
             (char)((uint)(*(int *)((iVar3 + 0x4ff) * 4 + iVar6) +
                           *(int *)((iVar2 + 0x3ff) * 4 + iVar6) +
                          *(int *)((iVar4 + 0x5ff) * 4 + iVar6)) >> 0x10);
        *(char *)(iVar9 + uVar11) =
             (char)((uint)(*(int *)((iVar3 + 0x6ff) * 4 + iVar6) +
                           *(int *)((iVar2 + 0x5ff) * 4 + iVar6) +
                          *(int *)((iVar4 + 0x7ff) * 4 + iVar6)) >> 0x10);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    param_4 = param_4 + 4;
  }
  return;
}


