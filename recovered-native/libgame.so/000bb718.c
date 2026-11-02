/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bb718  Symbol: ani_Die_ani2 */

/* ani_Die_ani2(cocos2d::CCLayer*) */

undefined8 ani_Die_ani2(CCLayer *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 in_r1;
  CCSpriteFrame *pCVar4;
  int iVar5;
  CCNode *this;
  float fVar6;
  float extraout_s0;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (((**(uint **)(iVar1 + 4) < 2) &&
      (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
      *(int *)(*(int *)(iVar1 + 4) + 100) != 4)) &&
     (iVar1 = cocos2d::CCNode::numberOfRunningActions(), iVar1 == 0)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 4;
    this = **(CCNode ***)(DAT_000bb7ec + 0xbb762);
    iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
    iVar1 = cocos2d::CCNode::getChildByTag(this,iVar1);
    cocos2d::CCNode::stopAllActions();
    iVar5 = *(int *)(*(int *)(iVar1 + 300) + 0x14);
    iVar1 = *(int *)(*(int *)(iVar1 + 300) + 0x18) - iVar5 >> 2;
    pCVar4 = (CCSpriteFrame *)0x0;
    if (iVar1 != 0) {
      pCVar4 = *(CCSpriteFrame **)((iVar1 + -1) * 4 + iVar5);
    }
    fVar6 = (float)cocos2d::CCSprite::setDisplayFrame((CCSprite *)param_1,pCVar4);
    uVar2 = cocos2d::CCFadeOut::actionWithDuration(fVar6);
    fVar6 = (float)cocos2d::CCFadeOut::actionWithDuration(extraout_s0);
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar6);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  return CONCAT44(in_r1,param_1);
}


