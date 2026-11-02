/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159124  Symbol: entryWithHandler */

/* cocos2d::CCSchedulerScriptHandlerEntry::entryWithHandler(int, float, bool) */

CCSchedulerScriptHandlerEntry *
cocos2d::CCSchedulerScriptHandlerEntry::entryWithHandler(int param_1,float param_2,bool param_3)

{
  CCSchedulerScriptHandlerEntry *this;
  float fVar1;
  
  this = (CCSchedulerScriptHandlerEntry *)operator_new(0x24);
  fVar1 = (float)CCSchedulerScriptHandlerEntry(this);
  initWithHandler(this,param_1,fVar1,param_3);
  CCObject::autorelease((CCObject *)this);
  return this;
}


