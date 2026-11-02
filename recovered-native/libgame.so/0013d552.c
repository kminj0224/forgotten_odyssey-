/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d552  Symbol: initOneTwo */

/* cocos2d::CCSequence::initOneTwo(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) */

undefined4 __thiscall
cocos2d::CCSequence::initOneTwo
          (CCSequence *this,CCFiniteTimeAction *param_1,CCFiniteTimeAction *param_2)

{
  float fVar1;
  
  fVar1 = (float)__addsf3(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20));
  CCActionInterval::initWithDuration((CCActionInterval *)this,fVar1);
  *(CCFiniteTimeAction **)(this + 0x2c) = param_1;
  CCObject::retain((CCObject *)param_1);
  *(CCFiniteTimeAction **)(this + 0x30) = param_2;
  CCObject::retain((CCObject *)param_2);
  return 1;
}


