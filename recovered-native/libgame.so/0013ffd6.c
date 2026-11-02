/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ffd6  Symbol: startWithTarget */

/* cocos2d::CCSplitCols::startWithTarget(cocos2d::CCNode*) */

undefined8 __thiscall cocos2d::CCSplitCols::startWithTarget(CCSplitCols *this,CCNode *param_1)

{
  CCSplitCols *local_10;
  CCNode *local_c;
  
  local_10 = this;
  local_c = param_1;
  CCGridAction::startWithTarget((CCGridAction *)this,param_1);
  CCDirector::sharedDirector();
  CCDirector::getWinSizeInPixels((CCDirector *)&local_10);
  *(CCSplitCols **)(this + 0x38) = local_10;
  *(CCNode **)(this + 0x3c) = local_c;
  return CONCAT44(local_c,local_10);
}


