/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159a14  Symbol: getColor */

/* cocos2d::CCSprite::getColor() */

CCSprite * __thiscall cocos2d::CCSprite::getColor(CCSprite *this)

{
  CCSprite *pCVar1;
  
  pCVar1 = this + 0x105;
  if (this[DAT_00159a2c] != (CCSprite)0x0) {
    pCVar1 = this + 0x1c0;
  }
  return pCVar1;
}


