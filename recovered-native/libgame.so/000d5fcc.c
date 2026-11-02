/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d5fcc  Symbol: Inventory_Item_Init */

/* Market_Equip::Inventory_Item_Init(int) */

void __thiscall Market_Equip::Inventory_Item_Init(Market_Equip *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = **(int **)(DAT_000d6008 + 0xd5fd6) +
          param_1 * 0x14 + **(int **)(DAT_000d6010 + 0xd5fde) * 2000;
  puVar1 = (undefined4 *)(iVar2 + DAT_000d600c);
  puVar3 = (undefined4 *)(iVar2 + DAT_000d6014);
  *puVar3 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3[1] = 0;
  *(undefined4 *)(iVar2 + DAT_000d6018) = 0;
  return;
}


