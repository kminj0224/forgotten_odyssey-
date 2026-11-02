/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cce8  Symbol: addSpriteFramesWithFile */

/* cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(char const*, char const*) */

void __thiscall
cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
          (CCSpriteFrameCache *this,char *param_1,char *param_2)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_2);
  if (pCVar1 != (CCTexture2D *)0x0) {
    addSpriteFramesWithFile(this,param_1,pCVar1);
  }
  return;
}


