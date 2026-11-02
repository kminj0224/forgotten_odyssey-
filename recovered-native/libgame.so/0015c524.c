/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c524  Symbol: removeSpriteFramesFromFile */

/* cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(char const*) */

void __thiscall
cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(CCSpriteFrameCache *this,char *param_1)

{
  char *pcVar1;
  CCObject *this_00;
  
  pcVar1 = (char *)CCFileUtils::fullPathFromRelativePath(param_1);
  this_00 = (CCObject *)CCFileUtils::dictionaryWithContentsOfFileThreadSafe(pcVar1);
  removeSpriteFramesFromDictionary(this,(CCMutableDictionary *)this_00);
  CCObject::release(this_00);
  return;
}


