/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159150  Symbol: CCTouchScriptHandlerEntry */

/* cocos2d::CCTouchScriptHandlerEntry::CCTouchScriptHandlerEntry() */

CCTouchScriptHandlerEntry * __thiscall
cocos2d::CCTouchScriptHandlerEntry::CCTouchScriptHandlerEntry(CCTouchScriptHandlerEntry *this)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00159174 + 0x159162) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (CCTouchScriptHandlerEntry)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (CCTouchScriptHandlerEntry)0x0;
  return this;
}


