/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e722  Symbol: initOneTwo */

/* cocos2d::CCSpawn::initOneTwo(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) */

int __thiscall
cocos2d::CCSpawn::initOneTwo(CCSpawn *this,CCFiniteTimeAction *param_1,CCFiniteTimeAction *param_2)

{
  int iVar1;
  int iVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float extraout_s0;
  float fVar6;
  
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  iVar1 = __aeabi_fcmplt(uVar5,uVar4);
  iVar2 = CCActionInterval::initWithDuration((CCActionInterval *)this,extraout_s0);
  if (iVar2 != 0) {
    *(CCFiniteTimeAction **)(this + 0x30) = param_2;
    *(CCFiniteTimeAction **)(this + 0x2c) = param_1;
    iVar2 = __aeabi_fcmpgt(uVar5,uVar4);
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        fVar6 = (float)__subsf3(uVar4,uVar5);
        pCVar3 = (CCFiniteTimeAction *)CCDelayTime::actionWithDuration(fVar6);
        uVar4 = CCSequence::actionOneTwo(param_1,pCVar3);
        *(undefined4 *)(this + 0x2c) = uVar4;
      }
    }
    else {
      fVar6 = (float)__subsf3(uVar5,uVar4);
      pCVar3 = (CCFiniteTimeAction *)CCDelayTime::actionWithDuration(fVar6);
      uVar4 = CCSequence::actionOneTwo(param_2,pCVar3);
      *(undefined4 *)(this + 0x30) = uVar4;
    }
    CCObject::retain(*(CCObject **)(this + 0x2c));
    CCObject::retain(*(CCObject **)(this + 0x30));
    iVar2 = 1;
  }
  return iVar2;
}


