/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d81c  Symbol: actionWithAction */

/* cocos2d::CCRepeatForever::actionWithAction(cocos2d::CCActionInterval*) */

int * cocos2d::CCRepeatForever::actionWithAction(CCActionInterval *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x30);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013d85c + 0x13d836) + 8;
  this[0xb] = 0;
  iVar1 = initWithAction((CCRepeatForever *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


