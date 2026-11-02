/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001396ce  Symbol: update */

/* cocos2d::CCEaseBounceOut::update(float) */

void __thiscall cocos2d::CCEaseBounceOut::update(CCEaseBounceOut *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = CCEaseBounce::bounceTime((CCEaseBounce *)this,param_1);
  (**(code **)(**(int **)(this + 0x2c) + 0x10))(*(int **)(this + 0x2c),uVar1);
  return;
}


