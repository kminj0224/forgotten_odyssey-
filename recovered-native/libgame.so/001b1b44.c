/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1b44  Symbol: FUN_001b1b44 */

void FUN_001b1b44(int param_1,int param_2,int param_3,short *param_4,int param_5,int param_6,
                 uint param_7)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int local_128 [65];
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x1a0) + (*(int *)(param_2 + 4) + 10) * 4 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a0) + (*(int *)(param_2 + 0x10) + 0x14) * 4 + 4);
  if (param_7 == 0) {
    return;
  }
  uVar8 = 0;
  do {
    (*pcVar2)(local_128,param_3 + param_5 * 4,param_6);
    iVar6 = 0;
    psVar7 = param_4;
    do {
      while( true ) {
        iVar5 = *(int *)((int)local_128 + iVar6);
        iVar4 = *(int *)(iVar3 + iVar6);
        if (-1 < iVar5) break;
        sVar1 = 0;
        if (iVar4 <= (iVar4 >> 1) - iVar5) {
          sVar1 = __divsi3();
          sVar1 = -sVar1;
        }
        iVar6 = iVar6 + 4;
        *psVar7 = sVar1;
        psVar7 = psVar7 + 1;
        if (iVar6 == 0x100) goto LAB_001b1be6;
      }
      sVar1 = 0;
      if (iVar4 <= (iVar4 >> 1) + iVar5) {
        sVar1 = __divsi3();
      }
      iVar6 = iVar6 + 4;
      *psVar7 = sVar1;
      psVar7 = psVar7 + 1;
    } while (iVar6 != 0x100);
LAB_001b1be6:
    uVar8 = uVar8 + 1;
    param_4 = param_4 + 0x40;
    if (param_7 <= uVar8) {
      return;
    }
    param_6 = param_6 + *(int *)(param_2 + 0x24);
  } while( true );
}


