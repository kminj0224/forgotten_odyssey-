/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149e20  Symbol: ccTouchesEnded */

/* cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void cocos2d::CCLayer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    excuteScriptTouchHandler((CCLayer *)param_1,2,(CCSet *)param_2);
  }
  return;
}


