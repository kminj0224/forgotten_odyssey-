/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d7560  Symbol: Item_Set_Equip */

/* Market_Equip::Item_Set_Equip(int, int, int) */

void __thiscall Market_Equip::Item_Set_Equip(Market_Equip *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  
  iVar8 = **(int **)(DAT_000d77bc + 0xd7570);
  iVar7 = param_1 * 0x14;
  piVar11 = *(int **)(DAT_000d77c0 + 0xd758c);
  iVar9 = iVar8 * 0x2d0;
  iVar10 = *piVar11;
  iVar16 = iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9;
  piVar1 = (int *)(iVar16 + DAT_000d77c4);
  iVar14 = *piVar1;
  if (iVar14 != 0) {
    iVar3 = piVar1[1];
    uVar4 = ((undefined4 *)(iVar16 + DAT_000d77cc))[1];
    uVar12 = *(undefined4 *)(iVar16 + DAT_000d77cc);
    uVar5 = *(undefined4 *)(iVar16 + 0x2680);
    *piVar1 = param_3;
    iVar8 = iVar10 + param_2 * 0x14 + iVar8 * 2000;
    piVar1 = (int *)(iVar8 + DAT_000d77e0);
    *(int *)(iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + DAT_000d77c4 + 4) =
         piVar1[1];
    puVar13 = (undefined4 *)(iVar8 + DAT_000d77d0);
    *(undefined4 *)
     (DAT_000d77cc + iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + 4) = puVar13[1]
    ;
    puVar15 = (undefined4 *)(iVar8 + DAT_000d77d4);
    *(undefined4 *)((*(int *)(this + 0x110) + -8) * 0x50 + iVar7 + iVar9 + iVar10 + 0x2680) =
         *puVar15;
    *(undefined4 *)(iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + DAT_000d77cc) =
         *puVar13;
    *piVar1 = iVar14;
    piVar1[1] = iVar3;
    puVar13[1] = uVar4;
    *puVar15 = uVar5;
    *puVar13 = uVar12;
    Draw_Item(this,param_1);
    InventoryLayer::Item_SetInventory(*(InventoryLayer **)(this + 0x170),param_2);
    if (param_1 != 0) {
      return;
    }
    *(undefined4 *)(this + 0x114) = 0xffffffff;
    Image_Name(this,*(int *)(this + 0x110));
    return;
  }
  *piVar1 = param_3;
  iVar8 = iVar10 + param_2 * 0x14 + iVar8 * 2000;
  *(undefined4 *)(iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + DAT_000d77c4 + 4)
       = *(undefined4 *)(DAT_000d77c8 + iVar8);
  puVar13 = (undefined4 *)(iVar8 + DAT_000d77d0);
  *(undefined4 *)(DAT_000d77cc + iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + 4)
       = puVar13[1];
  *(undefined4 *)((*(int *)(this + 0x110) + -8) * 0x50 + iVar7 + iVar9 + iVar10 + DAT_000d77cc) =
       *puVar13;
  *(undefined4 *)(iVar10 + iVar7 + (*(int *)(this + 0x110) + -8) * 0x50 + iVar9 + 0x2680) =
       *(undefined4 *)(iVar8 + DAT_000d77d4);
  Inventory_Item_Init(this,param_2);
  Draw_Item(this,param_1);
  InventoryLayer::Item_Equip(*(int *)(this + 0x170));
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x114) = 0xffffffff;
    Image_Name(this,*(int *)(this + 0x110));
  }
  else if (1 < param_1) {
    if (*(char *)(*piVar11 + 1) == '\0') {
      return;
    }
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar6 = (char)DAT_000d77dc + -0x46;
    goto LAB_000d76b8;
  }
  if (*(char *)(*piVar11 + 1) == '\0') {
    return;
  }
  pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  cVar6 = (char)DAT_000d77d8 + -0x5c;
LAB_000d76b8:
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)cVar6);
  return;
}


