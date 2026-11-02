/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001591be  Symbol: removeScriptEngine */

/* cocos2d::CCScriptEngineManager::removeScriptEngine() */

void __thiscall cocos2d::CCScriptEngineManager::removeScriptEngine(CCScriptEngineManager *this)

{
  if (*(CCObject **)this != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)this);
    *(undefined4 *)this = 0;
  }
  return;
}


