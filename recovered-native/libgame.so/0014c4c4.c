/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c4c4  Symbol: initWithDuration */

/* cocos2d::CCTransitionSceneOriented::initWithDuration(float, cocos2d::CCScene*,
   cocos2d::tOrientation) */

undefined4
cocos2d::CCTransitionSceneOriented::initWithDuration
          (float param_1,CCScene *param_2,tOrientation param_3)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = CCTransitionScene::initWithDuration
                    ((CCTransitionScene *)param_2,param_1,(CCScene *)param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x10c) = in_r3;
  }
  return 1;
}


