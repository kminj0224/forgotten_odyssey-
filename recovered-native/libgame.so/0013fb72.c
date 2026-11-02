/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fb72  Symbol: update */

/* cocos2d::CCProgressFromTo::update(float) */

void __thiscall cocos2d::CCProgressFromTo::update(CCProgressFromTo *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar1 = __subsf3(*(undefined4 *)(this + 0x2c),uVar2);
  uVar1 = __mulsf3(uVar1,in_r1);
  fVar3 = (float)__addsf3(uVar2,uVar1);
  CCProgressTimer::setPercentage(fVar3);
  return;
}


