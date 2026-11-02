/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001590b0  Symbol: initWithHandler */

/* cocos2d::CCSchedulerScriptHandlerEntry::initWithHandler(int, float, bool) */

undefined8 __thiscall
cocos2d::CCSchedulerScriptHandlerEntry::initWithHandler
          (CCSchedulerScriptHandlerEntry *this,int param_1,float param_2,bool param_3)

{
  CCTimer *this_00;
  CCSchedulerScriptHandlerEntry in_r3;
  float fVar1;
  
  this_00 = (CCTimer *)operator_new(0x2c);
  fVar1 = (float)CCTimer::CCTimer(this_00);
  *(CCTimer **)(this + 0x14) = this_00;
  CCTimer::initWithScriptHandler(this_00,param_1,fVar1);
  CCObject::autorelease(*(CCObject **)(this + 0x14));
  CCObject::retain(*(CCObject **)(this + 0x14));
  *(int *)(this + 0x1c) = param_1;
  this[0x18] = in_r3;
  return CONCAT44(this,1);
}


