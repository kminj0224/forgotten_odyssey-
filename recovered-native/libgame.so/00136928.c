/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136928  Symbol: ~CCScheduler */

/* cocos2d::CCScheduler::~CCScheduler() */

CCScheduler * __thiscall cocos2d::CCScheduler::~CCScheduler(CCScheduler *this)

{
  CCObject *this_00;
  
  *(int *)this = *(int *)(DAT_00136958 + 0x136932) + 8;
  unscheduleAllSelectors(this);
  this_00 = *(CCObject **)(this + 0x34);
  *(undefined4 *)(DAT_0013695c + 0x136944) = 0;
  if (this_00 != (CCObject *)0x0) {
    CCObject::release(this_00);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


