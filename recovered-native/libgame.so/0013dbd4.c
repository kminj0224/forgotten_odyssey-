/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dbd4  Symbol: copyWithZone */

/* cocos2d::CCSkewTo::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCSkewTo::copyWithZone(CCSkewTo *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013dc00;
  }
  this_00 = (int *)operator_new(0x4c);
  CCSkewTo((CCSkewTo *)this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013dc00:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  (**(code **)(*this_00 + 0x28))
            (this_00,*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x3c),
             *(undefined4 *)(this + 0x40));
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


