/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b554c  Symbol: FUN_001b554c */

void FUN_001b554c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x1dc);
  uVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x400,**(code ***)(param_1 + 4),param_4);
  *(undefined4 *)(iVar6 + 8) = uVar1;
  uVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0xc) = uVar1;
  uVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x10) = uVar1;
  uVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x14) = uVar1;
  iVar5 = 0;
  iVar2 = DAT_001b55d4;
  iVar3 = DAT_001b55d8;
  iVar4 = DAT_001b55dc;
  iVar7 = DAT_001b55d0;
  do {
    *(int *)(*(int *)(iVar6 + 8) + iVar5) = iVar4 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0xc) + iVar5) = iVar3 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0x10) + iVar5) = iVar2;
    *(int *)(*(int *)(iVar6 + 0x14) + iVar5) = iVar7;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + DAT_001b55e0;
    iVar3 = iVar3 + DAT_001b55e4;
    iVar2 = iVar2 + DAT_001b55e8;
    iVar7 = iVar7 + DAT_001b55ec;
  } while (iVar5 != 0x400);
  return;
}


