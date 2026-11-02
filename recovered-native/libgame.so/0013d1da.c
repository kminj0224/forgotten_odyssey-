/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d1da  Symbol: startWithTarget */

/* cocos2d::CCAnimate::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCAnimate::startWithTarget(CCAnimate *this,CCNode *param_1)

{
  CCObject *this_00;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  if (this[0x34] != (CCAnimate)0x0) {
    this_00 = (CCObject *)CCSprite::displayedFrame((CCSprite *)param_1);
    *(CCObject **)(this + 0x30) = this_00;
    CCObject::retain(this_00);
  }
  return;
}


