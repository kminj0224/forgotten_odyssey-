/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001443b8  Symbol: autorelease */

/* cocos2d::CCObject::autorelease() */

CCObject * __thiscall cocos2d::CCObject::autorelease(CCObject *this)

{
  CCPoolManager *this_00;
  
  this_00 = (CCPoolManager *)CCPoolManager::getInstance();
  CCPoolManager::addObject(this_00,this);
  this[0x10] = (CCObject)0x1;
  return this;
}


