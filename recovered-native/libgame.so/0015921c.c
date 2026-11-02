/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015921c  Symbol: ~CCTouchScriptHandlerEntry */

/* cocos2d::CCTouchScriptHandlerEntry::~CCTouchScriptHandlerEntry() */

CCTouchScriptHandlerEntry * __thiscall
cocos2d::CCTouchScriptHandlerEntry::~CCTouchScriptHandlerEntry(CCTouchScriptHandlerEntry *this)

{
  int **ppiVar1;
  
  *(int *)this = *(int *)(DAT_00159244 + 0x159226) + 8;
  ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
  (**(code **)(**ppiVar1 + 0x1c))(*ppiVar1,*(undefined4 *)(this + 0x14));
  CCObject::~CCObject((CCObject *)this);
  return this;
}


