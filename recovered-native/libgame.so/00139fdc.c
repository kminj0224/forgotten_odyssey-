/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139fdc  Symbol: action */

/* cocos2d::CCStopGrid::action() */

int * cocos2d::CCStopGrid::action(void)

{
  int *this;
  
  this = (int *)operator_new(0x24);
  memset(this,0,0x24);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013a008 + 0x139ffc) + 8;
  CCObject::autorelease((CCObject *)this);
  return this;
}


