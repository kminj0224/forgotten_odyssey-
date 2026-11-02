/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137498  Symbol: action */

/* cocos2d::CCAction::action() */

CCAction * cocos2d::CCAction::action(void)

{
  CCAction *this;
  
  this = (CCAction *)operator_new(0x20);
  CCAction(this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


