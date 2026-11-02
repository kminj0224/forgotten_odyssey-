/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dd22  Symbol: copyWithZone */

/* cocos2d::CCJumpBy::copyWithZone(cocos2d::CCZone*) */

undefined8 __thiscall cocos2d::CCJumpBy::copyWithZone(CCJumpBy *this,CCZone *param_1)

{
  undefined4 uVar1;
  CCPoint *this_00;
  CCZone *pCVar2;
  undefined8 uVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCPoint **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (CCPoint *)0x0) goto LAB_0013dd58;
  }
  this_00 = (CCPoint *)operator_new(0x44);
  memset(this_00,0,0x44);
  CCJumpBy((CCJumpBy *)this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_0013dd58:
  uVar3 = CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  uVar1 = *(undefined4 *)(this + 0x40);
  initWithDuration((float)uVar3,this_00,(float)((ulonglong)uVar3 >> 0x20),*(uint *)(this + 0x20));
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return CONCAT44(uVar1,this_00);
}


