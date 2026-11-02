/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001591d2  Symbol: setScriptEngine */

/* cocos2d::CCScriptEngineManager::setScriptEngine(cocos2d::CCScriptEngineProtocol*) */

void __thiscall
cocos2d::CCScriptEngineManager::setScriptEngine
          (CCScriptEngineManager *this,CCScriptEngineProtocol *param_1)

{
  removeScriptEngine(this);
  *(CCScriptEngineProtocol **)this = param_1;
  CCObject::retain((CCObject *)param_1);
  return;
}


