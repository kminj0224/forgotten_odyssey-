/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aeb20  Symbol: FUN_001aeb20 */

void FUN_001aeb20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x1e0);
  iVar2 = (***(code ***)(param_1 + 4))(param_1,1,DAT_001aeb88);
  piVar4 = (int *)(iVar2 + 0x3fc);
  *(int **)(iVar7 + 0x28) = piVar4;
  iVar7 = 0;
  piVar3 = piVar4;
  do {
    *piVar4 = iVar7;
    piVar4 = piVar4 + 1;
    iVar1 = -iVar7;
    iVar7 = iVar7 + 1;
    *piVar3 = iVar1;
    piVar3 = piVar3 + -1;
  } while (iVar7 != 0x10);
  piVar4 = (int *)(iVar2 + DAT_001aeb8c);
  piVar3 = (int *)(iVar2 + DAT_001aeb8c + -0x80);
  iVar7 = 0x10;
  uVar5 = 0x10;
  do {
    *piVar4 = iVar7;
    piVar4 = piVar4 + 1;
    uVar5 = uVar5 + 1;
    *piVar3 = -iVar7;
    iVar7 = iVar7 + (~uVar5 & 1);
    piVar3 = piVar3 + -1;
  } while (uVar5 != 0x30);
  piVar4 = (int *)(iVar2 + DAT_001aeb90);
  piVar6 = (int *)(iVar2 + 0x33c);
  piVar3 = (int *)(iVar2 + DAT_001aeb88);
  do {
    *piVar4 = iVar7;
    piVar4 = piVar4 + 1;
    *piVar6 = -iVar7;
    piVar6 = piVar6 + -1;
  } while (piVar4 != piVar3);
  return;
}


