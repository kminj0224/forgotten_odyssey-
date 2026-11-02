/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149dc0  Symbol: excuteScriptTouchHandler */

/* cocos2d::CCLayer::excuteScriptTouchHandler(int, cocos2d::CCSet*) */

void __thiscall cocos2d::CCLayer::excuteScriptTouchHandler(CCLayer *this,int param_1,CCSet *param_2)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
  (**(code **)(**ppiVar1 + 0x44))
            (*ppiVar1,*(undefined4 *)(*(int *)(this + 0x10c) + 0x14),param_1,param_2);
  return;
}


