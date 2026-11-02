/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167fac  Symbol: touchesMoved */

/* cocos2d::CCTouchDispatcher::touchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void __thiscall
cocos2d::CCTouchDispatcher::touchesMoved(CCTouchDispatcher *this,CCSet *param_1,CCEvent *param_2)

{
  if (this[0x2d] != (CCTouchDispatcher)0x0) {
    touches(this,param_1,param_2,1);
  }
  return;
}


