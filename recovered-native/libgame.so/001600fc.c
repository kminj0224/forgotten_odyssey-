/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001600fc  Symbol: detachWithIME */

/* cocos2d::CCIMEDelegate::detachWithIME() */

void __thiscall cocos2d::CCIMEDelegate::detachWithIME(CCIMEDelegate *this)

{
  CCIMEDispatcher *this_00;
  
  this_00 = (CCIMEDispatcher *)CCIMEDispatcher::sharedDispatcher();
  CCIMEDispatcher::detachDelegateWithIME(this_00,this);
  return;
}


