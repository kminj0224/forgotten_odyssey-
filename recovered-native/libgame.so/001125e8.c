/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001125e8  Symbol: Monster_Item_Drop */

/* Monster_Item_Drop(bool) */

void Monster_Item_Drop(bool param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_00112790 + 0x1125f4;
  if (**(char **)(iVar5 + DAT_00112794) == '\0') {
    iVar1 = **(int **)(iVar5 + DAT_0011279c) + -1 + (**(int **)(iVar5 + DAT_00112798) + -1) * 10;
    iVar2 = 0;
    if (4 < iVar1) {
      iVar2 = __divsi3(iVar1,5);
    }
    uVar3 = Random(0,100);
    iVar1 = 3;
    if ((4 < (int)uVar3) && (iVar1 = 2, 9 < (int)uVar3)) {
      iVar1 = (uint)(uVar3 < 0x23) - ((int)uVar3 >> 0x1f);
    }
    if (param_1) {
      iVar4 = Random(0,4);
      iVar7 = iVar2 * 0x19;
      iVar6 = *(int *)(iVar5 + DAT_001127a0);
      Set_Item_Inventory(iVar1,*(int *)((iVar7 + iVar4) * 4 + iVar6));
      iVar5 = Random(0,2);
      Set_Item_Inventory(iVar1,*(int *)((iVar7 + iVar5 + 5) * 4 + iVar6));
      iVar5 = Random(0,10);
      if (iVar5 == 0) {
        iVar5 = Random(0,2);
        Set_Item_Inventory(iVar1,*(int *)((iVar7 + iVar5 + 10) * 4 + iVar6));
      }
      iVar5 = Random(0,10);
      if (iVar5 == 0) {
        iVar5 = Random(0,2);
        Set_Item_Inventory(iVar1,*(int *)(iVar6 + (iVar2 * 0x19 + iVar5 + 0xf) * 4));
      }
      iVar5 = Random(0,0x5f);
      if (iVar5 != 0) {
        return;
      }
      iVar5 = *(int *)(iVar6 + iVar2 * 100 + 0x50);
    }
    else {
      iVar4 = Random(0,100);
      if (iVar4 == 0) {
        iVar4 = Random(0,4);
        Set_Item_Inventory(iVar1,*(int *)((iVar2 * 0x19 + iVar4) * 4 +
                                         *(int *)(iVar5 + DAT_001127a0)));
      }
      iVar4 = Random(0,100);
      if (iVar4 == 0) {
        iVar4 = Random(0,2);
        Set_Item_Inventory(iVar1,*(int *)((iVar2 * 0x19 + iVar4 + 5) * 4 +
                                         *(int *)(iVar5 + DAT_001127a0)));
      }
      iVar4 = Random(0,500);
      if (iVar4 == 0) {
        iVar4 = Random(0,2);
        Set_Item_Inventory(iVar1,*(int *)((iVar2 * 0x19 + iVar4 + 10) * 4 +
                                         *(int *)(iVar5 + DAT_001127a0)));
      }
      iVar4 = Random(0,500);
      if (iVar4 == 0) {
        iVar4 = Random(0,2);
        Set_Item_Inventory(iVar1,*(int *)((iVar2 * 0x19 + iVar4 + 0xf) * 4 +
                                         *(int *)(iVar5 + DAT_001127a0)));
      }
      iVar1 = Random(0,100);
      if (iVar1 != 0) {
        return;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + DAT_001127a0) + iVar2 * 100 + 0x50);
    }
    Set_Item_Inventory(0,iVar5);
  }
  return;
}


