/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b622  Symbol: startWithTarget */

/* cocos2d::CCCallFunc::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCCallFunc::startWithTarget(CCCallFunc *this,CCNode *param_1)

{
  CCAction::startWithTarget((CCAction *)this,param_1);
  (**(code **)(*(int *)this + 0x2c))(this);
  return;
}


