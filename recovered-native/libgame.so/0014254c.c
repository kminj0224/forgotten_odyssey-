/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014254c  Symbol: unschedule */

/* cocos2d::CCNode::unschedule(void (cocos2d::CCObject::*)(float)) */

undefined8 cocos2d::CCNode::unschedule(_func_void_float *param_1)

{
  _func_void_float *p_Var1;
  CCObject *in_r1;
  int in_r2;
  
  if ((in_r1 != (CCObject *)0x0) || (in_r2 << 0x1f < 0)) {
    p_Var1 = (_func_void_float *)CCScheduler::sharedScheduler();
    CCScheduler::unscheduleSelector(p_Var1,in_r1);
  }
  return CONCAT44(in_r2,in_r1);
}


