/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2478  Symbol: Effect_Lode_Warp */

/* Effect::Effect_Lode_Warp() */

void __thiscall Effect::Effect_Lode_Warp(Effect *this)

{
  CCSpriteFrameCache *pCVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCSpriteFrame *pCVar2;
  CCAnimation *pCVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  char acStack_3c [32];
  int local_1c;
  
  iVar4 = DAT_000f2554;
  piVar6 = *(int **)(DAT_000f2550 + 0xf2484);
  local_1c = *piVar6;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000f2558 + 0xf2498));
  this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
  *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124) = this_00;
  iVar7 = 0;
  do {
    sprintf(acStack_3c,(char *)(iVar4 + 0xf2496),iVar7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar2 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar2 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124),pCVar2);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x14);
  pCVar3 = (CCAnimation *)
           cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x124));
  iVar4 = cocos2d::CCAnimate::actionWithAnimation(pCVar3);
  *(int *)(this + 0x128) = iVar4;
  uVar9 = __floatunsidf(*(int *)(*(int *)(this + 0x124) + 0x18) -
                        *(int *)(*(int *)(this + 0x124) + 0x14) >> 2);
  __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_000f2548,DAT_000f254c);
  uVar5 = __truncdfsf2();
  *(undefined4 *)(iVar4 + 0x20) = uVar5;
  cocos2d::CCObject::retain(*(CCObject **)(this + 0x128));
  uVar8 = *(int *)(*(int *)(this + 0x124) + 0x18) - *(int *)(*(int *)(this + 0x124) + 0x14) >> 2;
  while (uVar8 = uVar8 - 1, 0 < (int)uVar8) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124),uVar8,true);
  }
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000f255c + 0xf2532));
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


