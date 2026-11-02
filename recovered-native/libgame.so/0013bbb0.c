/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bbb0  Symbol: action */

/* cocos2d::CCShow::action() */

int * cocos2d::CCShow::action(void)

{
  int *this;
  
  this = (int *)operator_new(0x24);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013bbd4 + 0x13bbc6) + 8;
  CCObject::autorelease((CCObject *)this);
  return this;
}


