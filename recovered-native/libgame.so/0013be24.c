/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013be24  Symbol: actionWithPosition */

/* cocos2d::CCPlace::actionWithPosition(cocos2d::CCPoint const&) */

int * cocos2d::CCPlace::actionWithPosition(CCPoint *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x2c);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013be68 + 0x13be3e) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 9));
  iVar1 = initWithPosition((CCPlace *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


