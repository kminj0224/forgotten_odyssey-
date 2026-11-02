/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149d48  Symbol: ccTouchEnded */

/* cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) */

void cocos2d::CCLayer::ccTouchEnded(CCTouch *param_1,CCEvent *param_2)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    excuteScriptTouchHandler((CCLayer *)param_1,2,(CCTouch *)param_2);
  }
  return;
}


