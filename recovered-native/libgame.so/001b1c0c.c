/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1c0c  Symbol: FUN_001b1c0c */

void FUN_001b1c0c(int param_1,int param_2,int param_3,short *param_4,int param_5,int param_6,
                 uint param_7)

{
  short sVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  undefined4 local_128 [65];
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x1a0) + (*(int *)(param_2 + 4) + 0x18) * 4 + 4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a0) + (*(int *)(param_2 + 0x10) + 0x22) * 4 + 4);
  if (param_7 != 0) {
    uVar7 = 0;
    while( true ) {
      (*pcVar2)(local_128,param_3 + param_5 * 4,param_6);
      iVar5 = 0;
      psVar6 = param_4;
      do {
        uVar3 = __mulsf3(*(undefined4 *)((int)local_128 + iVar5),*(undefined4 *)(iVar4 + iVar5));
        __addsf3(uVar3,DAT_001b1cb0);
        sVar1 = __fixsfsi();
        iVar5 = iVar5 + 4;
        *psVar6 = sVar1 + (short)DAT_001b1cb4;
        psVar6 = psVar6 + 1;
      } while (iVar5 != 0x100);
      uVar7 = uVar7 + 1;
      param_4 = param_4 + 0x40;
      if (param_7 <= uVar7) break;
      param_6 = param_6 + *(int *)(param_2 + 0x24);
    }
  }
  return;
}


