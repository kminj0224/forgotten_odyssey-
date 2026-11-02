/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c4da  Symbol: initWithDuration */

/* cocos2d::CCTransitionFade::initWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&)
    */

undefined4
cocos2d::CCTransitionFade::initWithDuration(float param_1,CCScene *param_2,_ccColor3B *param_3)

{
  int iVar1;
  CCScene *in_r3;
  
  iVar1 = CCTransitionScene::initWithDuration
                    ((CCTransitionScene *)param_2,param_1,(CCScene *)param_3);
  if (iVar1 != 0) {
    param_2[0x10a] = *in_r3;
    param_2[0x10b] = in_r3[1];
    param_2[0x10c] = in_r3[2];
    param_2[0x10d] = (CCScene)0x0;
  }
  return 1;
}


