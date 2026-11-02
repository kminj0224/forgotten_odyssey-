/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001682ec  Symbol: ~CCStandardTouchHandler */

/* cocos2d::CCStandardTouchHandler::~CCStandardTouchHandler() */

CCStandardTouchHandler * __thiscall
cocos2d::CCStandardTouchHandler::~CCStandardTouchHandler(CCStandardTouchHandler *this)

{
  *(int *)this = *(int *)(DAT_00168304 + 0x1682f6) + 8;
  CCTouchHandler::~CCTouchHandler((CCTouchHandler *)this);
  return this;
}


