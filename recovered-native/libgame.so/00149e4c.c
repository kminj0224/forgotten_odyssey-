/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149e4c  Symbol: ccTouchesMoved */

/* cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void cocos2d::CCLayer::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    excuteScriptTouchHandler((CCLayer *)param_1,1,(CCSet *)param_2);
  }
  return;
}


