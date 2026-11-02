/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016831c  Symbol: ~CCTargetedTouchHandler */

/* cocos2d::CCTargetedTouchHandler::~CCTargetedTouchHandler() */

CCTargetedTouchHandler * __thiscall
cocos2d::CCTargetedTouchHandler::~CCTargetedTouchHandler(CCTargetedTouchHandler *this)

{
  *(int *)this = *(int *)(DAT_00168340 + 0x168326) + 8;
  if (*(CCObject **)(this + 0x24) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x24));
  }
  CCTouchHandler::~CCTouchHandler((CCTouchHandler *)this);
  return this;
}


