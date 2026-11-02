/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161450  Symbol: initWithFile */

/* cocos2d::CCTextureAtlas::initWithFile(char const*, unsigned int) */

CCTextureAtlas * __thiscall
cocos2d::CCTextureAtlas::initWithFile(CCTextureAtlas *this,char *param_1,uint param_2)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_1);
  if (pCVar1 == (CCTexture2D *)0x0) {
    if (this != (CCTextureAtlas *)0x0) {
      (**(code **)(*(int *)this + 8))();
      this = (CCTextureAtlas *)0x0;
    }
  }
  else {
    this = (CCTextureAtlas *)initWithTexture(this,pCVar1,param_2);
  }
  return this;
}


