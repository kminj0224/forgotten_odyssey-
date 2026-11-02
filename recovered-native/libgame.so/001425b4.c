/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001425b4  Symbol: onEnter */

/* cocos2d::CCNode::onEnter() */

undefined8 __thiscall cocos2d::CCNode::onEnter(CCNode *this)

{
  int **ppiVar1;
  
  arrayMakeObjectsPerformSelector((CCArray *)this,*(_func_void **)(this + 0x40));
  resumeSchedulerAndActions(this);
  this[0x70] = (CCNode)0x1;
  if (*(int *)(this + 0xf8) != 0) {
    ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
    (**(code **)(**ppiVar1 + 0x34))(*ppiVar1,*(int *)(this + 0xf8),0);
  }
  return 0x1000000b0;
}


