/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e5ec  Symbol: setSubItems */

/* cocos2d::CCMenuItemToggle::setSubItems(cocos2d::CCMutableArray<cocos2d::CCMenuItem*>*) */

void __thiscall
cocos2d::CCMenuItemToggle::setSubItems(CCMenuItemToggle *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x11c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x11c));
  }
  *(CCMutableArray **)(this + 0x11c) = param_1;
  return;
}


