/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d14b8  Symbol: visit */

/* InventoryLayer::visit() */

undefined8 __thiscall InventoryLayer::visit(InventoryLayer *this)

{
  undefined4 uVar1;
  int iVar2;
  CCDirector *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar2 = DAT_000d1568;
  uVar1 = DAT_000d1564;
  glEnable(DAT_000d1564);
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar4 = __mulsf3(uVar4,DAT_000d156c);
  puVar8 = *(undefined4 **)(iVar2 + 0xd14d2);
  uVar4 = __mulsf3(uVar4,*puVar8);
  __divsf3(uVar4,DAT_000d1570);
  uVar4 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar5 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar5 = __mulsf3(uVar5,DAT_000d1574);
  uVar5 = __mulsf3(uVar5,puVar8[1]);
  __divsf3(uVar5,DAT_000d1578);
  uVar5 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar6 = __mulsf3(uVar6,DAT_000d157c);
  uVar6 = __mulsf3(uVar6,*puVar8);
  __divsf3(uVar6,DAT_000d1570);
  uVar6 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar7 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar7 = __mulsf3(uVar7,DAT_000d1580);
  uVar7 = __mulsf3(uVar7,puVar8[1]);
  __divsf3(uVar7,DAT_000d1578);
  uVar7 = __fixsfsi();
  glScissor(uVar4,uVar5,uVar6,uVar7);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(uVar1);
  return CONCAT44(this,uVar6);
}


