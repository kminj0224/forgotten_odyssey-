/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146650  Symbol: CCNotificationCenter */

/* cocos2d::CCNotificationCenter::CCNotificationCenter() */

CCNotificationCenter * __thiscall
cocos2d::CCNotificationCenter::CCNotificationCenter(CCNotificationCenter *this)

{
  CCObject *this_00;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00146674 + 0x146660) + 8;
  this_00 = (CCObject *)CCArray::arrayWithCapacity(3);
  *(CCObject **)(this + 0x14) = this_00;
  CCObject::retain(this_00);
  return this;
}


