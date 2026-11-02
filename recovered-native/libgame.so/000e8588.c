/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8588  Symbol: Lode_File1 */

/* ReinforcementLayer::Lode_File1() */

void ReinforcementLayer::Lode_File1(void)

{
  CCNode *in_r0;
  int *piVar1;
  CCArray *this;
  int iVar2;
  int iVar3;
  CCAction *pCVar4;
  CCNode *this_00;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  float in_s0;
  float extraout_s0;
  float fVar8;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  undefined8 uVar9;
  float extraout_s1_00;
  CCPoint local_38;
  int local_34;
  CCPoint aCStack_30 [8];
  CCSize aCStack_28 [2];
  CCPoint aCStack_20 [12];
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_000e867c + 0xe85a6),(char *)(DAT_000e8680 + 0xe85a8),in_r0,local_38,
                   local_34,1,true,false);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,1);
  this = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this);
  for (uVar7 = 0; (int)uVar7 < iVar2; uVar7 = uVar7 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar7);
    iVar3 = (**(code **)(*piVar1 + 0xa0))();
    if (iVar3 != -1) {
      fVar8 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
      cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
    }
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,1);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0,extraout_s1);
  uVar9 = (*pcVar6)(piVar1,aCStack_30);
  fVar8 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_000e8698 + 0xe8644),aCStack_28,1,
                             (char *)(DAT_000e869c + 0xe8640),fVar8);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1_00);
  (*pcVar6)(piVar1,aCStack_20);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,1);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag(this_00,0);
  (**(code **)(*piVar5 + 0xc4))(piVar5,piVar1);
  return;
}


