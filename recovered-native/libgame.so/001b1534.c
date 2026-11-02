/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1534  Symbol: FUN_001b1534 */

void FUN_001b1534(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *(int *)(param_1 + 0x198);
  iVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x2000);
  *(int *)(iVar5 + 8) = iVar1;
  iVar5 = DAT_001b15d8;
  piVar4 = (int *)(iVar1 + 0x400);
  iVar6 = 0;
  iVar10 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar2 = 0x8000;
  iVar9 = 0;
  iVar3 = 0;
  iVar1 = DAT_001b15dc;
  do {
    *(int *)(DAT_001b15e0 + (int)piVar4) = iVar3;
    *piVar4 = iVar9;
    piVar4[0x100] = iVar2;
    piVar4[0x200] = iVar8;
    piVar4[0x300] = iVar6;
    piVar4[0x400] = iVar1;
    piVar4[0x500] = iVar7;
    piVar4[0x600] = iVar10;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + DAT_001b15e4;
    iVar9 = iVar9 + DAT_001b15e8;
    iVar2 = iVar2 + DAT_001b15ec;
    iVar8 = iVar8 + DAT_001b15f0;
    iVar6 = iVar6 + DAT_001b15f4;
    iVar1 = iVar1 + 0x8000;
    iVar7 = iVar7 + DAT_001b15f8;
    iVar10 = iVar10 + DAT_001b15fc;
  } while (iVar3 != iVar5);
  return;
}


