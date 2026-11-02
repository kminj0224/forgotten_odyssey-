/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137454  Symbol: copyWithZone */

/* cocos2d::CCFollow::copyWithZone(cocos2d::CCZone*) */

CCFollow * __thiscall cocos2d::CCFollow::copyWithZone(CCFollow *this,CCZone *param_1)

{
  CCFollow *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCFollow **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCFollow *)0x0) goto LAB_00137480;
  }
  this_00 = (CCFollow *)operator_new(0x48);
  CCFollow(this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_00137480:
  CCAction::copyWithZone((CCAction *)this,param_1);
  *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x1c);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


