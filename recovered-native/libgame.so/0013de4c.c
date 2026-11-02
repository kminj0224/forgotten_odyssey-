/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013de4c  Symbol: actionWithDuration */

/* cocos2d::CCJumpTo::actionWithDuration(float, cocos2d::CCPoint const&, float, int) */

CCPoint * cocos2d::CCJumpTo::actionWithDuration
                    (float param_1,CCPoint *param_2,float param_3,int param_4)

{
  CCPoint *this;
  undefined8 uVar1;
  
  this = (CCPoint *)operator_new(0x44);
  memset(this,0,0x44);
  uVar1 = CCJumpBy::CCJumpBy((CCJumpBy *)this);
  *this = *(int *)(DAT_0013de94 + 0x13de78) + 8;
  CCJumpBy::initWithDuration((float)uVar1,this,(float)((ulonglong)uVar1 >> 0x20),(uint)param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


