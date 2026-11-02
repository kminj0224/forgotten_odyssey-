/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bc6c  Symbol: onEnter */

/* cocos2d::CCTransitionRotoZoom::onEnter() */

void __thiscall cocos2d::CCTransitionRotoZoom::onEnter(CCTransitionRotoZoom *this)

{
  CCFiniteTimeAction *pCVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  float fVar5;
  undefined8 uVar6;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  fVar5 = (float)CCTransitionScene::onEnter((CCTransitionScene *)this);
  fVar5 = (float)CCNode::setScale((CCNode *)*(int **)(this + 0xfc),fVar5);
  uVar6 = CCNode::setScale(*(CCNode **)(this + 0x100),fVar5);
  piVar4 = *(int **)(this + 0xfc);
  pcVar3 = *(code **)(*piVar4 + 0x74);
  CCPoint::CCPoint(aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = (*pcVar3)(piVar4,aCStack_30);
  piVar4 = *(int **)(this + 0x100);
  pcVar3 = *(code **)(*piVar4 + 0x74);
  CCPoint::CCPoint(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar3)(piVar4,aCStack_28);
  uVar6 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  pCVar1 = (CCFiniteTimeAction *)
           CCScaleBy::actionWithDuration((float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar2 = CCRotateBy::actionWithDuration((float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  pCVar1 = (CCFiniteTimeAction *)CCSpawn::actions(pCVar1,uVar2,0);
  fVar5 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar2 = CCDelayTime::actionWithDuration(fVar5);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar1,uVar2,0);
}


