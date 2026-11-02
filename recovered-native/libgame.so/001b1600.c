/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1600  Symbol: FUN_001b1600 */

void FUN_001b1600(int param_1,byte **param_2,int *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  uVar7 = *(uint *)(param_1 + 0x1c);
  param_4 = param_4 << 2;
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    pbVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar8 = *(int *)(*param_3 + param_4);
    iVar9 = *(int *)(param_3[1] + param_4);
    iVar10 = *(int *)(param_3[2] + param_4);
    if (uVar7 != 0) {
      uVar2 = 0;
      do {
        uVar3 = (uint)*pbVar1;
        uVar5 = (uint)pbVar1[1];
        uVar4 = (uint)pbVar1[2];
        pbVar1 = pbVar1 + 3;
        *(char *)(iVar8 + uVar2) =
             (char)((uint)(*(int *)((uVar5 + 0x100) * 4 + iVar6) +
                           *(int *)((uVar4 + 0x200) * 4 + iVar6) + *(int *)(uVar3 * 4 + iVar6)) >>
                   0x10);
        *(char *)(iVar9 + uVar2) =
             (char)((uint)(*(int *)((uVar5 + 0x400) * 4 + iVar6) +
                           *(int *)((uVar3 + 0x300) * 4 + iVar6) +
                          *(int *)((uVar4 + 0x500) * 4 + iVar6)) >> 0x10);
        *(char *)(iVar10 + uVar2) =
             (char)((uint)(*(int *)((uVar5 + 0x600) * 4 + iVar6) +
                           *(int *)((uVar3 + 0x500) * 4 + iVar6) +
                          *(int *)((uVar4 + 0x700) * 4 + iVar6)) >> 0x10);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar7);
    }
    param_4 = param_4 + 4;
  }
  return;
}


