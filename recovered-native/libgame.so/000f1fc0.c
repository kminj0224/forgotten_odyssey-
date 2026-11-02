/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f1fc0  Symbol: Effect_Lode_Attack2 */

/* Effect::Effect_Lode_Attack2(char const*, char const*) */

void __thiscall Effect::Effect_Lode_Attack2(Effect *this,char *param_1,char *param_2)

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
  undefined8 uVar8;
  char acStack_3c [32];
  int local_1c;
  
  piVar6 = *(int **)(DAT_000f2098 + 0xf1fcc);
  local_1c = *piVar6;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,param_1);
  this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
  *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x134) = this_00;
  iVar7 = 1;
  do {
    this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_01);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_000f20a0 + 0xf2016);
    }
    else {
      __format = (char *)(DAT_000f209c + 0xf2010);
    }
    sprintf(acStack_3c,__format,param_2,iVar7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x134),pCVar4);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x14);
  pCVar5 = (CCAnimation *)
           cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x134));
  iVar7 = cocos2d::CCAnimate::actionWithAnimation(pCVar5);
  *(int *)(this + 0x138) = iVar7;
  uVar8 = __floatunsidf(*(int *)(*(int *)(this + 0x134) + 0x18) -
                        *(int *)(*(int *)(this + 0x134) + 0x14) >> 2);
  __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_000f2090,DAT_000f2094);
  uVar2 = __truncdfsf2();
  *(undefined4 *)(iVar7 + 0x20) = uVar2;
  cocos2d::CCObject::retain(*(CCObject **)(this + 0x138));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,param_1);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


