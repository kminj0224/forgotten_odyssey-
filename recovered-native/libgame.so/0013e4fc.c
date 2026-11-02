/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e4fc  Symbol: initWithDuration */

/* cocos2d::CCTintTo::initWithDuration(float, unsigned char, unsigned char, unsigned char) */

int cocos2d::CCTintTo::initWithDuration(float param_1,uchar param_2,uchar param_3,uchar param_4)

{
  CCActionInterval *this;
  int iVar1;
  CCActionInterval in_r3;
  CCActionInterval in_stack_00000000;
  
  this = (CCActionInterval *)(uint)param_2;
  iVar1 = CCActionInterval::initWithDuration(this,param_1);
  if (iVar1 != 0) {
    this[0x29] = (CCActionInterval)param_4;
    this[0x2a] = in_r3;
    this[0x2b] = in_stack_00000000;
    iVar1 = 1;
  }
  return iVar1;
}


