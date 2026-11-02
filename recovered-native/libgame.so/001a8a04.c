/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8a04  Symbol: FUN_001a8a04 */

void FUN_001a8a04(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  code **ppcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x19c);
  iVar7 = *(int *)(param_1 + 0x54);
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar5 = 0;
    iVar8 = 0;
    do {
      piVar1 = (int *)(iVar6 + 0x34);
      piVar3 = (int *)(param_2 + iVar5);
      piVar4 = (int *)(param_4 + iVar5);
      ppcVar2 = (code **)(iVar6 + 0xc);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 4;
      (**ppcVar2)(param_1,iVar7,*piVar3 + param_3 * 4,*piVar4 + param_5 * 4 * *piVar1);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x58;
    } while (iVar8 < *(int *)(param_1 + 0x4c));
  }
  return;
}


