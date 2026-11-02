/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bf94  Symbol: copyWithZone */

/* cocos2d::CCCallFuncO::copyWithZone(cocos2d::CCZone*) */

undefined8 cocos2d::CCCallFuncO::copyWithZone(CCZone *param_1)

{
  int **in_r1;
  undefined4 uVar1;
  int *this;
  int **ppiVar2;
  
  if (in_r1 != (int **)0x0) {
    this = *in_r1;
    ppiVar2 = (int **)0x0;
    if (this != (int *)0x0) goto LAB_0013bfc0;
  }
  this = (int *)operator_new(0x34);
  CCCallFuncO((CCCallFuncO *)this);
  in_r1 = (int **)operator_new(4);
  CCZone::CCZone((CCZone *)in_r1,(CCObject *)this);
  ppiVar2 = in_r1;
LAB_0013bfc0:
  CCCallFunc::copyWithZone((CCCallFunc *)param_1,(CCZone *)in_r1);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*this + 0x30))
            (this,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c));
  if (ppiVar2 != (int **)0x0) {
    operator_delete(ppiVar2);
  }
  return CONCAT44(uVar1,this);
}


