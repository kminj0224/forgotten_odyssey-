/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001434c6  Symbol: CCRect */

/* cocos2d::CCRect::CCRect(float, float, float, float) */

CCRect * __thiscall
cocos2d::CCRect::CCRect(CCRect *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  CCPoint::CCPoint((CCPoint *)this);
  CCSize::CCSize((CCSize *)(this + 8));
  *(undefined4 *)this = in_r1;
  *(undefined4 *)(this + 4) = in_r2;
  *(undefined4 *)(this + 8) = in_r3;
  *(undefined4 *)(this + 0xc) = in_stack_00000000;
  return this;
}


