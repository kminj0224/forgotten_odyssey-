/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e86a8  Symbol: Lode_File2 */

/* ReinforcementLayer::Lode_File2(int, void*) */

void ReinforcementLayer::Lode_File2(int param_1,void *param_2)

{
  int *piVar1;
  CCArray *this;
  int iVar2;
  int iVar3;
  CCAction *pCVar4;
  CCNode *pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  CCFiniteTimeAction *pCVar8;
  CCCallFunc *pCVar9;
  code *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  float in_s0;
  float fVar13;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  undefined8 uVar14;
  float extraout_s1_00;
  CCPoint local_58;
  int local_54;
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [24];
  CCObject *local_28;
  void *local_24;
  CCObject *local_20;
  undefined4 local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_000e890c + 0xe86c8),(char *)(DAT_000e8910 + 0xe86ca),
                   (CCNode *)param_1,local_58,local_54,1,true,false);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  this = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this);
  for (uVar12 = 0; (int)uVar12 < iVar2; uVar12 = uVar12 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar12);
    iVar3 = (**(code **)(*piVar1 + 0xa0))();
    if (iVar3 != -1) {
      fVar13 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar13);
      cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
    }
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  pcVar10 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0,extraout_s1);
  (*pcVar10)(piVar1,aCStack_50);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  uVar11 = *puVar6;
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar7 = __mulsf3(*puVar6,0x3f000000);
  __subsf3(uVar11,uVar7);
  uVar7 = __fixsfsi();
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  iVar2 = (**(code **)(*piVar1 + 0x38))();
  uVar11 = __fixsfsi(*(undefined4 *)(iVar2 + 4));
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  pcVar10 = *(code **)(*piVar1 + 0x3c);
  __floatsisf(uVar7);
  uVar14 = __floatsisf(uVar11);
  cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar10)(piVar1,aCStack_48);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  pcVar10 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_00,extraout_s1_00);
  (*pcVar10)(piVar1,aCStack_40);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,1);
  uVar14 = (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  fVar13 = (float)((ulonglong)uVar14 >> 0x20);
  if (param_2 == (void *)0x0) {
    pCVar8 = (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration((float)uVar14,fVar13);
    pCVar9 = (CCCallFunc *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    local_28 = *(CCObject **)(DAT_000e8924 + 0xe883c);
    local_24 = param_2;
    uVar7 = cocos2d::CCCallFunc::actionWithTarget(pCVar9,local_28,(_func_void *)0x0);
  }
  else {
    pCVar8 = (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration((float)uVar14,fVar13);
    pCVar9 = (CCCallFunc *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    local_20 = *(CCObject **)(DAT_000e8928 + 0xe8864);
    local_1c = 0;
    uVar7 = cocos2d::CCCallFunc::actionWithTarget(pCVar9,local_20,(_func_void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar8,uVar7,0);
}


