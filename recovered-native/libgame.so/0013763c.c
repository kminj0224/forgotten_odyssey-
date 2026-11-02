/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013763c  Symbol: actionWithTarget */

/* cocos2d::CCFollow::actionWithTarget(cocos2d::CCNode*) */

int * cocos2d::CCFollow::actionWithTarget(CCNode *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x48);
  CCFollow((CCFollow *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithTarget((CCFollow *)this,param_1);
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


