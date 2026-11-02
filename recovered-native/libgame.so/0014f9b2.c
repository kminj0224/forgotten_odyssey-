/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f9b2  Symbol: initWithTexture */

/* cocos2d::CCProgressTimer::initWithTexture(cocos2d::CCTexture2D*) */

undefined8 cocos2d::CCProgressTimer::initWithTexture(CCTexture2D *param_1)

{
  CCObject *this;
  undefined4 uVar1;
  CCTexture2D *in_r1;
  code *pcVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar3;
  CCTexture2D *apCStack_20 [3];
  
  apCStack_20[0] = param_1;
  this = (CCObject *)CCSprite::spriteWithTexture(in_r1);
  uVar3 = CONCAT44(extraout_s1,extraout_s0);
  *(CCObject **)(param_1 + 0x104) = this;
  if (this != (CCObject *)0x0) {
    uVar3 = CCObject::retain(this);
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  pcVar2 = *(code **)(*(int *)param_1 + 0x74);
  CCPoint::CCPoint((CCPoint *)apCStack_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(param_1,apCStack_20);
  pcVar2 = *(code **)(*(int *)param_1 + 0x80);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x7c))();
  (*pcVar2)(param_1,uVar1);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return CONCAT44(apCStack_20[0],1);
}


