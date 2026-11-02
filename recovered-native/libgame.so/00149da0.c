/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149da0  Symbol: ccTouchBegan */

/* cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) */

bool cocos2d::CCLayer::ccTouchBegan(CCTouch *param_1,CCEvent *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(int *)(param_1 + 0x10c) != 0) {
    iVar1 = excuteScriptTouchHandler((CCLayer *)param_1,0,(CCTouch *)param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


