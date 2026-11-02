/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001420be  Symbol: unregisterScriptHandler */

/* cocos2d::CCNode::unregisterScriptHandler() */

void __thiscall cocos2d::CCNode::unregisterScriptHandler(CCNode *this)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = (int *)(this + 0xf8);
  if (*piVar2 != 0) {
    ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
    (**(code **)(**ppiVar1 + 0x1c))(*ppiVar1,*piVar2);
    *piVar2 = 0;
  }
  return;
}


