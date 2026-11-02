/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137418  Symbol: copyWithZone */

/* cocos2d::CCAction::copyWithZone(cocos2d::CCZone*) */

CCAction * __thiscall cocos2d::CCAction::copyWithZone(CCAction *this,CCZone *param_1)

{
  CCAction *this_00;
  CCZone *this_01;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCAction **)param_1;
    this_01 = (CCZone *)0x0;
    if (this_00 != (CCAction *)0x0) goto LAB_00137442;
  }
  this_00 = (CCAction *)operator_new(0x20);
  CCAction(this_00);
  this_01 = (CCZone *)operator_new(4);
  CCZone::CCZone(this_01,(CCObject *)this_00);
LAB_00137442:
  *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x1c);
  if (this_01 != (CCZone *)0x0) {
    operator_delete(this_01);
  }
  return this_00;
}


