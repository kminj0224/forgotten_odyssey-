/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001186d8  Symbol: Castle_Att_Effect */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Castle_Att_Effect() */

void Castle_Att_Effect(void)

{
  CCSpriteFrameCache *pCVar1;
  int *piVar2;
  CCDirector *pCVar3;
  undefined4 uVar4;
  int iVar5;
  CCSpriteFrame *pCVar6;
  CCAnimation *pCVar7;
  CCObject *pCVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int **ppiVar12;
  int **ppiVar13;
  int iVar14;
  undefined8 uVar15;
  char acStack_3c [32];
  int local_1c;
  
  iVar14 = DAT_001188a8 + 0x1186e4;
  piVar11 = *(int **)(iVar14 + DAT_001188ac);
  local_1c = *piVar11;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_001188b0 + 0x1186f2));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_001188b4 + 0x1186fe));
  ppiVar12 = *(int ***)(iVar14 + DAT_001188b8);
  if (*ppiVar12 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x20);
    cocos2d::CCObject::CCObject((CCObject *)piVar2);
    iVar10 = *(int *)(iVar14 + DAT_001188bc);
    piVar2[5] = 0;
    piVar2[6] = 0;
    *piVar2 = iVar10 + 8;
    piVar2[7] = 0;
    *ppiVar12 = piVar2;
  }
  ppiVar13 = *(int ***)(iVar14 + DAT_001188c0);
  if (*ppiVar13 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x20);
    cocos2d::CCObject::CCObject((CCObject *)piVar2);
    *piVar2 = *(int *)(iVar14 + DAT_001188bc) + 8;
    *ppiVar13 = piVar2;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
  }
  iVar10 = 1;
  do {
    pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar4 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
    iVar5 = __aeabi_fcmpeq(uVar4,0x40000000);
    if (iVar5 == 0) {
      pcVar9 = (char *)(DAT_001188cc + 0x11877a);
      iVar5 = DAT_001188d0 + 0x11877c;
    }
    else {
      pcVar9 = (char *)(DAT_001188c4 + 0x118770);
      iVar5 = DAT_001188c8 + 0x118772;
    }
    sprintf(acStack_3c,pcVar9,iVar5,iVar10);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar6 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar6 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar12,pCVar6);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 4);
  iVar10 = 1;
  do {
    pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar4 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
    iVar5 = __aeabi_fcmpeq(uVar4,0x40000000);
    if (iVar5 == 0) {
      pcVar9 = (char *)(DAT_001188dc + 0x1187c4);
      iVar5 = DAT_001188e0 + 0x1187c6;
    }
    else {
      pcVar9 = (char *)(DAT_001188d4 + 0x1187ba);
      iVar5 = DAT_001188d8 + 0x1187bc;
    }
    sprintf(acStack_3c,pcVar9,iVar5,iVar10);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar6 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar6 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar13,pCVar6);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 4);
  pCVar7 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)*ppiVar12);
  pCVar8 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar7);
  **(CCObject ***)(iVar14 + DAT_001188e4) = pCVar8;
  uVar15 = __floatunsidf((*ppiVar12)[6] - (*ppiVar12)[5] >> 2);
  __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_001188a0,DAT_001188a4);
  uVar4 = __truncdfsf2();
  *(undefined4 *)(pCVar8 + 0x20) = uVar4;
  cocos2d::CCObject::retain(pCVar8);
  pCVar7 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)*ppiVar13);
  pCVar8 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar7);
  **(CCObject ***)(iVar14 + DAT_001188e8) = pCVar8;
  uVar15 = __floatunsidf((*ppiVar12)[6] - (*ppiVar12)[5] >> 2);
  __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_001188a0,DAT_001188a4);
  uVar4 = __truncdfsf2();
  *(undefined4 *)(pCVar8 + 0x20) = uVar4;
  cocos2d::CCObject::retain(pCVar8);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
            ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar12,2,true);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
            ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar12,1,true);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
            ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar13,2,true);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
            ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar13,1,true);
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_001188ec + 0x118880));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_001188f0 + 0x11888c));
  if (local_1c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


