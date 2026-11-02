/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ecb8  Symbol: Draw_Logo */

/* MainMenuLayer::Draw_Logo(cocos2d::CCNode*, cocos2d::CCPoint, int) */

void MainMenuLayer::Draw_Logo(CCNode *param_1,CCPoint param_2,int param_3)

{
  int *this;
  CCDirector *this_00;
  undefined4 uVar1;
  CCSpriteFrameCache *this_01;
  CCSpriteFrame *pCVar2;
  int *piVar3;
  CCAnimation *pCVar4;
  CCFiniteTimeAction *pCVar5;
  char *__format;
  int iVar6;
  code *pcVar7;
  int iVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar9;
  undefined4 in_stack_00000000;
  int local_50 [3];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  undefined4 local_1c;
  
  local_1c = **(undefined4 **)(DAT_0012ee08 + 0x12ecc4);
  iVar8 = 0;
  local_50[0] = param_3;
  this = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)this);
  iVar6 = DAT_0012ee0c;
  this[5] = 0;
  this[6] = 0;
  iVar6 = *(int *)(iVar6 + 0x12ece4);
  this[7] = 0;
  *this = iVar6 + 8;
  do {
    this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
    iVar6 = __aeabi_fcmpeq(uVar1,0x40000000);
    if (iVar6 == 0) {
      __format = (char *)(DAT_0012ee18 + 0x12ed12);
      iVar6 = DAT_0012ee1c + 0x12ed14;
    }
    else {
      __format = (char *)(DAT_0012ee10 + 0x12ed08);
      iVar6 = DAT_0012ee14 + 0x12ed0a;
    }
    sprintf(acStack_3c,__format,iVar6,iVar8);
    this_01 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar2 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_01,acStack_3c);
    if (pCVar2 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this,pCVar2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  pCVar2 = (CCSpriteFrame *)(this[6] - (int)(CCSpriteFrame **)this[5] >> 2);
  if (pCVar2 != (CCSpriteFrame *)0x0) {
    pCVar2 = *(CCSpriteFrame **)this[5];
  }
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar2);
  pcVar7 = *(code **)(*piVar3 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_44,extraout_s0,extraout_s1);
  (*pcVar7)(piVar3,aCStack_44);
  (**(code **)(*piVar3 + 0x3c))(piVar3,local_50);
  (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar3,in_stack_00000000,in_stack_00000000);
  pCVar4 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this);
  iVar6 = cocos2d::CCAnimate::actionWithAnimation(pCVar4);
  uVar9 = __floatunsidf(this[6] - this[5] >> 2);
  __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0012ee00,DAT_0012ee04);
  uVar1 = __truncdfsf2();
  *(undefined4 *)(iVar6 + 0x20) = uVar1;
  pCVar5 = (CCFiniteTimeAction *)
           cocos2d::CCScaleTo::actionWithDuration(extraout_s0_00,extraout_s1_00);
  uVar1 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_01,extraout_s1_01);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar1,0);
}


