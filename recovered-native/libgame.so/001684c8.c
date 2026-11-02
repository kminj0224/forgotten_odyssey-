/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001684c8  Symbol: initWithDelegate */

/* cocos2d::CCTargetedTouchHandler::initWithDelegate(cocos2d::CCTouchDelegate*, int, bool) */

int __thiscall
cocos2d::CCTargetedTouchHandler::initWithDelegate
          (CCTargetedTouchHandler *this,CCTouchDelegate *param_1,int param_2,bool param_3)

{
  int iVar1;
  CCSet *this_00;
  
  iVar1 = CCTouchHandler::initWithDelegate((CCTouchDelegate *)this,(int)param_1);
  if (iVar1 != 0) {
    this_00 = (CCSet *)operator_new(0x18);
    CCSet::CCSet(this_00);
    *(CCSet **)(this + 0x24) = this_00;
    this[0x20] = (CCTargetedTouchHandler)param_3;
    iVar1 = 1;
  }
  return iVar1;
}


