/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142608  Symbol: onExit */

/* cocos2d::CCNode::onExit() */

undefined8 cocos2d::CCNode::onExit(void)

{
  CCNode *in_r0;
  int **ppiVar1;
  undefined4 in_r1;
  
  pauseSchedulerAndActions(in_r0);
  in_r0[0x70] = (CCNode)0x0;
  if (*(int *)(in_r0 + 0xf8) != 0) {
    ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
    (**(code **)(**ppiVar1 + 0x34))(*ppiVar1,*(int *)(in_r0 + 0xf8),1);
  }
  arrayMakeObjectsPerformSelector((CCArray *)in_r0,*(_func_void **)(in_r0 + 0x40));
  return CONCAT44(in_r1,in_r0);
}


