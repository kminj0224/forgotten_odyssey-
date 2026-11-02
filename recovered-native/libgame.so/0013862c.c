/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013862c  Symbol: initWithAction */

/* cocos2d::CCActionEase::initWithAction(cocos2d::CCActionInterval*) */

int cocos2d::CCActionEase::initWithAction(CCActionInterval *param_1)

{
  int iVar1;
  CCObject *in_r1;
  float in_s0;
  
  iVar1 = CCActionInterval::initWithDuration(param_1,in_s0);
  if (iVar1 != 0) {
    *(CCObject **)(param_1 + 0x2c) = in_r1;
    CCObject::retain(in_r1);
    iVar1 = 1;
  }
  return iVar1;
}


