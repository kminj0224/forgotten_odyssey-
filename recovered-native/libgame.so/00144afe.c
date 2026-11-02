/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144afe  Symbol: purgeCachedData */

/* cocos2d::CCDirector::purgeCachedData() */

void cocos2d::CCDirector::purgeCachedData(void)

{
  CCTextureCache *this;
  
  CCLabelBMFont::purgeCachedData();
  this = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  CCTextureCache::removeUnusedTextures(this);
  return;
}


