/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156d88  Symbol: dictionaryWithContentsOfFile */

/* cocos2d::CCFileUtils::dictionaryWithContentsOfFile(char const*) */

CCObject * cocos2d::CCFileUtils::dictionaryWithContentsOfFile(char *param_1)

{
  CCObject *this;
  
  this = (CCObject *)dictionaryWithContentsOfFileThreadSafe(param_1);
  CCObject::autorelease(this);
  return this;
}


