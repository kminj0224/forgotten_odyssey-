/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ccc4  Symbol: addSpriteFramesWithFile */

/* cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(char const*, cocos2d::CCTexture2D*) */

void __thiscall
cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
          (CCSpriteFrameCache *this,char *param_1,CCTexture2D *param_2)

{
  char *pcVar1;
  CCObject *this_00;
  
  pcVar1 = (char *)CCFileUtils::fullPathFromRelativePath(param_1);
  this_00 = (CCObject *)CCFileUtils::dictionaryWithContentsOfFileThreadSafe(pcVar1);
  addSpriteFramesWithDictionary(this,(CCMutableDictionary *)this_00,param_2);
  CCObject::release(this_00);
  return;
}


