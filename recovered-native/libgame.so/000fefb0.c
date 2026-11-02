/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fefb0  Symbol: Hero_Command_Init */

/* Hero_Command_Init(int, char const*, char const*) */

void Hero_Command_Init(int param_1,char *param_2,char *param_3)

{
  CCSpriteFrameCache *pCVar1;
  int *this;
  CCDirector *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CCSpriteFrame *pCVar5;
  int *this_00;
  CCAnimation *pCVar6;
  CCActionInterval *pCVar7;
  CCAction *pCVar8;
  CCObject *this_01;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int **ppiVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  undefined8 uVar17;
  CCPoint aCStack_84 [8];
  char acStack_7c [32];
  char acStack_5c [32];
  char acStack_3c [32];
  int local_1c;
  
  iVar15 = DAT_000ff1a0 + 0xfefbe;
  piVar10 = *(int **)(iVar15 + DAT_000ff1a4);
  local_1c = *piVar10;
  if (param_1 == 1) {
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,param_2);
    this = (int *)operator_new(0x20);
    cocos2d::CCObject::CCObject((CCObject *)this);
    *this = *(int *)(iVar15 + DAT_000ff1a8) + 8;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    iVar12 = 1;
    do {
      pCVar2 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar3 = cocos2d::CCDirector::getContentScaleFactor(pCVar2);
      iVar4 = __aeabi_fcmpeq(uVar3,0x40000000);
      if (iVar4 == 0) {
        pcVar9 = (char *)(DAT_000ff1b0 + 0xff014);
      }
      else {
        pcVar9 = (char *)(DAT_000ff1ac + 0xff00e);
      }
      sprintf(acStack_7c,pcVar9,param_3,iVar12);
      pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      pCVar5 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_7c);
      iVar12 = iVar12 + 1;
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this,pCVar5);
    } while (iVar12 != 9);
    pCVar5 = (CCSpriteFrame *)(this[6] - (int)(CCSpriteFrame **)this[5] >> 2);
    if (pCVar5 != (CCSpriteFrame *)0x0) {
      pCVar5 = *(CCSpriteFrame **)this[5];
    }
    this_00 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar5);
    uVar17 = __floatsidf((int)*(short *)(*(char *)(**(int **)(iVar15 + DAT_000ff1b4) +
                                                   *(char *)(**(int **)(iVar15 + DAT_000ff1b4) +
                                                             **(int **)(iVar15 + DAT_000ff1b8) +
                                                             DAT_000ff1bc + 4) * 0xc +
                                                   **(int **)(iVar15 + DAT_000ff1b8) * 0x6c +
                                                  DAT_000ff1c4) * 2 +
                                        *(int *)(iVar15 + DAT_000ff1c0)));
    uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000ff190,DAT_000ff194);
    __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000ff198,DAT_000ff19c);
    uVar3 = __truncdfsf2();
    iVar12 = __aeabi_fcmpgt(uVar3,0x3f800000);
    if (iVar12 != 0) {
      uVar3 = 0x3f800000;
    }
    (**(code **)(*this_00 + 0x108))(this_00,uVar3);
    pcVar11 = *(code **)(*this_00 + 0x3c);
    ppiVar13 = *(int ***)(iVar15 + DAT_000ff1c8);
    (**(code **)(**ppiVar13 + 0x38))();
    uVar17 = (**(code **)(**ppiVar13 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_84,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
    (*pcVar11)(this_00,aCStack_84);
    fVar16 = (float)(**(code **)(***(int ***)(iVar15 + DAT_000ff1cc) + 0xcc))
                              (**(int ***)(iVar15 + DAT_000ff1cc),this_00,0,DAT_000ff1d0);
    pCVar6 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this,fVar16)
    ;
    pCVar7 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar6);
    pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar7);
    cocos2d::CCNode::runAction((CCNode *)this_00,pCVar8);
    uVar14 = this[6] - this[5] >> 2;
    while (uVar14 = uVar14 - 1, -1 < (int)uVar14) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this,uVar14,true);
    }
    cocos2d::CCObject::release((CCObject *)this);
    sprintf(acStack_3c,(char *)(DAT_000ff1d8 + 0xff134),param_3,DAT_000ff1dc + 0xff136);
    pCVar2 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar3 = cocos2d::CCDirector::getContentScaleFactor(pCVar2);
    iVar12 = __aeabi_fcmpeq(uVar3,0x40000000);
    if (iVar12 == 0) {
      pcVar9 = (char *)(DAT_000ff1e4 + 0xff15a);
    }
    else {
      pcVar9 = (char *)(DAT_000ff1e0 + 0xff154);
    }
    sprintf(acStack_5c,pcVar9,acStack_3c);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    this_01 = (CCObject *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_5c);
    **(CCObject ***)(iVar15 + DAT_000ff1e8) = this_01;
    cocos2d::CCObject::retain(this_01);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,param_2);
  }
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


