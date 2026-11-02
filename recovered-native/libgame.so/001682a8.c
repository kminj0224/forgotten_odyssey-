/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001682a8  Symbol: ~CCTouchHandler */

/* cocos2d::CCTouchHandler::~CCTouchHandler() */

CCTouchHandler * __thiscall cocos2d::CCTouchHandler::~CCTouchHandler(CCTouchHandler *this)

{
  CCObject *this_00;
  
  *(int *)this = *(int *)(DAT_001682e0 + 0x1682b2) + 8;
  if (*(int *)(this + 0x14) != 0) {
    this_00 = (CCObject *)
              __dynamic_cast(*(int *)(this + 0x14),*(undefined4 *)(DAT_001682e4 + 0x1682c6),
                             *(undefined4 *)(DAT_001682e8 + 0x1682c8),0xfffffffe);
    CCObject::release(this_00);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


