/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015925c  Symbol: ~CCSchedulerScriptHandlerEntry */

/* cocos2d::CCSchedulerScriptHandlerEntry::~CCSchedulerScriptHandlerEntry() */

CCSchedulerScriptHandlerEntry * __thiscall
cocos2d::CCSchedulerScriptHandlerEntry::~CCSchedulerScriptHandlerEntry
          (CCSchedulerScriptHandlerEntry *this)

{
  int **ppiVar1;
  
  *(int *)this = *(int *)(DAT_00159288 + 0x159266) + 8;
  CCObject::release(*(CCObject **)(this + 0x14));
  ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
  (**(code **)(**ppiVar1 + 0x1c))(*ppiVar1,*(undefined4 *)(this + 0x1c));
  CCObject::~CCObject((CCObject *)this);
  return this;
}


