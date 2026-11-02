/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001375b4  Symbol: setInnerAction */

/* cocos2d::CCSpeed::setInnerAction(cocos2d::CCActionInterval*) */

void __thiscall cocos2d::CCSpeed::setInnerAction(CCSpeed *this,CCActionInterval *param_1)

{
  CCObject *this_00;
  
  this_00 = *(CCObject **)(this + 0x24);
  if (this_00 != (CCObject *)param_1) {
    if (this_00 != (CCObject *)0x0) {
      CCObject::release(this_00);
    }
    *(CCActionInterval **)(this + 0x24) = param_1;
    if (param_1 != (CCActionInterval *)0x0) {
      CCObject::retain((CCObject *)param_1);
    }
  }
  return;
}


