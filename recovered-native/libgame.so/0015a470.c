/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a470  Symbol: initWithFile */

/* cocos2d::CCSprite::initWithFile(char const*, cocos2d::CCRect const&) */

CCTexture2D * __thiscall
cocos2d::CCSprite::initWithFile(CCSprite *this,char *param_1,CCRect *param_2)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_1);
  if (pCVar1 != (CCTexture2D *)0x0) {
    pCVar1 = (CCTexture2D *)initWithTexture(this,pCVar1,param_2);
  }
  return pCVar1;
}


