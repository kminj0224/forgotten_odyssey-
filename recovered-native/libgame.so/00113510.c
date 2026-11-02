/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113510  Symbol: Draw_Castle_Att_Effect */

/* Draw_Castle_Att_Effect(cocos2d::CCLayer*) */

void Draw_Castle_Att_Effect(CCLayer *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  CCSpriteFrame *pCVar6;
  undefined4 *puVar7;
  int iVar8;
  code *pcVar9;
  _func_void_CCNode_ptr_void_ptr *p_Var10;
  CCNode **ppCVar11;
  float fVar12;
  undefined8 uVar13;
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  _func_void_CCNode_ptr_void_ptr *local_28;
  int local_24;
  _func_void_CCNode_ptr_void_ptr *local_20;
  undefined4 local_1c;
  
  iVar8 = DAT_00113858 + 0x11351e;
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (**(int **)(iVar1 + 4) == 4) {
    ppCVar11 = *(CCNode ***)(iVar8 + DAT_0011385c);
    cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113860);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113860);
      uVar13 = (**(code **)(*piVar3 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_98,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113868);
      uVar13 = (**(code **)(*piVar3 + 0x38))(piVar3);
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_90,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113870);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,uVar5,0);
    }
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113860);
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    uVar13 = (**(code **)(*piVar3 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar3,aCStack_88);
    cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113878);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113878);
      uVar13 = (**(code **)(*piVar3 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_80,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113868);
      uVar13 = (**(code **)(*piVar3 + 0x38))(piVar3);
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_78,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113870);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,uVar5,0);
    }
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113878);
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    uVar13 = (**(code **)(*piVar3 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar3,aCStack_70);
  }
  else {
    if (**(int **)(iVar1 + 4) != 5) {
      return;
    }
    ppCVar11 = *(CCNode ***)(iVar8 + DAT_0011385c);
    cocos2d::CCNode::getChildByTag(*ppCVar11,0x3e4);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,0x3e4);
      uVar13 = (**(code **)(*piVar3 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_68,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113868);
      uVar13 = (**(code **)(*piVar3 + 0x38))(piVar3);
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_60,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113870);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,uVar5,0);
    }
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,0x3e4);
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    uVar13 = (**(code **)(*piVar3 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar3,aCStack_58);
    cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113888);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113888);
      uVar13 = (**(code **)(*piVar3 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_50,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113868);
      uVar13 = (**(code **)(*piVar3 + 0x38))(piVar3);
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_48,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_00113870);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,uVar5,0);
    }
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,DAT_00113888);
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    uVar13 = (**(code **)(*piVar3 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar3,aCStack_40);
  }
  local_24 = Random(0,1);
  p_Var10 = *(_func_void_CCNode_ptr_void_ptr **)(iVar8 + DAT_0011388c);
  if (local_24 != 0) {
    pCVar6 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (**(CCMutableArray<cocos2d::CCSpriteFrame*> ***)(iVar8 + DAT_0011398c),0);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    puVar7 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
    __mulsf3(*puVar7,0x3f000000);
    iVar8 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
    uVar5 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
    __subsf3(uVar5,DAT_00113990);
    iVar8 = __fixsfsi();
    iVar1 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
    uVar5 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    __addsf3(uVar5,DAT_00113990);
    iVar1 = __fixsfsi();
    Random(iVar8,iVar1);
    uVar13 = __floatsisf();
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar3,aCStack_30);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar3,0,0);
    pCVar4 = (CCFiniteTimeAction *)cocos2d::CCObject::copy();
    local_1c = 0;
    local_20 = p_Var10;
    uVar5 = cocos2d::CCCallFuncND::actionWithTarget((CCObject *)piVar3,p_Var10,(void *)0x0);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,uVar5,0);
  }
  pCVar6 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                     (**(CCMutableArray<cocos2d::CCSpriteFrame*> ***)(iVar8 + DAT_00113890),0);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
  pcVar9 = *(code **)(*piVar3 + 0x3c);
  puVar7 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
  __mulsf3(*puVar7,0x3f000000);
  iVar8 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
  __subsf3(uVar5,DAT_00113894);
  iVar8 = __fixsfsi();
  iVar1 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x11c) + 0x7c))();
  uVar5 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
  __addsf3(uVar5,DAT_00113894);
  iVar1 = __fixsfsi();
  Random(iVar8,iVar1);
  uVar13 = __floatsisf();
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (*pcVar9)(piVar3,aCStack_38);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar3,0,0);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCObject::copy();
  local_28 = p_Var10;
  uVar5 = cocos2d::CCCallFuncND::actionWithTarget((CCObject *)piVar3,p_Var10,(void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


