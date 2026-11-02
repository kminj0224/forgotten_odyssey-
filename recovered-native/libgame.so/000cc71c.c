/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc71c  Symbol: ~StageSelect */

/* StageSelect::~StageSelect() */

StageSelect * __thiscall StageSelect::~StageSelect(StageSelect *this)

{
  CCSpriteFrameCache *pCVar1;
  CCNode *pCVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000cc7b4 + 0xcc726);
  *(int *)this = iVar3 + 8;
  *(int *)(this + 0xfc) = iVar3 + 0x13c;
  *(int *)(this + 0x100) = iVar3 + 0x16c;
  *(int *)(this + 0x104) = iVar3 + 0x178;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000cc7b8 + 0xcc750));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000cc7bc + 0xcc75c));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000cc7c0 + 0xcc768));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(pCVar1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  KG_removeChild(pCVar2,true);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  KG_removeChild(pCVar2,true);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  KG_removeChild(pCVar2,true);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
  KG_removeChild(pCVar2,true);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


