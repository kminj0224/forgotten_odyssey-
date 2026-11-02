/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143808  Symbol: CCPoolManager */

/* cocos2d::CCPoolManager::CCPoolManager() */

CCPoolManager * __thiscall cocos2d::CCPoolManager::CCPoolManager(CCPoolManager *this)

{
  int *this_00;
  
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_00143834 + 0x143820) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  *(int **)this = this_00;
  *(undefined4 *)(this + 4) = 0;
  return this;
}


