/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011d1dc  Symbol: Market_Shop_Item_Sell_Touch */

/* New_Notice::Market_Shop_Item_Sell_Touch() */

undefined8 __thiscall New_Notice::Market_Shop_Item_Sell_Touch(New_Notice *this)

{
  Hero_HeroEquip *this_00;
  Market_Store *this_01;
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = *(int **)(DAT_0011d2e8 + 0x11d1f2);
  iVar2 = *(int *)(this + 0x118);
  iVar3 = *piVar4;
  iVar6 = **(int **)(DAT_0011d2e0 + 0x11d1e8) * 2000;
  iVar5 = iVar3 + (**(int **)(DAT_0011d2e0 + 0x11d1e8) + DAT_0011d2e4) * 4;
  *(int *)(iVar5 + 4) =
       *(int *)(iVar5 + 4) +
       *(int *)(*(int *)(DAT_0011d2ec + 0x11d202) +
                *(int *)(iVar3 + iVar2 * 0x14 + iVar6 + DAT_0011d2f0) * 0x18 + 4);
  *(undefined4 *)(iVar3 + *(int *)(this + 0x118) * 0x14 + iVar6 + DAT_0011d2f0) = 0;
  *(undefined4 *)(iVar3 + *(int *)(this + 0x118) * 0x14 + iVar6 + DAT_0011d2f0 + 4) = 0;
  *(undefined4 *)(iVar3 + *(int *)(this + 0x118) * 0x14 + iVar6 + DAT_0011d2f4 + 4) = 0;
  *(undefined4 *)(iVar3 + *(int *)(this + 0x118) * 0x14 + iVar6 + DAT_0011d2f4) = 0;
  if (**(int **)(DAT_0011d2f8 + 0x11d292) == 2) {
    this_00 = (Hero_HeroEquip *)(**(code **)(*(int *)this + 0x90))(this);
    Hero_HeroEquip::Item_Buy_Call(this_00);
  }
  else if (**(int **)(DAT_0011d2f8 + 0x11d292) == 4) {
    this_01 = (Market_Store *)(**(code **)(*(int *)this + 0x90))(this);
    Market_Store::Item_Buy_Call(this_01);
  }
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  if (*(char *)(*piVar4 + 1) != '\0') {
    pcVar1 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar1,(bool)((char)DAT_0011d2fc + -0x2a));
  }
  FileSave();
  return CONCAT44(iVar2 * 0x14,iVar6);
}


