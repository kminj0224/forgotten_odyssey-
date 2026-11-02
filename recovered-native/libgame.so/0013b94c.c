/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b94c  Symbol: startWithTarget */

/* cocos2d::CCFlipX::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCFlipX::startWithTarget(CCFlipX *this,CCNode *param_1)

{
  CCAction::startWithTarget((CCAction *)this,param_1);
  CCSprite::setFlipX((CCSprite *)param_1,(bool)this[0x24]);
  return;
}


