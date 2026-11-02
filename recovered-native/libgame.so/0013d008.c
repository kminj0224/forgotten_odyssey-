/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d008  Symbol: startWithTarget */

/* cocos2d::CCSkewBy::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCSkewBy::startWithTarget(CCSkewBy *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  CCSkewTo::startWithTarget((CCSkewTo *)this,param_1);
  uVar2 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x48) = uVar2;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x34));
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x38),uVar2);
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


