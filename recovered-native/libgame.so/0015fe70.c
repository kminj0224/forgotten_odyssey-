/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fe70  Symbol: findDelegate */

/* cocos2d::CCIMEDispatcher::Impl::findDelegate(cocos2d::CCIMEDelegate*) */

void __thiscall cocos2d::CCIMEDispatcher::Impl::findDelegate(Impl *this,CCIMEDelegate *param_1)

{
  Impl **ppIVar1;
  
  for (ppIVar1 = *(Impl ***)this;
      (ppIVar1 != (Impl **)this && (param_1 != (CCIMEDelegate *)ppIVar1[2]));
      ppIVar1 = (Impl **)*ppIVar1) {
  }
  return;
}


