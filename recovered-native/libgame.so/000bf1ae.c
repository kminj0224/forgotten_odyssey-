/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf1ae  Symbol: vDrawFrame_return */

/* vDrawFrame_return(char const*) */

void vDrawFrame_return(char *param_1)

{
  CCSpriteFrameCache *this;
  CCSpriteFrame *pCVar1;
  
  this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar1 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this,param_1);
  if (pCVar1 != (CCSpriteFrame *)0x0) {
    cocos2d::CCSprite::spriteWithSpriteFrame(pCVar1);
  }
  return;
}


