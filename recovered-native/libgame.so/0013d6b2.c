/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d6b2  Symbol: initWithAction */

/* cocos2d::CCRepeat::initWithAction(cocos2d::CCFiniteTimeAction*, unsigned int) */

int __thiscall
cocos2d::CCRepeat::initWithAction(CCRepeat *this,CCFiniteTimeAction *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = __floatunsisf(param_2);
  fVar3 = (float)__mulsf3(uVar1,*(undefined4 *)(param_1 + 0x20));
  iVar2 = CCActionInterval::initWithDuration((CCActionInterval *)this,fVar3);
  if (iVar2 != 0) {
    *(uint *)(this + 0x2c) = param_2;
    *(CCFiniteTimeAction **)(this + 0x34) = param_1;
    CCObject::retain((CCObject *)param_1);
    *(undefined4 *)(this + 0x30) = 0;
    iVar2 = 1;
  }
  return iVar2;
}


