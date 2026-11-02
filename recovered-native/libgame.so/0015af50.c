/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015af50  Symbol: initWithSpriteFrame */

/* cocos2d::CCSprite::initWithSpriteFrame(cocos2d::CCSpriteFrame*) */

undefined4 __thiscall cocos2d::CCSprite::initWithSpriteFrame(CCSprite *this,CCSpriteFrame *param_1)

{
  undefined4 uVar1;
  
  uVar1 = initWithTexture(this,*(CCTexture2D **)(param_1 + 0x48),(CCRect *)(param_1 + 0x28));
  setDisplayFrame(this,param_1);
  return uVar1;
}


