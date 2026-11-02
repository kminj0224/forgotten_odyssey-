/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015af6e  Symbol: initWithSpriteFrameName */

/* cocos2d::CCSprite::initWithSpriteFrameName(char const*) */

void __thiscall cocos2d::CCSprite::initWithSpriteFrameName(CCSprite *this,char *param_1)

{
  CCSpriteFrameCache *this_00;
  CCSpriteFrame *pCVar1;
  
  this_00 = (CCSpriteFrameCache *)CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar1 = (CCSpriteFrame *)CCSpriteFrameCache::spriteFrameByName(this_00,param_1);
  initWithSpriteFrame(this,pCVar1);
  return;
}


