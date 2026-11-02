/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d14e  Symbol: startWithTarget */

/* cocos2d::CCRepeat::startWithTarget(cocos2d::CCNode*) */

void cocos2d::CCRepeat::startWithTarget(CCNode *param_1)

{
  CCNode *in_r1;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,in_r1);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(*(int **)(param_1 + 0x34),in_r1);
  return;
}


