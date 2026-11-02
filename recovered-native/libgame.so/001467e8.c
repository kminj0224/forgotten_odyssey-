/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001467e8  Symbol: addObserver */

/* cocos2d::CCNotificationCenter::addObserver(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, cocos2d::CCObject*) */

void __thiscall
cocos2d::CCNotificationCenter::addObserver
          (CCNotificationCenter *this,CCObject *param_1,_func_void_CCObject_ptr *param_2,
          char *param_3,CCObject *param_4)

{
  int iVar1;
  CCNotificationObserver *this_00;
  
  iVar1 = observerExisted(this,param_1,(char *)param_4);
  if (iVar1 == 0) {
    this_00 = (CCNotificationObserver *)operator_new(0x28);
    CCNotificationObserver::CCNotificationObserver(this_00,param_1,param_2,param_3,param_4);
    if (this_00 != (CCNotificationObserver *)0x0) {
      CCObject::autorelease((CCObject *)this_00);
      CCArray::addObject(*(CCObject **)(this + 0x14));
    }
  }
  return;
}


