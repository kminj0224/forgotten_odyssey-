/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b936  Symbol: startWithTarget */

/* cocos2d::CCFlipY::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCFlipY::startWithTarget(CCFlipY *this,CCNode *param_1)

{
  CCAction::startWithTarget((CCAction *)this,param_1);
  CCSprite::setFlipY((CCSprite *)param_1,(bool)this[0x24]);
  return;
}


