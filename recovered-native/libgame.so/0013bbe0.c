/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bbe0  Symbol: action */

/* cocos2d::CCHide::action() */

int * cocos2d::CCHide::action(void)

{
  int *this;
  
  this = (int *)operator_new(0x24);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013bc04 + 0x13bbf6) + 8;
  CCObject::autorelease((CCObject *)this);
  return this;
}


