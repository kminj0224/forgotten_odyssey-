/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ae064  Symbol: FUN_001ae064 */

void FUN_001ae064(int param_1,byte **param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1e0) + 0x18);
  if (0 < param_4) {
    iVar4 = 0;
    do {
      pbVar5 = *param_2;
      iVar8 = iVar2;
      if (iVar2 != 0) {
        while( true ) {
          iVar3 = *(int *)((uint)(*pbVar5 >> 3) * 4 + iVar6);
          iVar7 = ((uint)(pbVar5[1] >> 2) * 0x20 + (uint)(pbVar5[2] >> 3)) * 2;
          sVar1 = *(short *)(iVar7 + iVar3);
          sVar9 = sVar1 + 1;
          *(short *)(iVar7 + iVar3) = sVar9;
          if (sVar9 == 0) {
            *(short *)(iVar7 + iVar3) = sVar1;
          }
          if (iVar8 + -1 == 0) break;
          pbVar5 = pbVar5 + 3;
          iVar8 = iVar8 + -1;
        }
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
    } while (iVar4 != param_4);
  }
  return;
}


