/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2288  Symbol: CAPTIVATE_Lode_Zombi */

/* Effect::CAPTIVATE_Lode_Zombi() */

void __thiscall Effect::CAPTIVATE_Lode_Zombi(Effect *this)

{
  CCSpriteFrameCache *pCVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCSpriteFrame *pCVar2;
  CCAnimation *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  char *__format;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  char acStack_3c [32];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000f2368 + 0xf2294);
  iVar8 = 0;
  local_1c = *piVar5;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000f236c + 0xf22a4));
  this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
  *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x144) = this_00;
  iVar6 = DAT_000f2370 + 0xf22c4;
  __format = (char *)(DAT_000f2374 + 0xf22c6);
  do {
    sprintf(acStack_3c,__format,iVar6,iVar8);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar2 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar2 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x144),pCVar2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x14);
  pCVar3 = (CCAnimation *)
           cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x144));
  iVar6 = cocos2d::CCAnimate::actionWithAnimation(pCVar3);
  *(int *)(this + 0x148) = iVar6;
  uVar9 = __floatunsidf(*(int *)(*(int *)(this + 0x144) + 0x18) -
                        *(int *)(*(int *)(this + 0x144) + 0x14) >> 2);
  __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_000f2360,DAT_000f2364);
  uVar4 = __truncdfsf2();
  *(undefined4 *)(iVar6 + 0x20) = uVar4;
  cocos2d::CCObject::retain(*(CCObject **)(this + 0x148));
  uVar7 = *(int *)(*(int *)(this + 0x144) + 0x18) - *(int *)(*(int *)(this + 0x144) + 0x14) >> 2;
  while (uVar7 = uVar7 - 1, 0 < (int)uVar7) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x144),uVar7,true);
  }
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000f2378 + 0xf2348));
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


