/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7ca0  Symbol: Set_Item_Upgrade_Count */

/* Set_Item_Upgrade_Count(int) */

undefined8 Set_Item_Upgrade_Count(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = **(int **)(DAT_000c7d48 + 0xc7cac);
  iVar4 = **(int **)(DAT_000c7d4c + 0xc7cb0);
  iVar5 = *(int *)((iVar6 + DAT_000c7d50) * 4 + iVar4);
  piVar8 = (int *)(iVar4 + iVar6 * 2000 + DAT_000c7d54);
  for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
    if ((*piVar8 == 0xa9) && (param_1 + piVar8[3] <= DAT_000c7d58)) {
      *(int *)(iVar4 + iVar2 * 0x14 + iVar6 * 2000 + DAT_000c7d5c + 4) = param_1 + piVar8[3];
      goto LAB_000c7d36;
    }
    piVar8 = piVar8 + 5;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (iVar5 <= iVar3) {
      uVar1 = 0;
LAB_000c7d46:
      return CONCAT44(param_1,uVar1);
    }
    iVar7 = iVar4 + iVar6 * 2000 + iVar2;
    if ((*(int *)(DAT_000c7d54 + iVar7) == 0) &&
       (param_1 + *(int *)(iVar7 + DAT_000c7d60) <= DAT_000c7d58)) {
      iVar4 = iVar4 + iVar3 * 0x14 + iVar6 * 2000;
      *(undefined4 *)(iVar4 + DAT_000c7d54) = 0xa9;
      iVar4 = iVar4 + DAT_000c7d5c;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + param_1;
LAB_000c7d36:
      uVar1 = 1;
      goto LAB_000c7d46;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x14;
  } while( true );
}


