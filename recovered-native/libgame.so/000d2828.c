/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d2828  Symbol: Item_Set_Equip */

/* InventoryLayer::Item_Set_Equip(int, int, int) */

void __thiscall
InventoryLayer::Item_Set_Equip(InventoryLayer *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  
  piVar14 = *(int **)(DAT_000d2974 + 0xd283a);
  iVar10 = **(int **)(DAT_000d2970 + 0xd2836);
  iVar1 = *piVar14;
  iVar9 = iVar1 + **(int **)(DAT_000d2978 + 0xd284c) * 0x50 + param_1 * 0x14 + iVar10 * 0x2d0;
  piVar11 = (int *)(iVar9 + DAT_000d297c);
  iVar2 = *piVar11;
  if (iVar2 == 0) {
    *piVar11 = param_3;
    iVar2 = DAT_000d2984;
    iVar1 = iVar1 + param_2 * 0x14 + iVar10 * 2000;
    piVar11[1] = *(int *)(iVar1 + DAT_000d2980 + 4);
    puVar13 = (undefined4 *)(iVar9 + DAT_000d2988);
    puVar13[1] = ((undefined4 *)(iVar1 + iVar2))[1];
    *puVar13 = *(undefined4 *)(iVar1 + iVar2);
    *(undefined4 *)(iVar9 + 0x2680) = *(undefined4 *)(iVar1 + DAT_000d298c);
    Inventory_Item_Init(this,param_2);
    Draw_Item((int)this);
    Item_Equip((int)this);
    Item_SetInventory(this,param_2);
    cVar8 = *(char *)(*piVar14 + 1);
    if (param_1 < 2) {
      if (cVar8 == '\0') {
        return;
      }
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar8 = (char)DAT_000d2990 + -0x14;
    }
    else {
      if (cVar8 == '\0') {
        return;
      }
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar8 = (char)DAT_000d2994 + -6;
    }
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)cVar8);
  }
  else {
    iVar4 = piVar11[1];
    puVar15 = (undefined4 *)(iVar9 + DAT_000d2988);
    uVar5 = puVar15[1];
    uVar6 = *(undefined4 *)(iVar9 + 0x2680);
    uVar7 = *puVar15;
    *piVar11 = param_3;
    iVar1 = iVar1 + param_2 * 0x14 + iVar10 * 2000;
    piVar14 = (int *)(iVar1 + DAT_000d2980);
    piVar11[1] = piVar14[1];
    puVar12 = (undefined4 *)(iVar1 + DAT_000d2984);
    puVar15[1] = puVar12[1];
    puVar13 = (undefined4 *)(iVar1 + DAT_000d298c);
    *(undefined4 *)(iVar9 + 0x2680) = *puVar13;
    *puVar15 = *puVar12;
    *piVar14 = iVar2;
    piVar14[1] = iVar4;
    puVar12[1] = uVar5;
    *puVar13 = uVar6;
    *puVar12 = uVar7;
    Draw_Item((int)this);
    Item_SetInventory(this,param_2);
  }
  return;
}


