/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cd9b0  Symbol: Main_Call */

/* StageSelect::Main_Call() */

void __thiscall StageSelect::Main_Call(StageSelect *this)

{
  StageSelectChild *this_00;
  CCSpriteFrameCache *this_01;
  CCSpriteFrame *pCVar1;
  CCAnimation *pCVar2;
  CCActionInterval *pCVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  CCPoint *pCVar7;
  undefined4 *puVar8;
  CCAction *pCVar9;
  CCTexture2D *pCVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  float extraout_s0;
  float fVar17;
  float extraout_s1;
  undefined8 uVar18;
  undefined4 uVar19;
  int local_d4;
  CCPoint local_c4;
  int local_c0;
  CCPoint aCStack_bc [8];
  CCPoint aCStack_b4 [8];
  CCPoint aCStack_ac [8];
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  char acStack_94 [20];
  char acStack_80 [100];
  int local_1c;
  
  iVar15 = DAT_000cdd60 + 0xcd9bc;
  piVar12 = *(int **)(iVar15 + DAT_000cdd64);
  local_1c = *piVar12;
  if (*(int *)(this + 0x110) == 0) {
    piVar14 = *(int **)(iVar15 + DAT_000cdd68);
    piVar16 = *(int **)(iVar15 + DAT_000cdd6c);
    if (*piVar14 != *piVar16) {
      removeChildLayer(this);
      iVar6 = *piVar14;
      *piVar16 = iVar6;
      memset(acStack_80,0,100);
      if (iVar6 == 9) {
        iVar6 = 8;
        pcVar4 = (char *)(DAT_000cdd70 + 0xcda04);
      }
      else {
        pcVar4 = (char *)(DAT_000cdd74 + 0xcda0e);
      }
      sprintf(acStack_80,pcVar4,iVar6);
      puVar8 = *(undefined4 **)(iVar15 + DAT_000cdd78);
      __mulsf3(*puVar8,0x3f000000);
      uVar18 = __mulsf3(puVar8[1],0x3f000000);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_c4,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      uVar5 = 0;
      uVar19 = 0;
      vDrawImage((CCNode *)this,acStack_80,local_c4,local_c0,0);
      this_00 = (StageSelectChild *)operator_new(0x124);
      StageSelectChild::StageSelectChild(this_00);
      StageSelectChild::init(this_00);
      (**(code **)(*(int *)this + 0xcc))(this,this_00,0x11,0x11,uVar5,uVar19);
      cocos2d::CCObject::release((CCObject *)this_00);
      piVar14 = (int *)operator_new(0x20);
      cocos2d::CCObject::CCObject((CCObject *)piVar14);
      iVar13 = *(int *)(iVar15 + DAT_000cdd7c);
      piVar14[5] = 0;
      piVar14[6] = 0;
      piVar14[7] = 0;
      iVar6 = DAT_000cdd84;
      iVar15 = DAT_000cdd80;
      *piVar14 = iVar13 + 8;
      local_d4 = 1;
      do {
        sprintf(acStack_94,(char *)(iVar15 + 0xcda96),iVar6 + 0xcda98,local_d4);
        this_01 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        pCVar1 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_01,acStack_94)
        ;
        if (pCVar1 != (CCSpriteFrame *)0x0) {
          cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                    ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar14,pCVar1);
        }
        local_d4 = local_d4 + 1;
      } while (local_d4 != 9);
      pCVar2 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)piVar14);
      pCVar3 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar2);
      uVar18 = __floatunsidf(piVar14[6] - piVar14[5] >> 2);
      __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000cdd58,DAT_000cdd5c);
      uVar5 = __truncdfsf2();
      *(undefined4 *)(pCVar3 + 0x20) = uVar5;
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar14,true);
      cocos2d::CCObject::release((CCObject *)piVar14);
      piVar14 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName
                                 ((char *)(DAT_000cdd88 + 0xcdafa));
      pcVar11 = *(code **)(*piVar14 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_bc,extraout_s0,extraout_s1);
      (*pcVar11)(piVar14,aCStack_bc);
      piVar16 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      (**(code **)(*piVar16 + 0xcc))(piVar16,piVar14,0x10,0x10);
      pCVar9 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar3);
      cocos2d::CCNode::runAction((CCNode *)piVar14,pCVar9);
    }
    iVar15 = Random(0,100);
    if ((iVar15 == 0) && (*(int *)(this + 0x114) < 3)) {
      iVar15 = Random(0,1);
      if (iVar15 == 0) {
        pcVar4 = (char *)(DAT_000cdd94 + 0xcdb66);
      }
      else {
        pcVar4 = (char *)(DAT_000cdd90 + 0xcdb60);
      }
      piVar14 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar4);
      pcVar11 = *(code **)(*piVar14 + 0x3c);
      piVar16 = (int *)(**(code **)(*piVar14 + 0x7c))();
      __mulsf3(*piVar16 + -0x80000000,0x3f000000);
      iVar15 = (**(code **)(*piVar14 + 0x7c))(piVar14);
      uVar5 = __mulsf3(*(undefined4 *)(iVar15 + 4),0x3f000000);
      __addsf3(uVar5,0);
      iVar15 = __fixsfsi();
      iVar6 = (**(code **)(*piVar14 + 0x7c))(piVar14);
      uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
      __subsf3(DAT_000cdd98,uVar5);
      iVar6 = __fixsfsi();
      Random(iVar15,iVar6);
      uVar18 = __floatsisf();
      cocos2d::CCPoint::CCPoint(aCStack_b4,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar11)(piVar14,aCStack_b4);
      pcVar11 = *(code **)(*piVar14 + 0x108);
      Random(5,10);
      __floatsisf();
      uVar18 = __extendsfdf2();
      __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000cdd58,DAT_000cdd5c);
      uVar5 = __truncdfsf2();
      (*pcVar11)(piVar14,uVar5);
      (**(code **)(*(int *)this + 0xcc))(this,piVar14,3,3);
      Random(0xf,0x14);
      pCVar7 = (CCPoint *)__floatsisf();
      puVar8 = (undefined4 *)(**(code **)(*piVar14 + 0x7c))(piVar14);
      uVar5 = __mulsf3(*puVar8,0x3f000000);
      __addsf3(uVar5,DAT_000cdd9c);
      uVar18 = (**(code **)(*piVar14 + 0x38))(piVar14);
      fVar17 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_ac,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      pCVar9 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar17,pCVar7);
      cocos2d::CCNode::runAction((CCNode *)piVar14,pCVar9);
      *(int *)(this + 0x114) = *(int *)(this + 0x114) + 1;
      pCVar10 = (CCTexture2D *)(**(code **)(*piVar14 + 0x118))(piVar14);
      piVar16 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10);
      (**(code **)(*piVar16 + 0xf4))();
      (**(code **)(*piVar16 + 0xec))(piVar16,0x7f);
      pcVar11 = *(code **)(*piVar16 + 0x3c);
      puVar8 = (undefined4 *)(**(code **)(*piVar14 + 0x38))(piVar14);
      __addsf3(*puVar8,DAT_000cdda0);
      iVar15 = (**(code **)(*piVar14 + 0x38))(piVar14);
      uVar18 = __subsf3(*(undefined4 *)(iVar15 + 4),DAT_000cdda4);
      cocos2d::CCPoint::CCPoint(aCStack_a4,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar11)(piVar16,aCStack_a4);
      pcVar11 = *(code **)(*piVar16 + 0x108);
      cocos2d::CCNode::getScale((CCNode *)piVar14);
      uVar18 = __extendsfdf2();
      __subdf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000cdd58,DAT_000cdd5c);
      uVar5 = __truncdfsf2();
      (*pcVar11)(piVar16,uVar5);
      (**(code **)(*(int *)this + 0xcc))(this,piVar16,1,1);
      puVar8 = (undefined4 *)(**(code **)(*piVar16 + 0x7c))(piVar16);
      uVar5 = __mulsf3(*puVar8,0x3f000000);
      __addsf3(uVar5,DAT_000cdd9c);
      uVar18 = (**(code **)(*piVar16 + 0x38))(piVar16);
      fVar17 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_9c,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      pCVar9 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar17,pCVar7);
      cocos2d::CCNode::runAction((CCNode *)piVar16,pCVar9);
    }
    Cloud_Remove_Call(this);
  }
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


