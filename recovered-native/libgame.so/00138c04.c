/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138c04  Symbol: initWithAction */

/* cocos2d::CCEaseRateAction::initWithAction(cocos2d::CCActionInterval*, float) */

int __thiscall
cocos2d::CCEaseRateAction::initWithAction
          (CCEaseRateAction *this,CCActionInterval *param_1,float param_2)

{
  int iVar1;
  undefined4 in_r2;
  
  iVar1 = CCActionEase::initWithAction((CCActionInterval *)this);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x30) = in_r2;
    iVar1 = 1;
  }
  return iVar1;
}


