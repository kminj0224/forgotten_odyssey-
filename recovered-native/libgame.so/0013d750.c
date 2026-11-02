/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d750  Symbol: actionWithAction */

/* cocos2d::CCRepeat::actionWithAction(cocos2d::CCFiniteTimeAction*, unsigned int) */

int * cocos2d::CCRepeat::actionWithAction(CCFiniteTimeAction *param_1,uint param_2)

{
  int *this;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013d78c + 0x13d776) + 8;
  initWithAction((CCRepeat *)this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


