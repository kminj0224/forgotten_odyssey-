/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011e5a4  Symbol: Reinforcement_Touch */

/* New_Notice::Reinforcement_Touch() */

void __thiscall New_Notice::Reinforcement_Touch(New_Notice *this)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Market_Store *this_00;
  Hero_HeroEquip *this_01;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  
  iVar9 = DAT_0011e74c + 0x11e5b0;
  piVar5 = *(int **)(iVar9 + DAT_0011e750);
  if (*(int *)(this + 0x114) == 10) {
    iVar7 = *(int *)(this + 0x118) * 0x14 + **(int **)(iVar9 + DAT_0011e754) * 2000 + DAT_0011e758;
  }
  else {
    iVar7 = *(int *)(this + 0x118) * 0x14 + **(int **)(iVar9 + DAT_0011e75c) * 0x50 +
            **(int **)(iVar9 + DAT_0011e754) * 0x2d0 + DAT_0011e760;
  }
  pvVar8 = (void *)(*piVar5 + iVar7);
  if (*(int *)((int)pvVar8 + 8) < 100) {
    iVar7 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),pvVar8,0);
    iVar6 = *(int *)(iVar9 + DAT_0011e764);
    iVar7 = *(int *)(iVar6 + iVar7 * 0xc + 8);
    iVar1 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),pvVar8,1);
    iVar7 = iVar7 * *(int *)(iVar6 + iVar1 * 0xc + 4);
    iVar1 = Get_Item_Upgrade_Count();
    if (iVar1 < iVar7) {
      MarketLayer::set_In_App_Layer(**(int **)(iVar9 + DAT_0011e768));
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
    }
    else {
      Rmove_Item_Upgread_Count(iVar7);
      if (*(char *)(*piVar5 + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_0011e76c + 'r'));
      }
      *(int *)((int)pvVar8 + 8) = *(int *)((int)pvVar8 + 8) + 1;
      uVar3 = __floatsisf(*(undefined4 *)((int)pvVar8 + 0x10));
      iVar7 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),pvVar8,0);
      uVar4 = __addsf3(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar9 + DAT_0011e770)),0x3f800000);
      __mulsf3(uVar3,uVar4);
      iVar1 = __fixsfsi();
      iVar7 = DAT_0011e774;
      *(int *)((int)pvVar8 + 0xc) =
           *(int *)((int)pvVar8 + 0xc) + (iVar1 - *(int *)((int)pvVar8 + 0x10));
      piVar5 = *(int **)(iVar9 + iVar7);
      if (*piVar5 == 4) {
        this_00 = (Market_Store *)(**(code **)(*(int *)this + 0x90))(this);
        Market_Store::Item_Buy_Call(this_00);
      }
      if (*piVar5 == 2) {
        iVar9 = (**(code **)(*(int *)this + 0x90))(this);
        Equip_Layer::reset(*(Equip_Layer **)(iVar9 + 0x11c));
        iVar9 = (**(code **)(*(int *)this + 0x90))(this);
        InventoryLayer::reset(*(InventoryLayer **)(iVar9 + 0x114));
      }
      if (*(int *)((int)pvVar8 + 8) < 99) {
        (**(code **)(*(int *)this + 0xd4))(this,1);
        noticeWithTypeItem(this,*(int *)(this + 0x114),(char *)0x0,*(int *)(this + 0x118),1,
                           *(int *)(this + 300),0);
      }
      else {
        cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
      }
      if (*piVar5 == 2) {
        this_01 = (Hero_HeroEquip *)(**(code **)(*(int *)this + 0x90))(this);
        Hero_HeroEquip::Item_Buy_Call(this_01);
      }
      FileSave();
    }
  }
  return;
}


