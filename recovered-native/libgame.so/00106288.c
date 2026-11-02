/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00106288  Symbol: Hero_Skill_Button_Effect */

/* UI::Hero_Skill_Button_Effect(cocos2d::CCNode*) */

void __thiscall UI::Hero_Skill_Button_Effect(UI *this,CCNode *param_1)

{
  CCSpriteFrameCache *pCVar1;
  int *this_00;
  CCDirector *this_01;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  int *this_02;
  undefined4 *puVar5;
  CCAnimation *pCVar6;
  CCActionInterval *pCVar7;
  CCAction *pCVar8;
  char *__format;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar12;
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar9 = *(int **)(DAT_001063d0 + 0x106294);
  iVar11 = 1;
  local_1c = *piVar9;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_001063d4 + 0x1062a4));
  this_00 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_001063d8 + 0x1062ba) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  do {
    this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_01);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_001063e4 + 0x1062ec);
      iVar3 = DAT_001063e8 + 0x1062ee;
    }
    else {
      __format = (char *)(DAT_001063dc + 0x1062e2);
      iVar3 = DAT_001063e0 + 0x1062e4;
    }
    sprintf(acStack_3c,__format,iVar3,iVar11);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this_00,pCVar4);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x14);
  pCVar4 = (CCSpriteFrame *)(this_00[6] - (int)(CCSpriteFrame **)this_00[5] >> 2);
  if (pCVar4 != (CCSpriteFrame *)0x0) {
    pCVar4 = *(CCSpriteFrame **)this_00[5];
  }
  this_02 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  pcVar10 = *(code **)(*this_02 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_4c,extraout_s0,extraout_s1);
  (*pcVar10)(this_02,aCStack_4c);
  pcVar10 = *(code **)(*this_02 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar12 = __mulsf3(*puVar5,0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar10)(this_02,aCStack_44);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_02,1,1);
  pCVar6 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this_00);
  pCVar7 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar6);
  uVar12 = __floatunsidf(this_00[6] - this_00[5] >> 2);
  __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_001063c8,DAT_001063cc);
  uVar2 = __truncdfsf2();
  *(undefined4 *)(pCVar7 + 0x20) = uVar2;
  pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar7);
  cocos2d::CCNode::runAction((CCNode *)this_02,pCVar8);
  cocos2d::CCObject::release((CCObject *)this_00);
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_001063ec + 0x1063b2));
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


