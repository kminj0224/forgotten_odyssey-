/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137780  Symbol: actionWithTarget */

/* cocos2d::CCFollow::actionWithTarget(cocos2d::CCNode*, cocos2d::CCRect const&) */

int * cocos2d::CCFollow::actionWithTarget(CCNode *param_1,CCRect *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x48);
  CCFollow((CCFollow *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithTarget((CCFollow *)this,param_1,param_2);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


