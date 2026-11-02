/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160150  Symbol: CCIMEDelegate */

/* cocos2d::CCIMEDelegate::CCIMEDelegate() */

CCIMEDelegate * __thiscall cocos2d::CCIMEDelegate::CCIMEDelegate(CCIMEDelegate *this)

{
  CCIMEDelegate *pCVar1;
  
  *(int *)this = *(int *)(DAT_0016016c + 0x16015a) + 8;
  pCVar1 = (CCIMEDelegate *)CCIMEDispatcher::sharedDispatcher();
  CCIMEDispatcher::addDelegate(pCVar1);
  return this;
}


