/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bc10  Symbol: action */

/* cocos2d::CCToggleVisibility::action() */

int * cocos2d::CCToggleVisibility::action(void)

{
  int *this;
  
  this = (int *)operator_new(0x24);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013bc34 + 0x13bc26) + 8;
  CCObject::autorelease((CCObject *)this);
  return this;
}


