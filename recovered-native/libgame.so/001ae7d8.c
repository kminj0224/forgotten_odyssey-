/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ae7d8  Symbol: FUN_001ae7d8 */

void FUN_001ae7d8(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1e0) + 0x18);
  if (0 < param_4) {
    iVar9 = 0;
    local_38 = 0;
    do {
      iVar6 = *(int *)(param_3 + iVar9);
      pbVar4 = *(byte **)(param_2 + iVar9);
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          while( true ) {
            iVar8 = *(int *)((uint)(*pbVar4 >> 3) * 4 + iVar3);
            iVar7 = ((uint)(pbVar4[1] >> 2) * 0x20 + (uint)(pbVar4[2] >> 3)) * 2;
            sVar1 = *(short *)(iVar7 + iVar8);
            pbVar4 = pbVar4 + 3;
            if (sVar1 != 0) break;
            FUN_001ae410(param_1);
            *(char *)(iVar6 + iVar5) = (char)*(undefined2 *)(iVar7 + iVar8) + -1;
            iVar5 = iVar5 + 1;
            if (iVar2 == iVar5) goto LAB_001ae85e;
          }
          *(char *)(iVar6 + iVar5) = (char)sVar1 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
LAB_001ae85e:
      local_38 = local_38 + 1;
      iVar9 = iVar9 + 4;
    } while (local_38 < param_4);
  }
  return;
}


