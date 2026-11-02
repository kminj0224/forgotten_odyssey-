/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149aac  Symbol: registerScriptTouchHandler */

/* cocos2d::CCLayer::registerScriptTouchHandler(int, bool, int, bool) */

undefined8 __thiscall
cocos2d::CCLayer::registerScriptTouchHandler
          (CCLayer *this,int param_1,bool param_2,int param_3,bool param_4)

{
  CCObject *this_00;
  
  unregisterScriptTouchHandler(this);
  this_00 = (CCObject *)CCTouchScriptHandlerEntry::entryWithHandler(param_1,param_2,param_3,param_4)
  ;
  *(CCObject **)(this + 0x10c) = this_00;
  CCObject::retain(this_00);
  return CONCAT44(param_3,this);
}


