/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d138  Symbol: startWithTarget */

/* cocos2d::CCRepeatForever::startWithTarget(cocos2d::CCNode*) */

void cocos2d::CCRepeatForever::startWithTarget(CCNode *param_1)

{
  CCNode *in_r1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,in_r1);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))(*(int **)(param_1 + 0x2c),in_r1);
  return;
}


