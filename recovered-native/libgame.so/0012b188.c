/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b188  Symbol: ~GameScene */

/* GameScene::~GameScene() */

GameScene * __thiscall GameScene::~GameScene(GameScene *this)

{
  int iVar1;
  CCSpriteFrameCache *this_00;
  CCTextureCache *pCVar2;
  int iVar3;
  CCMutableArray<cocos2d::CCSpriteFrame*> *pCVar4;
  CCMutableArray<cocos2d::CCSpriteFrame*> **ppCVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = DAT_0012b290 + 0x12b194;
  iVar3 = *(int *)(iVar6 + DAT_0012b294);
  *(int *)this = iVar3 + 8;
  *(int *)(this + 0xfc) = iVar3 + 0x140;
  *(int *)(this + 0x104) = iVar3 + 0x17c;
  iVar1 = DAT_0012b298;
  *(int *)(this + 0x100) = iVar3 + 0x170;
  if (**(CCObject ***)(iVar6 + iVar1) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + iVar1));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b29c) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b29c));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b2a0) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2a0));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b2a4) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2a4));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b2a8) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2a8));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b2ac) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2ac));
  }
  if (**(CCObject ***)(iVar6 + DAT_0012b2b0) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2b0));
  }
  ppCVar5 = *(CCMutableArray<cocos2d::CCSpriteFrame*> ***)(iVar6 + DAT_0012b2b4);
  pCVar4 = *ppCVar5;
  uVar7 = *(int *)(pCVar4 + 0x18) - *(int *)(pCVar4 + 0x14) >> 2;
  while( true ) {
    pCVar4 = *ppCVar5;
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 0) break;
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex(pCVar4,uVar7,true);
  }
  cocos2d::CCObject::release((CCObject *)pCVar4);
  cocos2d::CCObject::release(**(CCObject ***)(iVar6 + DAT_0012b2b8));
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::end();
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(this_00);
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames();
  pCVar2 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar2);
  pCVar2 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar2);
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::purgeCachedData();
  operator_delete(**(void ***)(iVar6 + DAT_0012b2bc));
  operator_delete(**(void ***)(iVar6 + DAT_0012b2c0));
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


