/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dd00  Symbol: initWithDuration */

/* cocos2d::CCJumpBy::initWithDuration(float, cocos2d::CCPoint const&, float, unsigned int) */

int cocos2d::CCJumpBy::initWithDuration(float param_1,CCPoint *param_2,float param_3,uint param_4)

{
  int iVar1;
  CCPoint *in_r2;
  CCPoint in_r3;
  CCPoint CVar2;
  CCPoint in_stack_00000000;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
    param_2[0xd] = *in_r2;
    CVar2 = in_r2[1];
    param_2[0xf] = in_r3;
    param_2[0xe] = CVar2;
    param_2[0x10] = in_stack_00000000;
  }
  return iVar1;
}


