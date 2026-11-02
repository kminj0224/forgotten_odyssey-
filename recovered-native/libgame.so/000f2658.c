/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2658  Symbol: Effect_Lode_Limit */

/* Effect::Effect_Lode_Limit() */

void __thiscall Effect::Effect_Lode_Limit(Effect *this)

{
  CCSpriteFrameCache *pCVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCDirector *this_01;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  CCAnimation *pCVar5;
  char *__format;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  char acStack_3c [32];
  int local_1c;
  
  piVar6 = *(int **)(DAT_000f2750 + 0xf2664);
  local_1c = *piVar6;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000f2754 + 0xf2674));
  this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
  *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114) = this_00;
  iVar7 = 1;
  do {
    this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_01);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_000f2760 + 0xf26b2);
      iVar3 = DAT_000f2764 + 0xf26b4;
    }
    else {
      __format = (char *)(DAT_000f2758 + 0xf26a8);
      iVar3 = DAT_000f275c + 0xf26aa;
    }
    sprintf(acStack_3c,__format,iVar3,iVar7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114),pCVar4);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x14);
  pCVar5 = (CCAnimation *)
           cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x114));
  iVar7 = cocos2d::CCAnimate::actionWithAnimation(pCVar5);
  *(int *)(this + 0x118) = iVar7;
  uVar9 = __floatunsidf(*(int *)(*(int *)(this + 0x114) + 0x18) -
                        *(int *)(*(int *)(this + 0x114) + 0x14) >> 2);
  __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_000f2748,DAT_000f274c);
  uVar2 = __truncdfsf2();
  *(undefined4 *)(iVar7 + 0x20) = uVar2;
  cocos2d::CCObject::retain(*(CCObject **)(this + 0x118));
  uVar8 = *(int *)(*(int *)(this + 0x114) + 0x18) - *(int *)(*(int *)(this + 0x114) + 0x14) >> 2;
  while (uVar8 = uVar8 - 1, 0 < (int)uVar8) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114),uVar8,true);
  }
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000f2768 + 0xf2732));
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


