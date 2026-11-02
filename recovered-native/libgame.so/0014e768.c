/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e768  Symbol: unregisterScriptHandler */

/* cocos2d::CCMenuItem::unregisterScriptHandler() */

void __thiscall cocos2d::CCMenuItem::unregisterScriptHandler(CCMenuItem *this)

{
  int **ppiVar1;
  
  if (*(int *)(this + 0x10c) != 0) {
    ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
    (**(code **)(**ppiVar1 + 0x1c))(*ppiVar1,*(undefined4 *)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
  return;
}


