/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e8da  Symbol: initWithAction */

/* cocos2d::CCReverseTime::initWithAction(cocos2d::CCFiniteTimeAction*) */

int cocos2d::CCReverseTime::initWithAction(CCFiniteTimeAction *param_1)

{
  int iVar1;
  CCObject *in_r1;
  float in_s0;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_1,in_s0);
  if (iVar1 != 0) {
    if (*(CCObject **)(param_1 + 0x2c) != (CCObject *)0x0) {
      CCObject::release(*(CCObject **)(param_1 + 0x2c));
    }
    *(CCObject **)(param_1 + 0x2c) = in_r1;
    CCObject::retain(in_r1);
    iVar1 = 1;
  }
  return iVar1;
}


