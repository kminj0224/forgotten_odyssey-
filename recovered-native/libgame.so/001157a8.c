/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001157a8  Symbol: Monster_die */

/* Monster_die(void*, cocos2d::CCLayer*) */

void Monster_die(void *param_1,CCLayer *param_2)

{
  undefined4 uVar1;
  N_Draw_Number *pNVar2;
  char *pcVar3;
  CCSpriteFrameCache *pCVar4;
  CCDirector *this;
  CCSpriteFrame *pCVar5;
  undefined4 *puVar6;
  CCAnimation *pCVar7;
  CCFiniteTimeAction *pCVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  code *pcVar17;
  int *piVar18;
  int **ppiVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int local_68;
  CCPoint aCStack_40 [8];
  _func_void_CCNode_ptr_void_ptr *local_38;
  undefined4 local_34;
  char acStack_30 [20];
  int local_1c;
  
  iVar20 = DAT_00115a38 + 0x1157b4;
  piVar11 = *(int **)(iVar20 + DAT_00115a3c);
  piVar18 = *(int **)((int)param_1 + 4);
  local_1c = *piVar11;
  iVar14 = *piVar18;
  if ((iVar14 == 3) || (iVar14 == 1)) {
    piVar10 = *(int **)(iVar20 + DAT_00115a40);
    iVar21 = *piVar10;
    piVar23 = *(int **)(iVar20 + DAT_00115a44);
    iVar22 = *piVar23;
    piVar15 = *(int **)(iVar20 + DAT_00115a48);
    iVar14 = *piVar15;
    iVar12 = *(int *)(iVar21 + (iVar22 * 9 + iVar14 + DAT_00115a50) * 4 + 4);
    if (iVar12 == 1) {
      local_68 = **(int **)(iVar20 + DAT_00115a4c);
    }
    else {
      uVar25 = __floatsidf((*(int **)(iVar20 + DAT_00115a4c))[iVar12 + -1]);
      uVar1 = (undefined4)((ulonglong)uVar25 >> 0x20);
      uVar26 = __muldf3((int)uVar25,uVar1,DAT_00115a28,DAT_00115a2c);
      __adddf3((int)uVar25,uVar1,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      local_68 = __fixdfsi();
    }
    if (**(char **)(iVar20 + DAT_00115a54) == '\0') {
      iVar14 = iVar21 + (iVar22 * 9 + iVar14 + DAT_00115a58) * 4;
      uVar25 = __floatsidf(*(undefined4 *)(iVar14 + 4));
      uVar26 = __floatsidf(piVar18[0x4d]);
      iVar12 = *(int *)(iVar20 + DAT_00115a5c);
      iVar16 = iVar21 + iVar22 * 0x6c;
      uVar27 = __floatsidf((int)*(short *)((*(char *)(iVar16 + DAT_00115a60) + 0xb) * 2 + iVar12));
      uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_00115a30,DAT_00115a34);
      uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                        (int)((ulonglong)uVar27 >> 0x20));
      __adddf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
               (int)((ulonglong)uVar26 >> 0x20));
      uVar1 = __fixdfsi();
      iVar22 = iVar22 + DAT_00115a64;
      *(undefined4 *)(iVar14 + 4) = uVar1;
      iVar21 = iVar21 + iVar22 * 4;
      uVar25 = __floatsidf(*(undefined4 *)(iVar21 + 4));
      uVar26 = __floatsidf(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x130));
      uVar27 = __floatsidf((int)*(short *)((*(char *)(iVar16 + DAT_00115a68) + 0x16) * 2 + iVar12));
      uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_00115a30,DAT_00115a34);
      uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                        (int)((ulonglong)uVar27 >> 0x20));
      __adddf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
               (int)((ulonglong)uVar26 >> 0x20));
      uVar1 = __fixdfsi();
      *(undefined4 *)(iVar21 + 4) = uVar1;
    }
    pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0x1f);
    N_Draw_Number::SetMoney_Re(pNVar2,*(int *)(*piVar10 + (*piVar23 + DAT_00115a64) * 4 + 4),0);
    iVar12 = *piVar10;
    iVar14 = *piVar23 * 9 + *piVar15;
    if (*(int *)(iVar12 + (iVar14 + DAT_00115a50) * 4 + 4) < 0x96) {
      if (local_68 <= *(int *)(iVar12 + (iVar14 + DAT_00115a58) * 4 + 4)) {
        if ((*(char *)(*(int *)((int)param_1 + 4) + 0xcc) == '\0') &&
           (*(char *)(iVar12 + 1) != '\0')) {
          pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)((char)DAT_00115a6c + -0x76));
        }
        iVar22 = *piVar10;
        iVar12 = *piVar23 * 9 + *piVar15;
        iVar14 = iVar22 + (iVar12 + DAT_00115a50) * 4;
        *(int *)(iVar14 + 4) = *(int *)(iVar14 + 4) + 1;
        *(undefined4 *)(iVar22 + (iVar12 + DAT_00115a58) * 4 + 4) = 0;
        pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0x19);
        N_Draw_Number::SetNumber_Re
                  (pNVar2,*(int *)(*piVar10 + (*piVar23 * 9 + *piVar15 + DAT_00115a50) * 4 + 4),0);
        pCVar4 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
                  (pCVar4,(char *)(DAT_00115a70 + 0x1159e8));
        piVar11 = (int *)operator_new(0x20);
        cocos2d::CCObject::CCObject((CCObject *)piVar11);
        iVar14 = *(int *)(iVar20 + DAT_00115a74);
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        *piVar11 = iVar14 + 8;
        iVar14 = 1;
        do {
          this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
          uVar1 = cocos2d::CCDirector::getContentScaleFactor(this);
          iVar12 = __aeabi_fcmpeq(uVar1,0x40000000);
          if (iVar12 == 0) {
            pcVar3 = (char *)(DAT_00115c40 + 0x115a88);
            puVar13 = (undefined *)(DAT_00115c44 + 0x115a8a);
          }
          else {
            pcVar3 = (char *)(DAT_00115a78 + 0x115a24);
            puVar13 = &UNK_00115a26 + DAT_00115a7c;
          }
          sprintf(acStack_30,pcVar3,puVar13,iVar14);
          pCVar4 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
          pCVar5 = (CCSpriteFrame *)
                   cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar4,acStack_30);
          iVar14 = iVar14 + 1;
          cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                    ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar11,pCVar5);
        } while (iVar14 != 8);
        pCVar5 = (CCSpriteFrame *)
                 cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                           ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar11,0);
        piVar18 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar5);
        pcVar17 = *(code **)(*piVar18 + 0x3c);
        ppiVar19 = *(int ***)(iVar20 + DAT_00115c48);
        puVar6 = (undefined4 *)(**(code **)(**ppiVar19 + 0x38))();
        iVar12 = *(int *)(iVar20 + DAT_00115c4c);
        uVar1 = __floatsisf(*(undefined4 *)(iVar12 + *piVar15 * 0x18 + 0x10));
        __addsf3(uVar1,*puVar6);
        iVar14 = (**(code **)(**ppiVar19 + 0x38))();
        uVar1 = __floatsisf(*(undefined4 *)(iVar12 + *piVar15 * 0x18 + 0x14));
        uVar25 = __addsf3(uVar1,*(undefined4 *)(iVar14 + 4));
        cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
        (*pcVar17)(piVar18,aCStack_40);
        piVar10 = **(int ***)(iVar20 + DAT_00115c50);
        pcVar17 = *(code **)(*piVar10 + 0xcc);
        iVar14 = (**(code **)(**ppiVar19 + 0x14))();
        fVar24 = (float)(*pcVar17)(piVar10,piVar18,iVar14 + -1,0x3dc);
        pCVar7 = (CCAnimation *)
                 cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)piVar11,fVar24);
        pCVar8 = (CCFiniteTimeAction *)cocos2d::CCAnimate::actionWithAnimation(pCVar7);
        local_38 = *(_func_void_CCNode_ptr_void_ptr **)(iVar20 + DAT_00115c58);
        local_34 = 0;
        uVar1 = cocos2d::CCCallFuncND::actionWithTarget((CCObject *)piVar18,local_38,(void *)0x0);
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar8,uVar1,0);
      }
      iVar14 = *(int *)(param_2 + 0x120);
      uVar1 = __floatsisf(*(undefined4 *)
                           (*piVar10 + (*piVar23 * 9 + *piVar15 + DAT_00115c68) * 4 + 4));
      uVar9 = __floatsisf(local_68);
      uVar1 = __divsf3(uVar1,uVar9);
      *(undefined4 *)(iVar14 + 0x118) = uVar1;
    }
  }
  if (local_1c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


