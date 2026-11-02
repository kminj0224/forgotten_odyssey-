/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136972  Symbol: scheduleScriptFunc */

/* cocos2d::CCScheduler::scheduleScriptFunc(unsigned int, float, bool) */

undefined4 __thiscall
cocos2d::CCScheduler::scheduleScriptFunc(CCScheduler *this,uint param_1,float param_2,bool param_3)

{
  int iVar1;
  CCObject *this_00;
  
  iVar1 = CCSchedulerScriptHandlerEntry::entryWithHandler(param_1,param_2,param_3);
  if (*(int *)(this + 0x34) == 0) {
    this_00 = (CCObject *)CCArray::arrayWithCapacity(0x14);
    *(CCObject **)(this + 0x34) = this_00;
    CCObject::retain(this_00);
  }
  CCArray::addObject(*(CCObject **)(this + 0x34));
  return *(undefined4 *)(iVar1 + 0x20);
}


