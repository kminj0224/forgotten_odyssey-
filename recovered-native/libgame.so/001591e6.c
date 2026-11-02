/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001591e6  Symbol: ~CCScriptEngineManager */

/* cocos2d::CCScriptEngineManager::~CCScriptEngineManager() */

CCScriptEngineManager * __thiscall
cocos2d::CCScriptEngineManager::~CCScriptEngineManager(CCScriptEngineManager *this)

{
  removeScriptEngine(this);
  return this;
}


