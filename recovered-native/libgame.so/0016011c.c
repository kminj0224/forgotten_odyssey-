/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016011c  Symbol: ~CCIMEDelegate */

/* cocos2d::CCIMEDelegate::~CCIMEDelegate() */

CCIMEDelegate * __thiscall cocos2d::CCIMEDelegate::~CCIMEDelegate(CCIMEDelegate *this)

{
  CCIMEDispatcher *this_00;
  
  *(int *)this = *(int *)(DAT_00160138 + 0x160126) + 8;
  this_00 = (CCIMEDispatcher *)CCIMEDispatcher::sharedDispatcher();
  CCIMEDispatcher::removeDelegate(this_00,this);
  return this;
}


