/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012bff0  Symbol: init */

/* IntroLayer::init() */

int __thiscall IntroLayer::init(IntroLayer *this)

{
  int iVar1;
  CCTouchDispatcher *this_00;
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    this_00 = (CCTouchDispatcher *)cocos2d::CCTouchDispatcher::sharedDispatcher();
    cocos2d::CCTouchDispatcher::addTargetedDelegate(this_00,(CCTouchDelegate *)(this + 0xfc),0,true)
    ;
    (**(code **)(*(int *)this + 0x114))(this,1);
    (**(code **)(*(int *)this + 0x11c))(this,1);
    iVar1 = 1;
  }
  return iVar1;
}


