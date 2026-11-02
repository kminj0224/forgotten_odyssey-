/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8250  Symbol: KG_get_Inventory_Full */

/* KG_get_Inventory_Full(int, int) */

undefined4 KG_get_Inventory_Full(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 - 0xa9U < 2) {
    iVar5 = **(int **)(DAT_000c82e8 + 0xc825e);
    iVar2 = **(int **)(DAT_000c82e4 + 0xc825c);
    iVar3 = 0;
    for (iVar1 = 0; iVar1 < *(int *)((iVar5 + DAT_000c82ec) * 4 + iVar2); iVar1 = iVar1 + 1) {
      iVar6 = iVar2 + iVar5 * 2000 + iVar3;
      iVar4 = *(int *)(iVar6 + DAT_000c82f4);
      if (iVar4 == 0) {
        return 0;
      }
      if ((iVar4 == 0xa9) && (param_1 + *(int *)(iVar6 + DAT_000c82f8) <= DAT_000c82f0)) {
        return 0;
      }
      iVar3 = iVar3 + 0x14;
    }
  }
  else {
    iVar2 = **(int **)(DAT_000c82e4 + 0xc825c);
    iVar1 = **(int **)(DAT_000c82e8 + 0xc825e);
    iVar5 = 0;
    for (iVar3 = 0; iVar3 < *(int *)((iVar1 + DAT_000c82ec) * 4 + iVar2); iVar3 = iVar3 + 1) {
      iVar5 = iVar5 + 0x14;
      if (*(int *)(iVar2 + iVar1 * 2000 + iVar5 + DAT_000c82fc) == 0) {
        return 0;
      }
    }
  }
  return 1;
}


