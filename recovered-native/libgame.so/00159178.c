/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159178  Symbol: initWithHandler */

/* cocos2d::CCTouchScriptHandlerEntry::initWithHandler(int, bool, int, bool) */

undefined4 __thiscall
cocos2d::CCTouchScriptHandlerEntry::initWithHandler
          (CCTouchScriptHandlerEntry *this,int param_1,bool param_2,int param_3,bool param_4)

{
  *(int *)(this + 0x1c) = param_3;
  *(int *)(this + 0x14) = param_1;
  this[0x18] = (CCTouchScriptHandlerEntry)param_2;
  this[0x20] = (CCTouchScriptHandlerEntry)param_4;
  return 1;
}


