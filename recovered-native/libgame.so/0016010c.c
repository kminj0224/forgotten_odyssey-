/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016010c  Symbol: attachWithIME */

/* cocos2d::CCIMEDelegate::attachWithIME() */

void __thiscall cocos2d::CCIMEDelegate::attachWithIME(CCIMEDelegate *this)

{
  CCIMEDispatcher *this_00;
  
  this_00 = (CCIMEDispatcher *)CCIMEDispatcher::sharedDispatcher();
  CCIMEDispatcher::attachDelegateWithIME(this_00,this);
  return;
}


