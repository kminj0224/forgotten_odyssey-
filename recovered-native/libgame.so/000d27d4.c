/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d27d4  Symbol: Inventory_Item_Init */

/* InventoryLayer::Inventory_Item_Init(int) */

void __thiscall InventoryLayer::Inventory_Item_Init(InventoryLayer *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = **(int **)(DAT_000d2810 + 0xd27de) +
          param_1 * 0x14 + **(int **)(DAT_000d2818 + 0xd27e6) * 2000;
  puVar1 = (undefined4 *)(iVar2 + DAT_000d2814);
  puVar3 = (undefined4 *)(iVar2 + DAT_000d281c);
  *puVar3 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3[1] = 0;
  *(undefined4 *)(iVar2 + DAT_000d2820) = 0;
  return;
}


