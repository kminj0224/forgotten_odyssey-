/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bb4c  Symbol: onEnter */

/* cocos2d::CCTransitionJumpZoom::onEnter() */

void __thiscall cocos2d::CCTransitionJumpZoom::onEnter(CCTransitionJumpZoom *this)

{
  CCPoint *pCVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  code *pcVar4;
  int **ppiVar5;
  int *piVar6;
  float fVar7;
  float extraout_s0;
  undefined8 uVar8;
  float extraout_s1;
  undefined4 local_48;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  CCDirector::sharedDirector();
  fVar7 = (float)CCDirector::getWinSize();
  ppiVar5 = (int **)(this + 0xfc);
  uVar8 = CCNode::setScale((CCNode *)*ppiVar5,fVar7);
  piVar6 = *ppiVar5;
  pcVar4 = *(code **)(*piVar6 + 0x3c);
  CCPoint::CCPoint(aCStack_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = (*pcVar4)(piVar6,aCStack_40);
  piVar6 = *ppiVar5;
  pcVar4 = *(code **)(*piVar6 + 0x74);
  CCPoint::CCPoint(aCStack_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = (*pcVar4)(piVar6,aCStack_38);
  piVar6 = *(int **)(this + 0x100);
  pcVar4 = *(code **)(*piVar6 + 0x74);
  CCPoint::CCPoint(aCStack_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar4)(piVar6,aCStack_30);
  pCVar1 = (CCPoint *)__mulsf3(*(undefined4 *)(this + 0x104),0x3e800000);
  CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
  uVar8 = __mulsf3(local_48,0x3e800000);
  uVar2 = CCJumpBy::actionWithDuration
                    ((float)uVar8,pCVar1,(float)((ulonglong)uVar8 >> 0x20),(uint)aCStack_28);
  uVar8 = __mulsf3(*(undefined4 *)(this + 0x104),0x3e800000);
  CCScaleTo::actionWithDuration((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = __mulsf3(*(undefined4 *)(this + 0x104),0x3e800000);
  pCVar3 = (CCFiniteTimeAction *)
           CCScaleTo::actionWithDuration((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar3,uVar2,0);
}


