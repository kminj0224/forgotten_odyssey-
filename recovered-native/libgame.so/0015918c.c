/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015918c  Symbol: entryWithHandler */

/* cocos2d::CCTouchScriptHandlerEntry::entryWithHandler(int, bool, int, bool) */

CCTouchScriptHandlerEntry *
cocos2d::CCTouchScriptHandlerEntry::entryWithHandler
          (int param_1,bool param_2,int param_3,bool param_4)

{
  CCTouchScriptHandlerEntry *this;
  
  this = (CCTouchScriptHandlerEntry *)operator_new(0x24);
  CCTouchScriptHandlerEntry(this);
  initWithHandler(this,param_1,param_2,param_3,param_4);
  CCObject::autorelease((CCObject *)this);
  return this;
}


