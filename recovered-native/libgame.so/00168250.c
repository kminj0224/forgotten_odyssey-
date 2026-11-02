/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168250  Symbol: setPriority */

/* cocos2d::CCTouchDispatcher::setPriority(int, cocos2d::CCTouchDelegate*) */

void __thiscall
cocos2d::CCTouchDispatcher::setPriority
          (CCTouchDispatcher *this,int param_1,CCTouchDelegate *param_2)

{
  CCTouchHandler *this_00;
  
  this_00 = (CCTouchHandler *)findHandler(this,param_2);
  CCTouchHandler::setPriority(this_00,param_1);
  rearrangeHandlers(this,*(CCMutableArray **)(this + 0x18));
  rearrangeHandlers(this,*(CCMutableArray **)(this + 0x1c));
  return;
}


