/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a5e8  Symbol: initWithDuration */

/* cocos2d::CCTransitionPageTurn::initWithDuration(float, cocos2d::CCScene*, bool) */

undefined4
cocos2d::CCTransitionPageTurn::initWithDuration(float param_1,CCScene *param_2,bool param_3)

{
  CCScene in_r3;
  
  param_2[0x10a] = in_r3;
  CCTransitionScene::initWithDuration((CCTransitionScene *)param_2,param_1,(CCScene *)(uint)param_3)
  ;
  return 1;
}


