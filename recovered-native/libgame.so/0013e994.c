/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e994  Symbol: initWithAnimation */

/* cocos2d::CCAnimate::initWithAnimation(cocos2d::CCAnimation*, bool) */

int __thiscall
cocos2d::CCAnimate::initWithAnimation(CCAnimate *this,CCAnimation *param_1,bool param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = __floatunsisf(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) -
                        *(int *)(*(int *)(param_1 + 0x1c) + 0x14) >> 2);
  fVar3 = (float)__mulsf3(uVar1,*(undefined4 *)(param_1 + 0x18));
  iVar2 = CCActionInterval::initWithDuration((CCActionInterval *)this,fVar3);
  if (iVar2 != 0) {
    this[0x34] = (CCAnimate)param_2;
    *(CCAnimation **)(this + 0x2c) = param_1;
    CCObject::retain((CCObject *)param_1);
    *(undefined4 *)(this + 0x30) = 0;
    iVar2 = 1;
  }
  return iVar2;
}


