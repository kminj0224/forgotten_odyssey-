/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bad8  Symbol: copyWithZone */

/* cocos2d::CCCallFuncN::copyWithZone(cocos2d::CCZone*) */

int * cocos2d::CCCallFuncN::copyWithZone(CCZone *param_1)

{
  int **in_r1;
  int *this;
  int **ppiVar1;
  
  if (in_r1 != (int **)0x0) {
    this = *in_r1;
    ppiVar1 = (int **)0x0;
    if (this != (int *)0x0) goto LAB_0013bb16;
  }
  this = (int *)operator_new(0x30);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  *this = *(int *)(DAT_0013bb38 + 0x13bb04) + 8;
  in_r1 = (int **)operator_new(4);
  CCZone::CCZone((CCZone *)in_r1,(CCObject *)this);
  ppiVar1 = in_r1;
LAB_0013bb16:
  CCCallFunc::copyWithZone((CCCallFunc *)param_1,(CCZone *)in_r1);
  (**(code **)(*this + 0x30))
            (this,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c));
  if (ppiVar1 != (int **)0x0) {
    operator_delete(ppiVar1);
  }
  return this;
}


