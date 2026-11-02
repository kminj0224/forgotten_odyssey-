/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142516  Symbol: schedule */

/* cocos2d::CCNode::schedule(void (cocos2d::CCObject::*)(float), float) */

void __thiscall cocos2d::CCNode::schedule(CCNode *this,_func_void_float *param_1,float param_2)

{
  _func_void_float *p_Var1;
  bool in_r2;
  float extraout_s0;
  
  p_Var1 = (_func_void_float *)CCScheduler::sharedScheduler();
  CCScheduler::scheduleSelector(p_Var1,(CCObject *)param_1,extraout_s0,in_r2);
  return;
}


