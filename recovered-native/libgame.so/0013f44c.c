/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f44c  Symbol: ~CCActionManager */

/* cocos2d::CCActionManager::~CCActionManager() */

CCActionManager * __thiscall cocos2d::CCActionManager::~CCActionManager(CCActionManager *this)

{
  *(int *)this = *(int *)(DAT_0013f470 + 0x13f456) + 8;
  removeAllActions(this);
  *(undefined4 *)(DAT_0013f474 + 0x13f468) = 0;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


