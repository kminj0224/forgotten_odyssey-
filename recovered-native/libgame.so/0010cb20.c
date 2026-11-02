/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010cb20  Symbol: Unit_init_layer */

/* Unit6::Unit_init_layer() */

void __thiscall Unit6::Unit_init_layer(Unit6 *this)

{
  undefined4 *puVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *pCVar2;
  CCAnimation *pCVar3;
  CCMutableArray *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCSpriteFrame *pCVar7;
  CCActionInterval *this_00;
  CCAction *pCVar8;
  CCSpriteFrameCache *pCVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  CCMutableArray **ppCVar13;
  code *pcVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  CCMutableArray **ppCVar19;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar20;
  int local_68;
  CCPoint aCStack_54 [8];
  CCPoint local_4c;
  int local_48;
  CCPoint local_44;
  int local_40;
  char acStack_3c [32];
  int local_1c;
  
  iVar15 = 0;
  piVar12 = *(int **)(DAT_0010ce38 + 0x10cb2c);
  local_1c = *piVar12;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  puVar1 = (undefined4 *)operator_new(0x24);
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar1);
  puVar1[6] = 0xe6;
  puVar1[7] = 0x3f800000;
  do {
    pCVar2 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(pCVar2,0);
    iVar18 = iVar15 + 0x120;
    iVar15 = iVar15 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar18) = pCVar2;
  } while (iVar15 != 0x10);
  piVar11 = *(int **)(DAT_0010ce3c + 0x10cb86);
  *(undefined4 *)(this + 0x110) = 0;
  iVar15 = *piVar11;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if (iVar15 - 1U < 3) {
    Unit_Lode((char *)(DAT_0010ce54 + 0x10cc12),(char *)(DAT_0010ce58 + 0x10cc16),1,7,
              (CCAnimate *)0x0,*(CCMutableArray **)(this + 0x120),4);
    local_68 = 1;
  }
  else {
    pcVar16 = (char *)(DAT_0010ce40 + 0x10cba6);
    Unit_Lode(pcVar16,(char *)(DAT_0010ce44 + 0x10cba8),1,7,(CCAnimate *)0x0,
              *(CCMutableArray **)(this + 0x120),4);
    Unit_Lode(pcVar16,(char *)(DAT_0010ce48 + 0x10cbc4),1,9,*(CCAnimate **)(this + 0x114),
              *(CCMutableArray **)(this + 0x124),4);
    Unit_Lode(pcVar16,(char *)(DAT_0010ce4c + 0x10cbdc),1,9,*(CCAnimate **)(this + 0x118),
              *(CCMutableArray **)(this + 0x128),4);
    Unit_Lode(pcVar16,(char *)(DAT_0010ce50 + 0x10cbf4),1,8,*(CCAnimate **)(this + 0x11c),
              *(CCMutableArray **)(this + 300),4);
    local_68 = 4;
  }
  iVar15 = 0;
  ppCVar13 = (CCMutableArray **)(this + 0x120);
  uVar6 = DAT_0010ce5c;
  while( true ) {
    pCVar3 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar13);
    pCVar4 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar13[-4] = pCVar4;
    ppCVar19 = ppCVar13 + 1;
    iVar15 = iVar15 + 1;
    uVar5 = __floatunsisf(*(int *)(*ppCVar13 + 0x18) - *(int *)(*ppCVar13 + 0x14) >> 2);
    uVar6 = __mulsf3(uVar5,uVar6);
    *(undefined4 *)(pCVar4 + 0x20) = uVar6;
    cocos2d::CCObject::retain((CCObject *)ppCVar13[-4]);
    if (local_68 <= iVar15) break;
    ppCVar13 = ppCVar19;
    uVar6 = DAT_0010ce64;
    if (iVar15 == 1) {
      uVar6 = DAT_0010ce60;
    }
  }
  if (*piVar11 == 1) {
    pCVar7 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
    piVar11 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar7);
    pcVar14 = *(code **)(*piVar11 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_54,extraout_s0,extraout_s1);
    (*pcVar14)(piVar11,aCStack_54);
    if (*(char *)(**(int **)(DAT_0010ce68 + 0x10cca4) + **(int **)(DAT_0010ce6c + 0x10ccac) * 9 +
                 DAT_0010ce70) == '\0') {
      (**(code **)(*piVar11 + 0xf4))(piVar11);
    }
    (**(code **)(*(int *)this + 0xcc))(this,piVar11,1,1);
    this_00 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_00);
    cocos2d::CCNode::runAction((CCNode *)piVar11,pCVar8);
    cocos2d::CCObject::release((CCObject *)this_00);
  }
  else {
    pCVar9 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    iVar15 = DAT_0010ce78;
    iVar18 = 1;
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar9,(char *)(DAT_0010ce74 + 0x10cd0e));
    pCVar2 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(pCVar2,0);
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x138) = pCVar2;
    pcVar16 = (char *)(DAT_0010ce7c + 0x10cd2c);
    do {
      sprintf(acStack_3c,pcVar16,iVar15 + 0x10cd2a,iVar18);
      pCVar9 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      pCVar7 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar9,acStack_3c);
      if (pCVar7 != (CCSpriteFrame *)0x0) {
        cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                  (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x138),pCVar7);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0x14);
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x138));
    iVar15 = cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    *(int *)(this + 0x130) = iVar15;
    uVar20 = __floatunsidf(*(int *)(*(int *)(this + 0x138) + 0x18) -
                           *(int *)(*(int *)(this + 0x138) + 0x14) >> 2);
    __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0010ce30,DAT_0010ce34);
    uVar6 = __truncdfsf2();
    *(undefined4 *)(iVar15 + 0x20) = uVar6;
    cocos2d::CCObject::retain(*(CCObject **)(this + 0x130));
    uVar17 = *(int *)(*(int *)(this + 0x138) + 0x18) - *(int *)(*(int *)(this + 0x138) + 0x14) >> 2;
    while( true ) {
      uVar17 = uVar17 - 1;
      if ((int)uVar17 < 0) break;
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x138),uVar17,true);
    }
    cocos2d::CCObject::release
              ((CCObject *)*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x138));
    pCVar2 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(pCVar2,0);
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c) = pCVar2;
    iVar18 = 1;
    pcVar16 = (char *)(DAT_0010ce80 + 0x10cdc0);
    iVar15 = DAT_0010ce84 + 0x10cdc2;
    do {
      sprintf(acStack_3c,pcVar16,iVar15,iVar18);
      pCVar9 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      pCVar7 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar9,acStack_3c);
      if (pCVar7 != (CCSpriteFrame *)0x0) {
        cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                  (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c),pCVar7);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0x14);
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(this + 0x13c));
    iVar15 = cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    *(int *)(this + 0x134) = iVar15;
    uVar20 = __floatunsidf(*(int *)(*(int *)(this + 0x13c) + 0x18) -
                           *(int *)(*(int *)(this + 0x13c) + 0x14) >> 2);
    __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0010ce30,DAT_0010ce34);
    uVar6 = __truncdfsf2();
    *(undefined4 *)(iVar15 + 0x20) = uVar6;
    cocos2d::CCObject::retain(*(CCObject **)(this + 0x134));
    uVar17 = *(int *)(*(int *)(this + 0x13c) + 0x18) - *(int *)(*(int *)(this + 0x13c) + 0x14) >> 2;
    while( true ) {
      uVar17 = uVar17 - 1;
      if ((int)uVar17 < 0) break;
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
                (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c),uVar17,true);
    }
    uVar20 = cocos2d::CCObject::release
                       ((CCObject *)*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_4c,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
    ;
    uVar20 = vDrawImage((CCNode *)this,(char *)(DAT_0010cf30 + 0x10ceb0),local_4c,local_48,0);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_44,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
    ;
    vDrawImage((CCNode *)this,(char *)(DAT_0010cf34 + 0x10cece),local_44,local_40,0);
    pCVar9 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile
              (pCVar9,(char *)(DAT_0010cf38 + 0x10cee4));
  }
  pCVar7 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar11 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar7);
  puVar10 = (undefined4 *)(**(code **)(*piVar11 + 0x7c))();
  uVar6 = __fixsfsi(*puVar10);
  puVar1[2] = uVar6;
  iVar15 = (**(code **)(*piVar11 + 0x7c))(piVar11);
  uVar6 = __fixsfsi(*(undefined4 *)(iVar15 + 4));
  puVar1[3] = uVar6;
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


