/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad0a8  Symbol: FUN_001ad0a8 */

void FUN_001ad0a8(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
                 int param_7)

{
  code **ppcVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  code **ppcVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x1d8);
  iVar4 = *(int *)(iVar7 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x13c);
  if (iVar2 <= iVar4) {
    iVar2 = *(int *)(param_1 + 0xd8);
    if (0 < *(int *)(param_1 + 0x24)) {
      ppcVar5 = (code **)(iVar7 + 0x34);
      iVar4 = 0;
      do {
        ppcVar1 = ppcVar5 + 0xc;
        pcVar3 = *ppcVar5;
        ppcVar5 = ppcVar5 + 1;
        (*pcVar3)(param_1,iVar2,*param_2 + *param_3 * (int)*ppcVar1 * 4,iVar7 + (iVar4 + 2) * 4 + 4)
        ;
        iVar2 = iVar2 + 0x58;
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
    *(undefined4 *)(iVar7 + 0x5c) = 0;
    iVar2 = *(int *)(param_1 + 0x13c);
    iVar4 = 0;
  }
  uVar6 = param_7 - *param_6;
  if (*(uint *)(iVar7 + 0x60) < uVar6) {
    uVar6 = *(uint *)(iVar7 + 0x60);
  }
  if ((uint)(iVar2 - iVar4) < uVar6) {
    uVar6 = iVar2 - iVar4;
  }
  (**(code **)(*(int *)(param_1 + 0x1dc) + 4))
            (param_1,iVar7 + 0xc,iVar4,*param_6 * 4 + param_5,uVar6);
  *param_6 = *param_6 + uVar6;
  *(uint *)(iVar7 + 0x60) = *(int *)(iVar7 + 0x60) - uVar6;
  iVar2 = uVar6 + *(int *)(iVar7 + 0x5c);
  *(int *)(iVar7 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0x13c) <= iVar2) {
    *param_3 = *param_3 + 1;
  }
  return;
}


