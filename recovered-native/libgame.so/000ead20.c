/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ead20  Symbol: Item_Hero_Equip_End */

/* Hero_HeroEquip::Item_Hero_Equip_End() */

void Hero_HeroEquip::Item_Hero_Equip_End(void)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  do {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,iVar3);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,iVar3);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    iVar3 = iVar3 + 1;
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
  } while (iVar3 != 7);
  return;
}


