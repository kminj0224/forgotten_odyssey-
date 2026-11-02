/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dd7e  Symbol: actionWithDuration */

/* cocos2d::CCJumpBy::actionWithDuration(float, cocos2d::CCPoint const&, float, unsigned int) */

CCPoint * cocos2d::CCJumpBy::actionWithDuration
                    (float param_1,CCPoint *param_2,float param_3,uint param_4)

{
  CCPoint *this;
  undefined8 uVar1;
  
  this = (CCPoint *)operator_new(0x44);
  memset(this,0,0x44);
  uVar1 = CCJumpBy((CCJumpBy *)this);
  initWithDuration((float)uVar1,this,(float)((ulonglong)uVar1 >> 0x20),(uint)param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


