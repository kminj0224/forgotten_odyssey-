/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ce26  Symbol: startWithTarget */

/* cocos2d::CCScaleBy::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCScaleBy::startWithTarget(CCScaleBy *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  CCScaleTo::startWithTarget((CCScaleTo *)this,param_1);
  uVar2 = *(undefined4 *)(this + 0x34);
  uVar1 = __mulsf3(uVar2,*(undefined4 *)(this + 0x3c));
  uVar1 = __subsf3(uVar1,uVar2);
  uVar2 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x44) = uVar1;
  uVar1 = __mulsf3(uVar2,*(undefined4 *)(this + 0x40));
  uVar1 = __subsf3(uVar1,uVar2);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


