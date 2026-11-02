/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1714  Symbol: FUN_001b1714 */

void FUN_001b1714(int param_1,byte **param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  param_4 = param_4 << 2;
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    pbVar4 = *param_2;
    param_2 = param_2 + 1;
    iVar2 = *(int *)(*param_3 + param_4);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        *(char *)(iVar2 + uVar5) =
             (char)((uint)(*(int *)((uint)*pbVar4 * 4 + iVar3) +
                          *(int *)((pbVar4[2] + 0x200) * 4 + iVar3) +
                          *(int *)((pbVar4[1] + 0x100) * 4 + iVar3)) >> 0x10);
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 3;
      } while (uVar5 < uVar1);
    }
    param_4 = param_4 + 4;
  }
  return;
}


