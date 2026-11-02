/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe488  Symbol: Lethal */

/* Hero7::Lethal() */

Hero7 * __thiscall Hero7::Lethal(Hero7 *this)

{
  CCSpriteFrameCache *this_00;
  int *piVar1;
  CCNode *pCVar2;
  undefined4 *puVar3;
  CCNode **ppCVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  pcVar6 = (char *)(DAT_000fe558 + 0xfe494);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,pcVar6);
  pcVar5 = (char *)(DAT_000fe560 + 0xfe4aa);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fe55c + 0xfe4a6),1);
  uVar7 = (**(code **)(*piVar1 + 0xa8))();
  *(undefined4 *)(this + 0x114) = 0;
  this[0x118] = (Hero7)0x0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawScript_Lethal(pcVar5,(char *)(DAT_000fe56c + 0xfe4e8),pcVar6,(CCNode *)this,local_28,local_24
                     ,1,2,true);
  puVar3 = (undefined4 *)(DAT_000fe574 + 0xfe502);
  uVar7 = vScript_Unit(pcVar5,(char *)(DAT_000fe570 + 0xfe500),(CCNode *)this,2,1);
  ppCVar4 = (CCNode **)*puVar3;
  pCVar2 = *ppCVar4;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawScript_Lethal(pcVar5,(char *)(DAT_000fe57c + 0xfe530),pcVar6,pCVar2,local_20,local_1c,10,
                     DAT_000fe580,true);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar4,DAT_000fe580);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


