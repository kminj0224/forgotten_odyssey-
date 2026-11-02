/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b9b4  Symbol: onEnter */

/* cocos2d::CCTransitionShrinkGrow::onEnter() */

void __thiscall cocos2d::CCTransitionShrinkGrow::onEnter(CCTransitionShrinkGrow *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCAction *pCVar3;
  CCFiniteTimeAction *pCVar4;
  code *pcVar5;
  int **ppiVar6;
  int *piVar7;
  float fVar8;
  float extraout_s0;
  undefined8 uVar9;
  float extraout_s1;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  ppiVar6 = (int **)(this + 0xfc);
  fVar8 = (float)CCTransitionScene::onEnter((CCTransitionScene *)this);
  fVar8 = (float)CCNode::setScale((CCNode *)*ppiVar6,fVar8);
  uVar9 = CCNode::setScale(*(CCNode **)(this + 0x100),fVar8);
  piVar7 = *ppiVar6;
  pcVar5 = *(code **)(*piVar7 + 0x74);
  CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = (*pcVar5)(piVar7,aCStack_30);
  piVar7 = *(int **)(this + 0x100);
  pcVar5 = *(code **)(*piVar7 + 0x74);
  CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = (*pcVar5)(piVar7,aCStack_28);
  uVar1 = CCScaleTo::actionWithDuration((float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar2 = CCScaleTo::actionWithDuration(extraout_s0,extraout_s1);
  piVar7 = *ppiVar6;
  pCVar3 = (CCAction *)(**(code **)(*(int *)this + 0xf0))(this,uVar2);
  CCNode::runAction((CCNode *)piVar7,pCVar3);
  pCVar4 = (CCFiniteTimeAction *)(**(code **)(*(int *)this + 0xf0))(this,uVar1);
  uVar1 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014ba74 + 0x14ba46),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar4,uVar1,0);
}


