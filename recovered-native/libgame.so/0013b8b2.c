/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b8b2  Symbol: initWithTarget */

/* cocos2d::CCCallFunc::initWithTarget(cocos2d::CCObject*) */

undefined4 __thiscall cocos2d::CCCallFunc::initWithTarget(CCCallFunc *this,CCObject *param_1)

{
  if (param_1 != (CCObject *)0x0) {
    CCObject::retain(param_1);
  }
  if (*(CCObject **)(this + 0x24) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x24));
  }
  *(CCObject **)(this + 0x24) = param_1;
  return 1;
}


