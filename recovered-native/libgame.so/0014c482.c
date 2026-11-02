/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c482  Symbol: initWithDuration */

/* cocos2d::CCTransitionScene::initWithDuration(float, cocos2d::CCScene*) */

int __thiscall
cocos2d::CCTransitionScene::initWithDuration(CCTransitionScene *this,float param_1,CCScene *param_2)

{
  int iVar1;
  CCObject *this_00;
  CCTouchDispatcher *this_01;
  CCObject *in_r2;
  
  iVar1 = CCScene::init();
  if (iVar1 != 0) {
    *(CCScene **)(this + 0x104) = param_2;
    *(CCObject **)(this + 0xfc) = in_r2;
    CCObject::retain(in_r2);
    iVar1 = CCDirector::sharedDirector();
    this_00 = *(CCObject **)(iVar1 + 0x44);
    *(CCObject **)(this + 0x100) = this_00;
    CCObject::retain(this_00);
    this_01 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
    CCTouchDispatcher::setDispatchEvents(this_01,false);
    (**(code **)(*(int *)this + 0xec))(this);
    iVar1 = 1;
  }
  return iVar1;
}


