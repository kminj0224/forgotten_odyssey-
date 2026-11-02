/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e4404  Symbol: GetSprite */

/* GetSprite(char const*) */

CCSprite * GetSprite(char *param_1)

{
  CCSprite *this;
  CCSpriteFrameCache *this_00;
  CCSpriteFrame *pCVar1;
  
  this = (CCSprite *)operator_new(0x1c8);
  cocos2d::CCSprite::CCSprite(this);
  cocos2d::CCObject::autorelease((CCObject *)this);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar1 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_00,param_1);
  if (pCVar1 != (CCSpriteFrame *)0x0) {
    cocos2d::CCSprite::initWithSpriteFrame(this,pCVar1);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_000e4448 + 0xe443a),param_1);
}


