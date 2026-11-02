/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e5d8  Symbol: initWithDuration */

/* cocos2d::CCTintBy::initWithDuration(float, short, short, short) */

int cocos2d::CCTintBy::initWithDuration(float param_1,short param_2,short param_3,short param_4)

{
  CCActionInterval *this;
  int iVar1;
  undefined2 in_r3;
  undefined2 in_stack_00000000;
  
  this = (CCActionInterval *)(int)param_2;
  iVar1 = CCActionInterval::initWithDuration(this,param_1);
  if (iVar1 != 0) {
    *(short *)(this + 0x2a) = param_4;
    *(undefined2 *)(this + 0x2c) = in_r3;
    *(undefined2 *)(this + 0x2e) = in_stack_00000000;
    iVar1 = 1;
  }
  return iVar1;
}


