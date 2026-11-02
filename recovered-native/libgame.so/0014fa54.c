/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fa54  Symbol: initWithFile */

/* cocos2d::CCProgressTimer::initWithFile(char const*) */

void __thiscall cocos2d::CCProgressTimer::initWithFile(CCProgressTimer *this,char *param_1)

{
  CCTextureCache *this_00;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  CCTextureCache::addImage(this_00,param_1);
  initWithTexture((CCTexture2D *)this);
  return;
}


